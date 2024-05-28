#pragma once
#include "Options.h"
#include "Looting.h" // for clipsizefordef

void SpawnVehicles()
{
	auto Spawners = GetAll<AFortAthenaVehicleSpawner>();
	PMap<UClass*, int> EvaledVehicles;
	PMap<UClass*, int> VehicleCounts;
	PMap<UClass*, TArray<AFortAthenaVehicleSpawner *>> Vehicles;
	EEvaluateCurveTableResult idk{};

	for (auto& Spawner : Spawners)
	{
		auto VC = Spawner->GetVehicleClass();
		if (VehicleCounts[VC]) VehicleCounts[VC]++;
		else VehicleCounts[VC] = 1;
	}

	for (auto& Spawner : Spawners)
	{
		auto VC = Spawner->GetVehicleClass();
		if (!EvaledVehicles[VC]) {
			auto CD = GameState->MapInfo->VehicleClassDetails.Search<UClass*>([](FVehicleClassDetails& Spawner, UClass*& Class) {
				return Class->DerivativeOf(Spawner.VehicleClass);
			}, VC);

			float Min, Max;
			UDataTableFunctionLibrary::GetDefaultObj()->EvaluateCurveTableRow(CD->VehicleMinSpawnPercent.Curve.CurveTable, CD->VehicleMinSpawnPercent.Curve.RowName, (float)0, &idk, &Min, FString());
			UDataTableFunctionLibrary::GetDefaultObj()->EvaluateCurveTableRow(CD->VehicleMaxSpawnPercent.Curve.CurveTable, CD->VehicleMaxSpawnPercent.Curve.RowName, (float)0, &idk, &Max, FString());

			auto NumToWipe = (int)(Max - Min) == 0 ? 0 : VehicleCounts[VC] * (rand() % (int)(Max - Min));
			NumToWipe += VehicleCounts[VC] * (100 - (int) Max) / 100;
			EvaledVehicles[VC] = NumToWipe;
		}
		
		if (EvaledVehicles[VC] < VehicleCounts[VC]) Vehicles[VC].Add(Spawner);
	}
	for (auto& [VC, VehicleArray] : Vehicles) {
		for (int i = 0; i < EvaledVehicles[VC]; i++) {
			auto x = rand() % VehicleCounts[VC];
			VehicleArray.Remove(x);
		}
	}
	for (auto& [VC, VehicleArray] : Vehicles) {
		for (auto& vehicle : VehicleArray) {
			SpawnActor<AFortAthenaVehicle>(VC, vehicle->K2_GetActorLocation(), vehicle->K2_GetActorRotation());
			vehicle->K2_DestroyActor();
		}
	}
	Spawners.Free();

	LOG("Spawned vehicles");
}

void ServerMove(AFortPhysicsPawn* Pawn, FReplicatedPhysicsPawnState& State)
{
	UPrimitiveComponent* Mesh = (UPrimitiveComponent*)Pawn->RootComponent;

	State.Rotation.X -= 2.5f;
	State.Rotation.Y /= 0.3f;
	State.Rotation.Z -= -2.0f;
	State.Rotation.W /= -1.2f;

	FTransform Transform{};
	Transform.Translation = State.Translation;
	Transform.Rotation = State.Rotation;
	Transform.Scale3D = FVector{ 1, 1, 1 };

	Mesh->K2_SetWorldTransform(Transform, false, nullptr, true);
	Mesh->SetPhysicsLinearVelocity(State.LinearVelocity, 0, FName());
	Mesh->SetPhysicsAngularVelocity(State.AngularVelocity, 0, FName());
	Mesh->bComponentToWorldUpdated = true;
}

__int64 (*ServerOnExitVehicleOG)(AFortPlayerPawnAthena* Pawn);
__int64 ServerOnExitVehicle(AFortPlayerPawnAthena* Pawn) {
	if (!Pawn) return ServerOnExitVehicleOG(Pawn);
	auto PC = (AFortPlayerControllerAthena*)Pawn->Controller;
	if (!PC) return ServerOnExitVehicleOG(Pawn);
	static auto MechGun = FindObject<UFortWeaponRangedItemDefinition>("/Game/Athena/Items/Weapons/Vehicles/WID_OstrichShotgunTest2.WID_OstrichShotgunTest2");
	if (Pawn->CurrentWeapon && Pawn->CurrentWeapon->WeaponData == MechGun) {
		auto itemEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Search<UFortWeaponRangedItemDefinition*>([](FFortItemEntry& entry, UFortWeaponRangedItemDefinition*& Weapon) {
			return entry.ItemDefinition == Weapon;
		}, MechGun);
		if (!itemEntry) return ServerOnExitVehicleOG(Pawn);
		Remove(PC, itemEntry->ItemGuid);
		void* _ = nullptr;
		auto Pickaxe = PC->WorldInventory->Inventory.ReplicatedEntries.Search<void*>([](FFortItemEntry& entry, void*& unused) {
			return entry.ItemDefinition->IsA<UFortWeaponMeleeItemDefinition>();
		}, _);
		auto ret = ServerOnExitVehicleOG(Pawn);
		PC->ServerExecuteInventoryItem(Pickaxe->ItemGuid);
		PC->ClientEquipItem(Pickaxe->ItemGuid, true);
		return ret;
	}
	UFortVehicleSeatWeaponComponent* comp;
	int32 sInd = 0;
	if (auto CharacterVehicle = CastFromUClass<AFortCharacterVehicle>(Pawn)) {
		comp = ((ATestMechVehicle_C *) CharacterVehicle)->FortVehicleAimingWeaponComp;
		sInd = 1;
	}
	else {
		auto Vehicle = PC->MyFortPawn->GetVehicle();
		if (!Vehicle) return ServerOnExitVehicleOG(Pawn);
		sInd = Vehicle->FindSeatIndex(PC->MyFortPawn);
		comp = Vehicle->GetSeatWeaponComponent(sInd);
	}
	if (!comp) return ServerOnExitVehicleOG(Pawn);
	UFortWeaponItemDefinition* Weapon = nullptr;
	for (auto& SD : comp->WeaponSeatDefinitions) {
		if (SD.SeatIndex != sInd) continue;
		Weapon = SD.VehicleWeapon;
		break;
	}
	if (!Weapon || !&PC->WorldInventory->Inventory) return ServerOnExitVehicleOG(Pawn);
	auto itemEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Search<UFortWeaponItemDefinition*>([](FFortItemEntry& entry, UFortWeaponItemDefinition*& Weapon) {
		return entry.ItemDefinition == Weapon;
	}, Weapon);
	if (itemEntry) {
		Remove(PC, itemEntry->ItemGuid);
		void* _ = nullptr;
		auto Pickaxe = PC->WorldInventory->Inventory.ReplicatedEntries.Search<void*>([](FFortItemEntry& entry, void*& unused) {
			return entry.ItemDefinition->IsA<UFortWeaponMeleeItemDefinition>();
		}, _);
		PC->ServerExecuteInventoryItem(Pickaxe->ItemGuid);
		PC->ClientEquipItem(Pickaxe->ItemGuid, true);
	}
	return ServerOnExitVehicleOG(Pawn);
}

void (*ServerRequestSeatChangeOG)(AFortPlayerControllerAthena* PC, int TargetSeatIndex);
void ServerRequestSeatChange(AFortPlayerControllerAthena* PC, int TargetSeatIndex) {
	if (!PC) return ServerRequestSeatChangeOG(PC, TargetSeatIndex);
	UFortVehicleSeatWeaponComponent* comp;
	int32 sInd = 0;
	if (auto CharacterVehicle = CastFromUClass<AFortCharacterVehicle>(PC->Pawn)) {
		sInd = (int) !TargetSeatIndex;
		comp = ((ATestMechVehicle_C *) CharacterVehicle)->FortVehicleAimingWeaponComp;
	}
	else {
		auto Vehicle = PC->MyFortPawn->GetVehicle();
		if (!Vehicle) return ServerRequestSeatChangeOG(PC, TargetSeatIndex);
		sInd = Vehicle->FindSeatIndex(PC->MyFortPawn);
		comp = Vehicle->GetSeatWeaponComponent(sInd);
	}
	if (!comp) return ServerRequestSeatChangeOG(PC, TargetSeatIndex);
	UFortWeaponItemDefinition* Weapon = nullptr;
	for (auto& SD : comp->WeaponSeatDefinitions) {
		if (SD.SeatIndex != sInd) continue;
		Weapon = SD.VehicleWeapon;
		break;
	}

	auto itemEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Search<UFortWeaponItemDefinition*>([](FFortItemEntry& entry, UFortWeaponItemDefinition*& Weapon) {
		return entry.ItemDefinition == Weapon;
	}, Weapon);

	if (itemEntry) {
		Remove(PC, itemEntry->ItemGuid);
	}

	UFortWeaponItemDefinition* Weapon2 = nullptr;
	for (auto& SD : comp->WeaponSeatDefinitions) {
		if (SD.SeatIndex != TargetSeatIndex) continue;
		Weapon2 = SD.VehicleWeapon;
		break;
	}
	if (!Weapon2) {
		void* _ = nullptr;
		auto Pickaxe = PC->WorldInventory->Inventory.ReplicatedEntries.Search<void*>([](FFortItemEntry& entry, void*& unused) {
			return entry.ItemDefinition->IsA<UFortWeaponMeleeItemDefinition>();
		}, _);
		ServerRequestSeatChangeOG(PC, TargetSeatIndex);
		PC->ServerExecuteInventoryItem(Pickaxe->ItemGuid);
		PC->ClientEquipItem(Pickaxe->ItemGuid, true);
		return;
	}

	GiveItem(PC, Weapon2, 1, ClipSizeForDef(Weapon2));
	auto itemEntry2 = PC->WorldInventory->Inventory.ReplicatedEntries.Search<UFortWeaponItemDefinition*>([](FFortItemEntry& entry, UFortWeaponItemDefinition*& Weapon) {
		return entry.ItemDefinition == Weapon;
	}, Weapon2);
	ServerRequestSeatChangeOG(PC, TargetSeatIndex);
	PC->ServerExecuteInventoryItem(itemEntry2->ItemGuid);
	PC->ClientEquipItem(itemEntry2->ItemGuid, true);
}

namespace Vehicles {
	__forceinline void HookAll() {
		HookEvery<AFortPhysicsPawn>(235, ServerMove);
		CREATEHOOK(BaseAddress + 0x19c2730, ServerOnExitVehicle, &ServerOnExitVehicleOG);
		VirtualHook(AFortPlayerControllerAthena::GetDefaultObj()->Vft, 989, ServerRequestSeatChange, (void**)&ServerRequestSeatChangeOG);
	}
}