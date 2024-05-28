#pragma once

AFortPickupAthena* SpawnPickup(FVector Loc, UFortItemDefinition* Def, int Count, int LoadedAmmo, EFortPickupSourceTypeFlag SourceTypeFlag = EFortPickupSourceTypeFlag::Tossed, EFortPickupSpawnSource SpawnSource = EFortPickupSpawnSource::Unset, AFortPlayerPawn* Pawn = nullptr, bool Toss = true)
{
	auto MechWeapon = FindObject<UFortWeaponRangedItemDefinition>("/Game/Athena/Items/Weapons/Vehicles/WID_OstrichShotgunTest2.WID_OstrichShotgunTest2");
	if (Def == MechWeapon) return nullptr;

	AFortPickupAthena* NewPickup = SpawnActor<AFortPickupAthena>(Loc);
	NewPickup->bRandomRotation = true;
	NewPickup->PrimaryPickupItemEntry.ItemDefinition = Def;
	NewPickup->PrimaryPickupItemEntry.Count = Count;
	NewPickup->PrimaryPickupItemEntry.LoadedAmmo = LoadedAmmo;
	NewPickup->OnRep_PrimaryPickupItemEntry();
	NewPickup->PawnWhoDroppedPickup = Pawn;

	NewPickup->TossPickup(Loc, Pawn, -1, Toss, SourceTypeFlag, SpawnSource);
	NewPickup->bTossedFromContainer = SpawnSource == EFortPickupSpawnSource::Chest || SpawnSource == EFortPickupSpawnSource::AmmoBox;
	if (NewPickup->bTossedFromContainer) NewPickup->OnRep_TossedFromContainer();

	return NewPickup;
}

AFortPickupAthena* SpawnPickup(FVector Loc, FFortItemEntry& Entry, EFortPickupSourceTypeFlag SourceTypeFlag = EFortPickupSourceTypeFlag::Tossed, EFortPickupSpawnSource SpawnSource = EFortPickupSpawnSource::Unset, AFortPlayerPawn* Pawn = nullptr, int OverrideCount = -1, bool Toss = true)
{
	auto MechWeapon = FindObject<UFortWeaponRangedItemDefinition>("/Game/Athena/Items/Weapons/Vehicles/WID_OstrichShotgunTest2.WID_OstrichShotgunTest2");
	if (Entry.ItemDefinition == MechWeapon) return nullptr;

	AFortPickupAthena* NewPickup = SpawnActor<AFortPickupAthena>(Loc);
	NewPickup->bRandomRotation = true;
	NewPickup->PrimaryPickupItemEntry = Entry;
	NewPickup->PrimaryPickupItemEntry.Count = OverrideCount != -1 ? OverrideCount : Entry.Count;
	NewPickup->OnRep_PrimaryPickupItemEntry();
	NewPickup->PawnWhoDroppedPickup = Pawn;

	NewPickup->TossPickup(Loc, Pawn, -1, Toss, SourceTypeFlag, SpawnSource);
	NewPickup->bTossedFromContainer = SpawnSource == EFortPickupSpawnSource::Chest || SpawnSource == EFortPickupSpawnSource::AmmoBox;
	if (NewPickup->bTossedFromContainer) NewPickup->OnRep_TossedFromContainer();

	return NewPickup;
}

void TriggerInventoryUpdate(AFortPlayerControllerAthena* PC, FFortItemEntry* Entry)
{
	if (!PC) return;
	PC->WorldInventory->bRequiresLocalUpdate = true;
	PC->WorldInventory->HandleInventoryLocalUpdate();

	return Entry ? PC->WorldInventory->Inventory.MarkItemDirty(*Entry) : PC->WorldInventory->Inventory.MarkArrayDirty();
}

bool IsPrimaryQuickbar(UFortItemDefinition* Def)
{
	return !Def->IsA<UFortWeaponMeleeItemDefinition>() && !Def->IsA<UFortResourceItemDefinition>() && !Def->IsA<UFortAmmoItemDefinition>() && !Def->IsA<UFortTrapItemDefinition>() && !Def->IsA<UFortBuildingItemDefinition>() && !Def->IsA<UFortEditToolItemDefinition>();
	//return Def->IsA<UFortConsumableItemDefinition>() || Def->IsA<UFortWeaponRangedItemDefinition>() || Def->IsA<UFortGadgetItemDefinition>();
}

UFortWorldItem *GiveItem(AFortPlayerControllerAthena* PC, UFortItemDefinition* Def, int Count = 1, int LoadedAmmo = 0, int Level = 0, bool ShowPickupNoti = true)
{
	if (!PC || !Def) return nullptr;
	UFortWorldItem* Item = (UFortWorldItem*)Def->CreateTemporaryItemInstanceBP(Count, Level);
	Item->SetOwningControllerForTemporaryItem(PC);
	Item->ItemEntry.LoadedAmmo = LoadedAmmo;

	
	if ((Def->IsA<UFortAmmoItemDefinition>() || Def->IsA<UFortResourceItemDefinition>()) && ShowPickupNoti) {
		FFortItemEntryStateValue Value{};
		Value.IntValue = 1;
		Value.StateType = EFortItemEntryState::ShouldShowItemToast;
		Item->ItemEntry.StateValues.Add(Value);
	}

	auto IE = PC->WorldInventory->Inventory.ReplicatedEntries.Add(Item->ItemEntry);
	auto II = PC->WorldInventory->Inventory.ItemInstances.Add(Item);


	TriggerInventoryUpdate(PC, &Item->ItemEntry);
	return Item;
}

UFortWorldItem *GiveItem(AFortPlayerControllerAthena* PC, FFortItemEntry entry, int Count = -1, bool ShowPickupNoti = true)
{
	if (Count == -1) Count = entry.Count;
	return GiveItem(PC, entry.ItemDefinition, Count, entry.LoadedAmmo, entry.Level, ShowPickupNoti);
}

void ReplaceEntry(AFortPlayerControllerAthena* PC, FFortItemEntry& Entry)
{
	if (!PC) return;
	auto ent = PC->WorldInventory->Inventory.ItemInstances.Search<FFortItemEntry>([](UFortWorldItem*& item, FFortItemEntry& entry) {
		return item->ItemEntry.ItemGuid == entry.ItemGuid;
	}, Entry);
	if (!ent) return;
	(*ent)->ItemEntry = Entry;

	TriggerInventoryUpdate(PC, &Entry);
}


void SwapEntry(AFortPlayerControllerAthena* PC, FFortItemEntry& Entry, FFortItemEntry& NewEntry)
{
	if (!PC) return;
	auto ent = PC->WorldInventory->Inventory.ItemInstances.Search<FFortItemEntry>([](UFortWorldItem*& item, FFortItemEntry& entry) {
		return item->ItemEntry.ItemGuid == entry.ItemGuid;
	}, Entry);
	auto ent2 = PC->WorldInventory->Inventory.ReplicatedEntries.Search<FFortItemEntry>([](FFortItemEntry& item, FFortItemEntry& entry) {
		return item.ItemGuid == entry.ItemGuid;
	}, Entry);
	if (!ent || !ent2) return;
	(*ent)->ItemEntry = NewEntry;
	*ent2 = NewEntry;

	TriggerInventoryUpdate(PC, &NewEntry);
	PC->ServerExecuteInventoryItem(NewEntry.ItemGuid);
	PC->ClientEquipItem(NewEntry.ItemGuid, true);
}

void Remove(AFortPlayerControllerAthena* PC, FGuid Guid) {
	if (!PC) return;
	auto entry = PC->WorldInventory->Inventory.ReplicatedEntries.SearchIndex<FGuid>([](FFortItemEntry& entry, FGuid& Guid) {
		return entry.ItemGuid == Guid;
	}, Guid);
	if (entry != -1) PC->WorldInventory->Inventory.ReplicatedEntries.Remove(entry);
	auto item = PC->WorldInventory->Inventory.ItemInstances.SearchIndex<FGuid>([](UFortWorldItem*& entry, FGuid& Guid) {
		return entry->ItemEntry.ItemGuid == Guid;
	}, Guid);
	if (item != -1) PC->WorldInventory->Inventory.ItemInstances.Remove(item);

	TriggerInventoryUpdate(PC, nullptr);
}

void ServerExecuteInventoryItem(AFortPlayerControllerAthena* PC, FGuid Guid)
{
	if (!PC) return;
	auto entry = PC->WorldInventory->Inventory.ReplicatedEntries.Search<FGuid>([](FFortItemEntry& entry, FGuid& Guid) {
		return entry.ItemGuid == Guid;
	}, Guid);

	auto Pawn = PC->MyFortPawn;
	if (PC->MyFortPawn && PC->MyFortPawn->IsA<AFortCharacterVehicle>()) {
		auto Mech = (ATestMechVehicle_C *)PC->MyFortPawn;
		if (Mech->DriverPawn && (!Mech->DriverPawn->Controller || Mech->DriverPawn->Controller == PC)) Pawn = Mech->DriverPawn;
		else if (Mech->PassengerPawn && (!Mech->PassengerPawn->Controller || Mech->PassengerPawn->Controller == PC)) Pawn = Mech->PassengerPawn;
	}

	if (!entry || !Pawn) return;
	UFortWeaponItemDefinition* ItemDef = entry->ItemDefinition->IsA<UFortGadgetItemDefinition>() ? ((UFortGadgetItemDefinition*)entry->ItemDefinition)->GetWeaponItemDefinition() : (UFortWeaponItemDefinition*)entry->ItemDefinition;
	if (auto Deco = ItemDef->Cast<UFortDecoItemDefinition>()) {
		PC->MyFortPawn->PickUpActor(nullptr, Deco);
		PC->MyFortPawn->CurrentWeapon->ItemEntryGuid = Guid;

		if (auto CT = PC->MyFortPawn->CurrentWeapon->Cast<AFortDecoTool_ContextTrap>()) CT->ContextTrapItemDefinition = (UFortContextTrapItemDefinition *)Deco;
		return;
	}
	Pawn->EquipWeaponDefinition(ItemDef, Guid);
}


void (*ServerHandlePickupOG)(AFortPlayerPawn* Pawn, AFortPickup* Pickup, float InFlyTime, FVector InStartDirection, bool bPlayPickupSound);
void ServerHandlePickup(AFortPlayerPawn* Pawn, AFortPickup* Pickup, float InFlyTime, FVector InStartDirection, bool bPlayPickupSound) {
	if (!Pawn || !Pickup || Pickup->bPickedUp) return ServerHandlePickupOG(Pawn, Pickup, InFlyTime, InStartDirection, bPlayPickupSound);
	if (Pawn->GetDistanceTo(Pickup) > 500.f) return ((AFortPlayerControllerAthena*)Pawn->Controller)->ClientReturnToMainMenu(L"Stop fucking cheating you weirdo actually go get a life");

	Pawn->IncomingPickups.Add(Pickup);

	Pickup->PickupLocationData.bPlayPickupSound = bPlayPickupSound;
	Pickup->PickupLocationData.FlyTime = 0.4f;
	Pickup->PickupLocationData.ItemOwner = Pawn;
	Pickup->PickupLocationData.PickupGuid = Pickup->PrimaryPickupItemEntry.ItemGuid;
	Pickup->PickupLocationData.PickupTarget = Pawn;
	Pickup->OnRep_PickupLocationData();

	Pickup->bPickedUp = true;
	Pickup->OnRep_bPickedUp();
	return ServerHandlePickupOG(Pawn, Pickup, InFlyTime, InStartDirection, bPlayPickupSound);
}

bool PickupLogic(AFortPlayerControllerAthena *PC, FFortItemEntry *itemEntry, FFortItemEntry& PickupEntry, int Items, int MaxStack) {
	if (itemEntry && itemEntry->ItemDefinition->IsStackable()) {
		itemEntry->Count += PickupEntry.Count;
		if (itemEntry->Count > MaxStack) {
			int OGCount = itemEntry->Count;
			itemEntry->Count = MaxStack;
			if (PickupEntry.ItemDefinition->bAllowMultipleStacks) {
				if (Items == 5) SpawnPickup(PC->GetViewTarget()->K2_GetActorLocation(), *itemEntry, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, PC->MyFortPawn, OGCount - MaxStack);
				else GiveItem(PC, PickupEntry, OGCount - MaxStack, false);
			}
			else SpawnPickup(PC->GetViewTarget()->K2_GetActorLocation(), *itemEntry, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, PC->MyFortPawn, OGCount - MaxStack);
		}
		ReplaceEntry(PC, *itemEntry);
		return true;
	}
	return false;
}
int MaxWood, MaxStone, MaxMetal;
char (*CompletePickupAnimationOG)(AFortPickup* Pickup);
char CompletePickupAnimation(AFortPickup* Pickup) {
	auto PC = (AFortPlayerControllerAthena*)Pickup->PickupLocationData.PickupTarget->Controller;
	if (!PC) return CompletePickupAnimationOG(Pickup);
	if (PC->SwappingItemDefinition) {
		auto entry = (FFortItemEntry *) PC->SwappingItemDefinition;
		if (entry) {
			SpawnPickup(PC->GetViewTarget()->K2_GetActorLocation(), *entry, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, PC->MyFortPawn);
			SwapEntry(PC, *entry, Pickup->PrimaryPickupItemEntry);
		}
		PC->SwappingItemDefinition = nullptr;
	}
	else {
		auto PickupEntry = Pickup->PrimaryPickupItemEntry;
		auto MaxStack = Pickup->PrimaryPickupItemEntry.ItemDefinition->MaxStackSize;
		if (Pickup->PrimaryPickupItemEntry.ItemDefinition->IsA<UFortResourceItemDefinition>()) {
			static auto Wood = FindObject<UFortResourceItemDefinition>("/Game/Items/ResourcePickups/WoodItemData.WoodItemData");
			static auto Stone = FindObject<UFortResourceItemDefinition>("/Game/Items/ResourcePickups/StoneItemData.StoneItemData");
			static auto Metal = FindObject<UFortResourceItemDefinition>("/Game/Items/ResourcePickups/MetalItemData.MetalItemData");

			if (Pickup->PrimaryPickupItemEntry.ItemDefinition == Wood) MaxStack = MaxWood;
			else if (Pickup->PrimaryPickupItemEntry.ItemDefinition == Stone) MaxStack = MaxStone;
			else if (Pickup->PrimaryPickupItemEntry.ItemDefinition == Metal) MaxStack = MaxMetal;
		}
		int Items = 0;
		for (auto& Item : PC->WorldInventory->Inventory.ReplicatedEntries) {
			if (IsPrimaryQuickbar(Item.ItemDefinition)) Items++;
		}
		auto itemEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Search<FFortItemEntry>([](FFortItemEntry& entry, FFortItemEntry& pEntry) {
			return entry.ItemDefinition == pEntry.ItemDefinition && entry.Count < pEntry.ItemDefinition->MaxStackSize;
		}, Pickup->PrimaryPickupItemEntry);
		if (Items >= 5 && IsPrimaryQuickbar(PC->MyFortPawn->CurrentWeapon->WeaponData) && IsPrimaryQuickbar(PickupEntry.ItemDefinition)) {
			auto itemEntry2 = PC->WorldInventory->Inventory.ReplicatedEntries.Search<FGuid>([](FFortItemEntry& entry, FGuid& Guid) {
				return entry.ItemGuid == Guid;
				}, PC->MyFortPawn->CurrentWeapon->ItemEntryGuid);
			if (itemEntry) {
				if (PickupLogic(PC, itemEntry, PickupEntry, Items, MaxStack)) return CompletePickupAnimationOG(Pickup);
				else if (itemEntry->ItemDefinition == itemEntry2->ItemDefinition) goto drop;
			}
			else if ((PC->MyFortPawn->CurrentWeapon->WeaponData == PickupEntry.ItemDefinition && (itemEntry2->Count + PickupEntry.Count) > MaxStack) || (itemEntry ? (itemEntry->Count + PickupEntry.Count) > MaxStack : PC->MyFortPawn->CurrentWeapon->WeaponData != PickupEntry.ItemDefinition)) {
			drop:
				SpawnPickup(PC->GetViewTarget()->K2_GetActorLocation(), *itemEntry2, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, PC->MyFortPawn);
				Remove(PC, PC->MyFortPawn->CurrentWeapon->GetInventoryGUID());
			}
		}
		if (!PickupLogic(PC, itemEntry, PickupEntry, Items, MaxStack) && ((Items >= 5 && !IsPrimaryQuickbar(PC->MyFortPawn->CurrentWeapon->WeaponData) && IsPrimaryQuickbar(PickupEntry.ItemDefinition)) ? true : (!itemEntry || PickupEntry.ItemDefinition->bAllowMultipleStacks))) GiveItem(PC, PickupEntry);
	}
	return CompletePickupAnimationOG(Pickup);
}

void ServerAttemptInventoryDrop(AFortPlayerControllerAthena* PC, FGuid Guid, int32 Count, bool bTrash)
{
	if (!PC) return;
	auto itemEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Search<FGuid>([](FFortItemEntry& entry, FGuid& Guid) {
		return entry.ItemGuid == Guid;
	}, Guid);
	if (!itemEntry || (itemEntry->Count - Count) < 0) return;
	itemEntry->Count -= Count;
	SpawnPickup(PC->Pawn->K2_GetActorLocation() + PC->Pawn->GetActorForwardVector() * 70.f + FVector(0, 0, 50), *itemEntry, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, PC->MyFortPawn, Count);
	if (itemEntry->Count == 0) Remove(PC, Guid);
	else ReplaceEntry(PC, *itemEntry);
	return;
}

void (*OnCapsuleBeginOverlapOG)(AFortPlayerPawn* Pawn, UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
void OnCapsuleBeginOverlap(AFortPlayerPawn* Pawn, UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult SweepResult) {
	if (!Pawn) return OnCapsuleBeginOverlapOG(Pawn, OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
	auto Pickup = CastFromUClass<AFortPickup>(OtherActor);
	if (Pickup && Pickup->PawnWhoDroppedPickup != Pawn) {
		auto itemEntry = ((AFortPlayerControllerAthena*)Pawn->Controller)->WorldInventory->Inventory.ReplicatedEntries.Search<FFortItemEntry>([](FFortItemEntry& entry, FFortItemEntry& pEntry) {
			auto MaxStack = pEntry.ItemDefinition->MaxStackSize;
			if (pEntry.ItemDefinition->IsA<UFortResourceItemDefinition>()) {
				static auto Wood = FindObject<UFortResourceItemDefinition>("/Game/Items/ResourcePickups/WoodItemData.WoodItemData");
				static auto Stone = FindObject<UFortResourceItemDefinition>("/Game/Items/ResourcePickups/StoneItemData.StoneItemData");
				static auto Metal = FindObject<UFortResourceItemDefinition>("/Game/Items/ResourcePickups/MetalItemData.MetalItemData");

				if (pEntry.ItemDefinition == Wood) MaxStack = MaxWood;
				else if (pEntry.ItemDefinition == Stone) MaxStack = MaxStone;
				else if (pEntry.ItemDefinition == Metal) MaxStack = MaxMetal;
			}
			return entry.ItemDefinition == pEntry.ItemDefinition && entry.Count < MaxStack;
		}, Pickup->PrimaryPickupItemEntry);
		auto MaxStack = Pickup->PrimaryPickupItemEntry.ItemDefinition->MaxStackSize;
		if (Pickup->PrimaryPickupItemEntry.ItemDefinition->IsA<UFortResourceItemDefinition>()) {
			static auto Wood = FindObject<UFortResourceItemDefinition>("/Game/Items/ResourcePickups/WoodItemData.WoodItemData");
			static auto Stone = FindObject<UFortResourceItemDefinition>("/Game/Items/ResourcePickups/StoneItemData.StoneItemData");
			static auto Metal = FindObject<UFortResourceItemDefinition>("/Game/Items/ResourcePickups/MetalItemData.MetalItemData");

			if (Pickup->PrimaryPickupItemEntry.ItemDefinition == Wood) MaxStack = MaxWood;
			else if (Pickup->PrimaryPickupItemEntry.ItemDefinition == Stone) MaxStack = MaxStone;
			else if (Pickup->PrimaryPickupItemEntry.ItemDefinition == Metal) MaxStack = MaxMetal;
		}
		if ((!itemEntry && !IsPrimaryQuickbar(Pickup->PrimaryPickupItemEntry.ItemDefinition)) || (itemEntry && itemEntry->Count < MaxStack)) ServerHandlePickup(Pawn, Pickup, 0.4f, FVector(), true);
	}
	return OnCapsuleBeginOverlapOG(Pawn, OverlappedComp, OtherActor,  OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
}

void ServerHandlePickupSwap(AFortPlayerPawnAthena* Pawn, AFortPickup* Pickup, FGuid& Swap, float InFlyTime, FVector& InStartDirection, bool bPlayPickupSound) {
	if (!Pawn || !Pickup || Pickup->bPickedUp || !IsPrimaryQuickbar(Pickup->PrimaryPickupItemEntry.ItemDefinition)) return;
	auto PC = CastFromUClass<AFortPlayerControllerAthena>(Pawn->Controller);
	if (!PC) return;

	auto entry = PC->WorldInventory->Inventory.ReplicatedEntries.Search<FGuid>([](FFortItemEntry& entry, FGuid& Guid) {
		return entry.ItemGuid == Guid && IsPrimaryQuickbar(entry.ItemDefinition) && !entry.ItemDefinition->IsA<UFortWeaponMeleeItemDefinition>();
	}, Swap);
	if (!entry) return;

	PC->SwappingItemDefinition = (UFortWorldItemDefinition *) entry;
	return ServerHandlePickup(Pawn, Pickup, InFlyTime, InStartDirection, bPlayPickupSound);
}

namespace Inventory {
	__forceinline void HookAll() {
		auto PCDefault = AFortPlayerControllerAthena::GetDefaultObj();
		VirtualHook(PCDefault->Vft, 507, ServerExecuteInventoryItem, nullptr);
		VirtualHook(AFortPlayerPawnAthena::GetDefaultObj()->Vft, 452, ServerHandlePickup, (void**)&ServerHandlePickupOG);
		VirtualHook(AFortPlayerPawnAthena::GetDefaultObj()->Vft, 448, ServerHandlePickupSwap); // ServerHandlePickupWithSwap
		VirtualHook(AFortPlayerPawnAthena::GetDefaultObj()->Vft, 450, ServerHandlePickupSwap); // ServerHandlePickupWithRequestedSwap
		CREATEHOOK(BaseAddress + 0x1735210, CompletePickupAnimation, &CompletePickupAnimationOG);
		VirtualHook(PCDefault->Vft, 526, ServerAttemptInventoryDrop, nullptr);
		CREATEHOOK(BaseAddress + 0x19b17b0, OnCapsuleBeginOverlap, &OnCapsuleBeginOverlapOG);
	}
}