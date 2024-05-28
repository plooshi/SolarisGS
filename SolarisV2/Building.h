#pragma once
#include "Gamemode.h"

HolderFunc(CantBuild, (__int64 (*)(UWorld*, UObject*, FVector, FRotator, bool, TArray<ABuildingSMActor*>*, char*)) (BaseAddress + 0x15e3500));

void (*ServerCreateBuildingActorOG)(AFortPlayerControllerAthena* PC, FCreateBuildingActorData& CreateBuildingData);
void ServerCreateBuildingActor(AFortPlayerControllerAthena* PC, FCreateBuildingActorData& CreateBuildingData) {
	if (!PC || !PC->bBuildFree) return;
	PC->bBuildFree = false;
	auto BClass = PC->BroadcastRemoteClientInfo->RemoteBuildableClass;

	TArray<ABuildingSMActor*> RemoveBuildings;
	char idk;
	if (CantBuild(World, BClass, CreateBuildingData.BuildLoc, CreateBuildingData.BuildRot, CreateBuildingData.bMirrored, &RemoveBuildings, &idk)) {
		PC->bBuildFree = true;
		return ServerCreateBuildingActorOG(PC, CreateBuildingData);
	}
	auto res = UFortKismetLibrary::GetDefaultObj()->K2_GetResourceItemDefinition(((ABuildingSMActor*)BClass->DefaultObject)->ResourceType);
	auto itemEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Search<UFortResourceItemDefinition*>([](FFortItemEntry& entry, UFortResourceItemDefinition*& Resource) {
		return entry.ItemDefinition == Resource;
	}, res);
	if (!itemEntry) {
		PC->bBuildFree = true;
		return ServerCreateBuildingActorOG(PC, CreateBuildingData);
	}

	itemEntry->Count -= 10;
	if (itemEntry->Count <= 0) Remove(PC, itemEntry->ItemGuid);
	ReplaceEntry((AFortPlayerControllerAthena*)PC, *itemEntry);

	for (auto& RB : RemoveBuildings) RB->K2_DestroyActor();
	RemoveBuildings.Free();

	ABuildingSMActor* Building = SpawnActor<ABuildingSMActor>(BClass, CreateBuildingData.BuildLoc, CreateBuildingData.BuildRot, PC);
	Building->bPlayerPlaced = true;
	Building->InitializeKismetSpawnedBuildingActor(Building, PC, true);
	Building->TeamIndex = ((AFortPlayerStateAthena*)PC->PlayerState)->TeamIndex;
	Building->Team = EFortTeam(Building->TeamIndex);
	PC->bBuildFree = true;
	return ServerCreateBuildingActorOG(PC, CreateBuildingData);
}

void ServerBeginEditingBuildingActor(AFortPlayerControllerAthena* PC, ABuildingSMActor* Building)
{
	if (!PC || !PC->MyFortPawn || !Building)
		return;

	AFortPlayerStateAthena* PlayerState = (AFortPlayerStateAthena*)PC->PlayerState;
	if (!PlayerState)
		return;

	void* cuh;
	auto itemEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Search<void*>([](FFortItemEntry& entry, void*& Resource) {
		return entry.ItemDefinition->IsA<UFortEditToolItemDefinition>();
	}, cuh);
	if (!itemEntry)
		return;

	ServerExecuteInventoryItem(PC, itemEntry->ItemGuid);
}

HolderFunc(ReplaceBuildingActor, (ABuildingSMActor* (*)(ABuildingSMActor* BuildingSMActor, unsigned int a2, UObject* a3, unsigned int a4, int a5, bool bMirrored, AFortPlayerControllerAthena* PC)) (BaseAddress + 0x13aa010));

void ServerEditBuildingActor(AFortPlayerControllerAthena* PC, ABuildingSMActor* Building, TSubclassOf<ABuildingSMActor> NewClass, uint8 RotationIterations, bool bMirrored)
{
	if (!PC || !Building || !NewClass)
		return;

	Building->SetNetDormancy(ENetDormancy::DORM_DormantAll);
	Building->EditingPlayer = nullptr;

	ABuildingSMActor* NewBuild = ReplaceBuildingActor(Building, 1, NewClass, Building->CurrentBuildingLevel, RotationIterations, bMirrored, PC);

	if (NewBuild)
		NewBuild->bPlayerPlaced = true;
}

void ServerEndEditingBuildingActor(AFortPlayerControllerAthena* PC, ABuildingSMActor* Building)
{
	if (!PC || !PC->MyFortPawn || !Building || Building->EditingPlayer != (AFortPlayerStateZone*)PC->PlayerState)
		return;

	Building->SetNetDormancy(ENetDormancy::DORM_DormantAll);
	Building->EditingPlayer = nullptr;

	AFortWeap_EditingTool* EditTool = CastFromUClass<AFortWeap_EditingTool>(PC->MyFortPawn->CurrentWeapon);

	if (!EditTool) return;

	EditTool->EditActor = nullptr;
	EditTool->OnRep_EditActor();
}

void ServerRepairBuildingActor(AFortPlayerControllerAthena* PC, ABuildingSMActor* Building) {
	if (!PC) return;

	auto Price = (int32)std::floor((10.f * (1.f - Building->GetHealthPercent())) * 0.75f);
	auto res = UFortKismetLibrary::GetDefaultObj()->K2_GetResourceItemDefinition(Building->ResourceType);
	auto itemEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Search<UFortResourceItemDefinition*>([](FFortItemEntry& entry, UFortResourceItemDefinition*& Resource) {
		return entry.ItemDefinition == Resource;
	}, res);
	itemEntry->Count -= Price;
	if (itemEntry->Count <= 0) Remove(PC, itemEntry->ItemGuid);
	else ReplaceEntry(PC, *itemEntry);

	Building->RepairBuilding(PC, Price);
}

void (*OnDamageServerOG)(ABuildingSMActor*, float, FGameplayTagContainer, FVector, FHitResult, AFortPlayerControllerAthena*, AActor*, FGameplayEffectContextHandle);
void OnDamageServer(ABuildingSMActor* Actor, float Damage, FGameplayTagContainer DamageTags, FVector Momentum, FHitResult HitInfo, AFortPlayerControllerAthena* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext) {
	if (!InstigatedBy || Actor->bPlayerPlaced || Actor->GetHealth() == 1 || Actor->IsA(UObject::FindClassFast("B_Athena_VendingMachine_C")) || Actor->IsA(GameState->MapInfo->LlamaClass)) return OnDamageServerOG(Actor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);
	if (!DamageCauser || !DamageCauser->IsA<AFortWeapon>() || !CastFromUClass<UFortWeaponMeleeItemDefinition>(((AFortWeapon*)DamageCauser)->WeaponData)) return OnDamageServerOG(Actor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);

	static auto PickaxeTag = FName(L"Weapon.Melee.Impact.Pickaxe");
	auto entry = DamageTags.GameplayTags.Search<FName>([](FGameplayTag& entry, FName& PickaxeTag) {
		return entry.TagName.ComparisonIndex == PickaxeTag.ComparisonIndex;
	}, PickaxeTag);
	if (!entry) return OnDamageServerOG(Actor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);

	auto Resource = UFortKismetLibrary::GetDefaultObj()->K2_GetResourceItemDefinition(Actor->ResourceType);
	if (!Resource) return OnDamageServerOG(Actor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);

	static auto Stone = FindObject<UFortResourceItemDefinition>("/Game/Items/ResourcePickups/StoneItemData.StoneItemData");
	static auto Metal = FindObject<UFortResourceItemDefinition>("/Game/Items/ResourcePickups/MetalItemData.MetalItemData");

	auto MaxMatF = MaxWood;
	if (Resource == Stone) MaxMatF = MaxStone;
	else if (Resource == Metal) MaxMatF = MaxMetal;
	int MaxMat = (int)MaxMatF;


	FCurveTableRowHandle& BuildingResourceAmountOverride = Actor->BuildingResourceAmountOverride;
	int ResCount = 0;

	if (Actor->BuildingResourceAmountOverride.RowName.ComparisonIndex > 0) {
		static UCurveTable* CurveTable = GameState->CurrentPlaylistInfo.BasePlaylist->ResourceRates;

		if (!CurveTable)
			CurveTable = FindObject<UCurveTable>("/Game/Athena/Balance/DataTables/AthenaResourceRates.AthenaResourceRates");

		float Out;
		UDataTableFunctionLibrary::GetDefaultObj()->EvaluateCurveTableRow(CurveTable, Actor->BuildingResourceAmountOverride.RowName, 0.f, nullptr, &Out, FString());

		float RC = Out / (Actor->GetMaxHealth() / Damage);

		ResCount = (int)round(RC);
	}


	auto itemEntry = InstigatedBy->WorldInventory->Inventory.ReplicatedEntries.Search<UFortResourceItemDefinition*>([](FFortItemEntry& entry, UFortResourceItemDefinition*& Resource) {
		return entry.ItemDefinition == Resource;
	}, Resource);

	if (itemEntry) {
		itemEntry->Count += ResCount;
		if (itemEntry->Count > MaxMat)
		{
			SpawnPickup(InstigatedBy->Pawn->K2_GetActorLocation(), itemEntry->ItemDefinition, itemEntry->Count - MaxMat, 0, EFortPickupSourceTypeFlag::Tossed, EFortPickupSpawnSource::Unset, InstigatedBy->MyFortPawn);
			itemEntry->Count = MaxMat;
		}
		ReplaceEntry(InstigatedBy, *itemEntry);
	}
	else {
		if (ResCount > MaxMat) {
			SpawnPickup(InstigatedBy->Pawn->K2_GetActorLocation(), itemEntry->ItemDefinition, ResCount - MaxMat, 0, EFortPickupSourceTypeFlag::Tossed, EFortPickupSpawnSource::Unset, InstigatedBy->MyFortPawn);
			ResCount = MaxMat;
		}
		GiveItem(InstigatedBy, Resource, ResCount, 0, 0, false);
	}

	InstigatedBy->ClientReportDamagedResourceBuilding(Actor, Actor->ResourceType, ResCount, false, Damage == 100.f);
	return OnDamageServerOG(Actor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);
}

void ServerCreateBuildingAndSpawnDeco(ATrapTool_C* Tool, FVector_NetQuantize10& BuildingLocation, FRotator& BuildingRotation, FVector_NetQuantize10& Location, FRotator& Rotation, EBuildingAttachmentType InBuildingAttachmentType) {
	auto Pawn = (AFortPlayerPawnAthena *) Tool->Owner;
	auto PC = (AFortPlayerControllerAthena *) Pawn->Controller;
	if (!PC) return;
	auto Mat = PC->BroadcastRemoteClientInfo->RemoteBuildingMaterial;
	std::string MatName;
	std::string MatNameShort;
	switch ((int)Mat) {
	case 0:
		MatName = "Wood";
		MatNameShort = "W";
		break;
	case 1:
		MatName = "Stone";
		MatNameShort = "S";
		break;
	case 2:
		MatName = "Metal";
		MatNameShort = "M";
		break;
	}
	std::string BuildingType;
	switch ((int)InBuildingAttachmentType) {
	case 0:
	case 6:
	case 7:
	case 2:
		BuildingType = "Floor";
		break;
	case 1:
		BuildingType = "Solid";
		break;
	}
	auto Build = FindObject<UClass>("/Game/Building/ActorBlueprints/Player/" + MatName + "/L1/PBWA_" + MatNameShort + "1_" + BuildingType + ".PBWA_" + MatNameShort + "1_" + BuildingType + "_C");
	TArray<ABuildingSMActor*> RemoveBuildings;
	char idk;
	ABuildingSMActor* Building = nullptr;
	if (CantBuild(World, Build, BuildingLocation, BuildingRotation, false, &RemoveBuildings, &idk)) return;
	auto res = UFortKismetLibrary::GetDefaultObj()->K2_GetResourceItemDefinition(((ABuildingSMActor*)Build->DefaultObject)->ResourceType);
	auto itemEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Search<UFortResourceItemDefinition*>([](FFortItemEntry& entry, UFortResourceItemDefinition*& Resource) {
		return entry.ItemDefinition == Resource;
	}, res);
	if (!itemEntry) return;

	itemEntry->Count -= 10;
	if (itemEntry->Count <= 0) Remove(PC, itemEntry->ItemGuid);
	ReplaceEntry((AFortPlayerControllerAthena*)PC, *itemEntry);

	for (auto& RB : RemoveBuildings) RB->K2_DestroyActor();
	RemoveBuildings.Free();

	Building = SpawnActor<ABuildingSMActor>(Build, BuildingLocation, BuildingRotation, PC);
	Building->bPlayerPlaced = true;
	Building->InitializeKismetSpawnedBuildingActor(Building, PC, true);
	Building->TeamIndex = ((AFortPlayerStateAthena*)PC->PlayerState)->TeamIndex;
	Building->Team = EFortTeam(Building->TeamIndex);
	Tool->ServerSpawnDeco(Location, Rotation, Building, InBuildingAttachmentType);
}

void (*ServerSpawnDecoOG2)(ATrapTool_C* Tool, FVector& Location, FRotator& Rotation, ABuildingSMActor* AttachedActor, EBuildingAttachmentType InBuildingAttachmentType);
void (*ServerSpawnDecoOG)(ATrapTool_C* Tool, FVector& Location, FRotator& Rotation, ABuildingSMActor* AttachedActor, EBuildingAttachmentType InBuildingAttachmentType);
void ServerSpawnDeco(ATrapTool_C* Tool, FVector& Location, FRotator& Rotation, ABuildingSMActor* AttachedActor, EBuildingAttachmentType InBuildingAttachmentType) {
	static auto CT = UObject::FindClassFast("TrapTool_ContextTrap_Athena_C");
	decltype(ServerSpawnDecoOG) OG = ServerSpawnDecoOG;
	auto Def = Tool->ItemDefinition;
	if (Tool->IsA(CT)) {
		OG = ServerSpawnDecoOG2;
		Def = ((ATrapTool_ContextTrap_Athena_C*)Tool)->ContextTrapItemDefinition;
	}
	auto Pawn = (AFortPlayerPawnAthena*)Tool->Owner;
	if (!Pawn) return OG(Tool, Location, Rotation, AttachedActor, InBuildingAttachmentType);
	auto PC = (AFortPlayerControllerAthena*)Pawn->Controller;
	if (!PC) return OG(Tool, Location, Rotation, AttachedActor, InBuildingAttachmentType);
	OG(Tool, Location, Rotation, AttachedActor, InBuildingAttachmentType);

	auto res = UFortKismetLibrary::GetDefaultObj()->K2_GetResourceItemDefinition(AttachedActor->ResourceType);
	auto itemEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Search<UFortItemDefinition*>([](FFortItemEntry& entry, UFortItemDefinition*& Trap) {
		return entry.ItemDefinition == Trap;
	}, Def);
	if (!itemEntry) return;

	itemEntry->Count--;
	if (itemEntry->Count <= 0) Remove(PC, itemEntry->ItemGuid);
	else ReplaceEntry((AFortPlayerControllerAthena*)PC, *itemEntry);

	auto trapPtr = AttachedActor->AttachedBuildingActors.Search<uint8>([](ABuildingSMActor*& actor, uint8& team) {
		return actor->IsA<ABuildingTrap>() && actor->TeamIndex != team;
	}, ((AFortPlayerStateAthena*)PC->PlayerState)->TeamIndex);
	auto trap = trapPtr ? *trapPtr : nullptr;
	if (trap) {
		trap->TeamIndex = ((AFortPlayerStateAthena*)PC->PlayerState)->TeamIndex;
		trap->Team = EFortTeam(trap->TeamIndex);
	}
}

void (*OnBuildingActorInitializedOG)(AB_Athena_VendingMachine_C* VM, EFortBuildingInitializationReason InitializationReason, EFortBuildingPersistentState BuildingPersistentState);
void OnBuildingActorInitialized(AB_Athena_VendingMachine_C* VM, EFortBuildingInitializationReason InitializationReason, EFortBuildingPersistentState BuildingPersistentState) {
	OnBuildingActorInitializedOG(VM, InitializationReason, BuildingPersistentState);
	if (InitializationReason == EFortBuildingInitializationReason::StaticallyPlaced) {
		static UCurveTable* GameData = GameState->CurrentPlaylistInfo.BasePlaylist->GameData;
		if (!GameData) {
			GameData = FindObject<UCurveTable>("/Game/Athena/Balance/DataTables/AthenaGameData.AthenaGameData");
		}

		static PMap<int, float> WeightMap;
		static float Sum = 0;
		static bool Idfk = false;
		static EEvaluateCurveTableResult idk{};
		static float Weight;
		static auto VMGroup = FName(L"Loot_AthenaVending");

		if (!Idfk) {
			Idfk = true;


			for (int i = 0; i < 6; i++)
			{
				float Weight;
				UDataTableFunctionLibrary::GetDefaultObj()->EvaluateCurveTableRow(GameState->MapInfo->VendingMachineRarityCount.Curve.CurveTable, GameState->MapInfo->VendingMachineRarityCount.Curve.RowName, (float)i, &idk, &Weight, FString());
				WeightMap[i] = Weight;
				Sum += Weight;
			}

			auto VMS = GetAll<AB_Athena_VendingMachine_C>(UObject::FindClassFast("B_Athena_VendingMachine_C"));

			UDataTableFunctionLibrary::GetDefaultObj()->EvaluateCurveTableRow(GameState->MapInfo->VendingMachineRarityCount.Curve.CurveTable, GameState->MapInfo->VendingMachineRarityCount.Curve.RowName, (float)0, &idk, &Weight, FString());
		}

		if (Sum > Weight) {
		PickNum:
			float TotalWeight = std::accumulate(WeightMap.begin(), WeightMap.end(), 0.0f, [&](float acc, const PPair<int, float>& p) { return acc + p.Value; });

			auto RandomNum = UKismetMathLibrary::GetDefaultObj()->RandomFloatInRange(0, TotalWeight);

			int Rarity = 0;
			bool found = false;
			for (auto& Element : WeightMap)
			{
				float Weight = Element.Value;

				if (Weight == 0)
					continue;

				if (RandomNum <= Weight)
				{
					Rarity = Element.Key;

					found = true;
					break;
				}

				RandomNum -= Weight;
			}
			if (!found) goto PickNum;

			if (Rarity == 0) {
				VM->K2_DestroyActor();
				return;
			}

			auto hi = 0;
			for (int i = 0; i < VM->ItemCollections.Num(); i++) {
				if (hi > 5) {
					hi = 0;
					goto PickNum;
				}
				auto& Collection = VM->ItemCollections[i];

				auto LDS = ChooseLootForContainer(VMGroup, Rarity);

				if (Collection.OutputItemEntry.Num() > 0) {
					Collection.OutputItemEntry.ResetNum();
					Collection.OutputItem = nullptr;
				}
				for (int x = 0; x < LDS.Num(); x++) {
					FFortItemEntry* LD = LDS[x];

					if (IsPrimaryQuickbar(LD->ItemDefinition)) {
						bool InCollector = false;
						for (auto& IC : VM->ItemCollections) {
							if (IC.OutputItem == LD->ItemDefinition) InCollector = true;
						}
						if (InCollector) goto PickNum;
						Collection.OutputItem = (UFortWorldItemDefinition*)LD->ItemDefinition;
					}
					Collection.OutputItemEntry.Add(*LD);
				}
				if (!Collection.OutputItem) {
					i--;
					hi++;
					continue;
				}

				std::wstring RowName = L"Default.VendingMachine.Cost.";
				switch (i) {
				case 0:
					RowName += L"Wood";
					break;
				case 1:
					RowName += L"Stone";
					break;
				case 2:
					RowName += L"Metal";
					break;
				}
				Collection.InputCount.Curve.CurveTable = GameData;
				Collection.InputCount.Curve.RowName = FName(RowName.c_str());
				Collection.InputCount.Value = (float)Rarity - 1;
			}

			VM->bUseInstanceLootValueOverrides = true;
			VM->StartingGoalLevel = Rarity;
			VM->OverrideVendingMachineRarity = EFortRarity(Rarity);
			VM->OverrideGoal = 0;
		}
		else {
			VM->K2_DestroyActor();
		}
	}
}


namespace Building {
	__forceinline void HookAll() {
		auto PCDefault = AFortPlayerControllerAthena::GetDefaultObj();
		auto TrapToolDefault = UObject::FindClassFast("TrapTool_C")->DefaultObject;
		auto TrapToolCTDefault = UObject::FindClassFast("TrapTool_ContextTrap_Athena_C")->DefaultObject;
		auto VM = UObject::FindClassFast("B_Athena_VendingMachine_C")->DefaultObject;
		CREATEHOOK(BaseAddress + 0x1a13ba0, ServerCreateBuildingActor, &ServerCreateBuildingActorOG);
		VirtualHook(PCDefault->Vft, 552, ServerBeginEditingBuildingActor);
		VirtualHook(PCDefault->Vft, 547, ServerEditBuildingActor);
		VirtualHook(PCDefault->Vft, 550, ServerEndEditingBuildingActor);
		VirtualHook(PCDefault->Vft, 541, ServerRepairBuildingActor);
		VirtualHook(TrapToolDefault->Vft, 325, ServerCreateBuildingAndSpawnDeco);
		VirtualHook(TrapToolDefault->Vft, 327, ServerSpawnDeco, (void **) &ServerSpawnDecoOG);
		VirtualHook(TrapToolCTDefault->Vft, 325, ServerCreateBuildingAndSpawnDeco);
		VirtualHook(TrapToolCTDefault->Vft, 327, ServerSpawnDeco, (void**)&ServerSpawnDecoOG2);

		VirtualHook(VM->Vft, 194, OnBuildingActorInitialized, (void**)&OnBuildingActorInitializedOG);

		// pickaxing lol
		CREATEHOOK(BaseAddress + 0x1c602e0, OnDamageServer, &OnDamageServerOG);
	}
}