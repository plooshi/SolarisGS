#pragma once
#include "Includes.h"
#include "Util.h"

UDataTable* LootTierData = nullptr;
UDataTable* LootPackages = nullptr;


HolderFromExistingClass(LootDrop, FFortItemEntry);

int GetLevel(const FDataTableCategoryHandle& categoryh)
{
	auto DataTable = categoryh.DataTable;

	if (!DataTable)
		return 0;

	if (!categoryh.ColumnName.ComparisonIndex)
		return 0;

	if (!categoryh.RowContents.ComparisonIndex)
		return 0;

	TArray<FFortLootLevelData*> lldata;


	for (auto& LootLevelDataPair : (TMap<FName, FFortLootLevelData*>) categoryh.DataTable->RowMap)
	{
		if (LootLevelDataPair.Value()->Category != categoryh.RowContents)
			continue;

		lldata.Add(LootLevelDataPair.Value());
	}

	if (lldata.Num() > 0)
	{
		int ind = -1;
		int ll = 0;

		for (int i = 0; i < lldata.Num(); i++)
		{
			if (lldata[i]->LootLevel <= GameState->WorldLevel && lldata[i]->LootLevel > ll)
			{
				ll = lldata[i]->LootLevel;
				ind = i;
			}
		}

		if (ind != -1)
		{
			auto subbed = lldata[ind]->MaxItemLevel - lldata[ind]->MinItemLevel;

			if (subbed <= -1) subbed = 0;
			else
			{
				auto calc = (int) (((float) rand() / 32767) * (float) (subbed + 1));
				if (calc <= subbed) subbed = calc;
			}

			return subbed + lldata[ind]->MinItemLevel;
		}
	}

	return 0;
}

int ClipSizeForDef(UFortWeaponItemDefinition* Def)
{
	if (!Def) return 0;

	for (auto& Pair : (TMap<SDK::FName, FFortRangedWeaponStats*>) Def->WeaponStatHandle.DataTable->RowMap)
	{
		if (Def->WeaponStatHandle.RowName.ComparisonIndex && Pair.Value() && Def->WeaponStatHandle.RowName.ComparisonIndex == Pair.Key().ComparisonIndex) return Pair.Value()->ClipSize;
	}

	return 0;
}


template <typename KeyType, typename ValueType>
class PPair {
public:
	KeyType Key;
	ValueType Value;

	PPair(KeyType Key, ValueType Value) : Key(Key), Value(Value) {}
	PPair() : Key(KeyType()), Value(ValueType()) {}
};

template <typename KeyType, typename ValueType>
class PMap {
	using PairType = PPair<KeyType, ValueType>;
	TArray<PairType> Pairs;

public:
	PMap() : Pairs() {}

	ValueType& operator[](KeyType Key) {
		for (auto& Pair : Pairs) {
			if (Pair.Key == Key) return Pair.Value;
		}
		auto& Pair = Pairs.Add(PairType(Key, ValueType()));
		return Pair.Value;
	}

	bool contains(KeyType Key) {
		for (auto& Pair : Pairs) {
			if (Pair.Key == Key) return true;
		}
		return false;
	}

	int32 size() {
		return Pairs.Num();
	}

	auto begin() { return Pairs.begin(); }
	auto end() { return Pairs.end(); }
};

template <typename T>
PPair<FName, T*> PickWeighted(PMap<FName, T*>& Map, float (*RandFunc)(float)) {
	float TotalWeight = std::accumulate(Map.begin(), Map.end(), 0.0f, [&](float acc, const PPair<FName, T*>& p) { return acc + p.Value->Weight; });
	float RandomNumber = RandFunc(TotalWeight);

	for (auto& Element : Map)
	{
		float Weight = Element.Value->Weight;

		if (Weight == 0)
			continue;

		if (RandomNumber <= Weight) return Element;

		RandomNumber -= Weight;
	}

	PPair<FName, T*> None;
	return None;
}

FFortItemEntry *MakeItemEntry(UFortWorldItemDefinition *ID, int32 Count, int32 Level) {
	FFortItemEntry* IE = new FFortItemEntry();

	IE->MostRecentArrayReplicationKey = -1;
	IE->ReplicationID = -1;
	IE->ReplicationKey = -1;

	IE->ItemDefinition = ID;
	IE->Count = Count;
	IE->LoadedAmmo = ID->IsA<UFortWeaponItemDefinition>() ? ClipSizeForDef((UFortWeaponItemDefinition*)ID) : 0;
	IE->Durability = 1.f;
	IE->GameplayAbilitySpecHandle = FGameplayAbilitySpecHandle(-1);
	IE->ParentInventory.ObjectIndex = -1;
	IE->Level = Level;

	return IE;
}

void SetupLDSForPackage(TArray<LootDropHolder>& LDS, SDK::FName Package, int i, int WorldLevel = GameState->WorldLevel) {
	static PMap<FName, FFortLootPackageData*> LPGroupsAll;

	if (!LootPackages) {
		LootPackages = GameState->CurrentPlaylistInfo.BasePlaylist->LootPackages;
		if (!LootPackages) LootPackages = FindObject<UDataTable>("/Game/Items/Datatables/AthenaLootPackages_Client.AthenaLootPackages_Client");
		if (!LootPackages) return;
		for (auto& [Key, Val] : (TMap<FName, FFortLootPackageData*>) LootPackages->RowMap) {
			LPGroupsAll[Key] = Val;
		}
		if (auto CompositeTable = CastFromUClass<UCompositeDataTable>(LootPackages)) {
			for (auto& PT : CompositeTable->ParentTables) {
				for (auto& [Key, Val] : (TMap<FName, FFortLootPackageData*>) PT->RowMap) {
					if (LPGroupsAll.contains(Key) && LPGroupsAll[Key]->Weight <= Val->Weight) continue;
					else LPGroupsAll[Key] = Val;
				}
			}
		}
	}

	PMap<FName, FFortLootPackageData*> LPGroups;
	for (auto const& [Key, Val] : LPGroupsAll) {
		if (Val->LootPackageID == Package && (i != -1 ? Val->LootPackageCategory == i : true) && (WorldLevel >= 0 ? (
			(Val->MaxWorldLevel >= 0 ? WorldLevel <= Val->MaxWorldLevel : true) &&
			(Val->MinWorldLevel >= 0 ? WorldLevel >= Val->MinWorldLevel : true)
			) : true)) LPGroups[Key] = Val;
	}
	if (LPGroups.size() == 0) return;


	auto pair = PickWeighted(LPGroups, [](float Total) { return ((float) rand() / 32767) * Total; });
	auto LP = pair.Value;
	if (!LP) return;
	if (LP->LootPackageCall.Num() > 1)
	{
		for (int i = 0; i < LP->Count; i++) {
			SetupLDSForPackage(LDS, FName(LP->LootPackageCall), 0);
		}

		return;
	}

	auto ID = CastFromUClass<UFortWorldItemDefinition>(LP->ItemDefinition);
	if (!ID) return;

	bool found = false;
	for (auto& LD : LDS) {
		if (LD->ItemDefinition == ID) {
			LD->Count += LP->Count;
			if (LD->Count > ID->MaxStackSize) {
				auto OGCount = LD->Count;
				LD->Count = ID->MaxStackSize;

				auto IE = MakeItemEntry(ID, OGCount - ID->MaxStackSize, std::clamp(GetLevel(ID->LootLevelData), ID->MinLevel, ID->MaxLevel));

				if (!IsPrimaryQuickbar(LD->ItemDefinition)) LDS.Add(IE);
			}
			if (!IsPrimaryQuickbar(LD->ItemDefinition)) found = true;
		}
	}

	if (!found && LP->Count > 0) {
		auto IE = MakeItemEntry(ID, LP->Count, std::clamp(GetLevel(ID->LootLevelData), ID->MinLevel, ID->MaxLevel));

		LDS.Add(IE);
	}
}

TArray<LootDropHolder> ChooseLootForContainer(FName TG, int LootTier = -1, int WorldLevel = GameState->WorldLevel) {
	static PMap<FName, FFortLootTierData*> LTDGroupsAll;
	if (!LootTierData) {
		LootTierData = GameState->CurrentPlaylistInfo.BasePlaylist->LootTierData;
		if (!LootTierData) LootTierData = FindObject<UDataTable>("/Game/Items/Datatables/AthenaLootTierData_Client.AthenaLootTierData_Client");
		if (!LootTierData) return {};
		for (auto& [Key, Val] : (TMap<FName, FFortLootTierData*>) LootTierData->RowMap) {
			LTDGroupsAll[Key] = Val;
		}
		if (auto CompositeTable = CastFromUClass<UCompositeDataTable>(LootTierData)) {
			for (auto& PT : CompositeTable->ParentTables) {
				for (auto& [Key, Val] : (TMap<FName, FFortLootTierData*>) PT->RowMap) {
					if (LTDGroupsAll.contains(Key) && LTDGroupsAll[Key]->Weight <= Val->Weight) continue;
					else LTDGroupsAll[Key] = Val;
				}
			}
		}
	}

	PMap<FName, FFortLootTierData*> LTDGroups;
	for (auto const& [Key, Val] : LTDGroupsAll) {
		if (Val->TierGroup == TG && (LootTier == -1 ? true : LootTier == Val->LootTier)) LTDGroups[Key] = Val;
	}
	auto pair = PickWeighted(LTDGroups, [](float Total) { return ((float) rand() / 32767) * Total; });
	auto LTD = pair.Value;
	if (!LTD) return {};

	float LDCount = 0;
	if (LTD->NumLootPackageDrops > 0) {
		LDCount = LTD->NumLootPackageDrops < 1 ? 1 : (float)((int)((LTD->NumLootPackageDrops * 2) - .5f) >> 1);
		if (LTD->NumLootPackageDrops > 1) {
			float idk = LTD->NumLootPackageDrops - LDCount;
			if (idk > 0.0000099999997f) LDCount += idk >= ((float) rand() / 32767);
		}
	}

	float AmLD = 0;
	float MinLD = 0;

	for (auto& M : LTD->LootPackageCategoryMinArray) MinLD += M;

	int sum = 0;

	for (int i = 0; i < LTD->LootPackageCategoryWeightArray.Num(); ++i)
	{
		if (LTD->LootPackageCategoryWeightArray[i] > 0 && LTD->LootPackageCategoryMaxArray[i] != 0) sum += LTD->LootPackageCategoryWeightArray[i];
	}

	while (sum > 0)
	{
		MinLD++;

		if (MinLD >= LTD->NumLootPackageDrops) {
			AmLD = MinLD;
			break;
		}

		sum--;
	}
	
	if (!AmLD) AmLD = MinLD;
	TArray<LootDropHolder> LDS;

	for (int i = 0; i < AmLD && i < LTD->LootPackageCategoryMinArray.Num(); i++)
	{
		for (int j = 0; j < LTD->LootPackageCategoryMinArray[i] && LTD->LootPackageCategoryMinArray[i] >= 1; j++)
		{
			SetupLDSForPackage(LDS, LTD->LootPackage, i, WorldLevel);
		}
	}


	return LDS;
}

void SpawnLoot(FName& TG, FVector Loc) {
	auto& RTG = TG;
	for (auto& Pair : GameMode->RedirectAthenaLootTierGroups)
	{
		if (Pair.Key() == TG) {
			RTG = Pair.Value();
			break;
		}
	}
	auto LDS = ChooseLootForContainer(RTG);
	for (int32 i = 0; i < LDS.Num(); i++) {
		SpawnPickup(Loc, *LDS[i]);
	}
}
void SpawnFloorLootForContainer(UBlueprintGeneratedClass* ContainerType) {
	auto Containers = GetAll<ABuildingContainer>(ContainerType);

	for (auto& BCContainer : Containers) {
		SpawnLoot(BCContainer->SearchLootTierGroup, BCContainer->K2_GetActorLocation() + BCContainer->GetActorForwardVector() * BCContainer->LootSpawnLocation_Athena.X + BCContainer->GetActorRightVector() * BCContainer->LootSpawnLocation_Athena.Y + BCContainer->GetActorUpVector() * BCContainer->LootSpawnLocation_Athena.Z);
		BCContainer->K2_DestroyActor();
	}

	Containers.Free();
	LOG("Spawned floor loot for container " + ContainerType->GetName());
}

bool PickLootDrops(UObject* WorldContextObject, TArray<FFortItemEntry>* OutLootToDrop, FName TierGroupName, int32 WorldLevel, int32 ForcedLootTier) {
	if (_ReturnAddress() == BaseAddress + 0x1df673b) {
		auto LDS = ChooseLootForContainer(TierGroupName, ForcedLootTier, WorldLevel);
		for (int32 i = 0; i < LDS.Num(); i++) {
			OutLootToDrop->Add(*LDS[i]);
		}

		return true;
	}
	return false;
}

AFortPickup *(*PickupRet0)();
AFortPickup* SupplySpawnPickup(AFortAthenaSupplyDrop *Drop, UFortWorldItemDefinition* ItemDefinition, int32 NumberToSpawn, AFortPawn* TriggeringPawn, FVector& Position, FVector& Direction) {
	if (_ReturnAddress() == BaseAddress + 0x1d0b99b) {
		return SpawnPickup(Position, ItemDefinition, NumberToSpawn, ClipSizeForDef(CastFromUClass<UFortWeaponItemDefinition>(ItemDefinition)), EFortPickupSourceTypeFlag::Container, EFortPickupSpawnSource::SupplyDrop);
	}
	return PickupRet0();
}

namespace Looting {
	__forceinline void HookAll() {
		CREATEHOOK(BaseAddress + 0x3782b0, PickLootDrops, nullptr);
		CREATEHOOK(BaseAddress + 0x1194830, SupplySpawnPickup, &PickupRet0);
	}
}