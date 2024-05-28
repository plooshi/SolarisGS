#pragma once
#include "Gamemode.h"


void *(*DispatchRequestOG)(void *unknown_1, void* MCPData, int MCPCode);
void *DispatchRequest(void *unknown_1, void* MCPData, int MCPCode)
{
	return DispatchRequestOG(unknown_1, MCPData, 3);
}

HolderFunc(InternalGiveAbility, (FGameplayAbilitySpecHandle* (__fastcall*)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle*, FGameplayAbilitySpec)) (BaseAddress + 0x90ee40));
HolderFunc(ConstructGameplayAbilitySpec, (void (*)(FGameplayAbilitySpec*, UGameplayAbility*, int, int, UObject*)) (BaseAddress + 0x9332c0));

void GiveAbility(AFortPlayerControllerAthena* PC, UClass* Ability)
{
	if (!PC || !PC->PlayerState || !PC->MyFortPawn || !Ability) return;
	auto ASC = PC->MyFortPawn->AbilitySystemComponent;

	if (!ASC) return;

	FGameplayAbilitySpec Spec{};
	ConstructGameplayAbilitySpec(&Spec, (UGameplayAbility*)Ability->DefaultObject, 1, -1, nullptr);
	InternalGiveAbility(ASC, &Spec.Handle, Spec);
}

void GiveAbilitySet(AFortPlayerControllerAthena* PC, UFortAbilitySet* Set)
{
	if (Set) for (auto Ability : Set->GameplayAbilities) GiveAbility(PC, Ability);
}

void GiveModifier(UFortGameplayModifierItemDefinition* Modifier, AFortPlayerControllerAthena* PC)
{
	if (!PC || !PC->MyFortPawn || !Modifier) return;
	for (auto& Ability : Modifier->PersistentAbilitySets)
	{
		if (Ability.DeliveryRequirements.bApplyToPlayerPawns)
		{
			for (auto& abi : Ability.AbilitySets)
			{
				GiveAbilitySet(PC, abi);
			}
		}
	}

	for (auto& Effect : Modifier->PersistentGameplayEffects)
	{
		if (Effect.DeliveryRequirements.bApplyToPlayerPawns)
		{
			for (auto& eff : Effect.GameplayEffects)
			{
				PC->MyFortPawn->AbilitySystemComponent->BP_ApplyGameplayEffectToSelf(eff.GameplayEffect.Get(), eff.Level, FGameplayEffectContextHandle());
			}
		}
	}
}

void (*GetPlayerViewPointOG)(AFortPlayerController* PC, FVector& Loc, FRotator& Rot);
void GetPlayerViewPoint(AFortPlayerController* PC, FVector& Loc, FRotator& Rot)
{
	static auto Spec = FName(L"Spectating");
	if (PC->StateName.ComparisonIndex == Spec.ComparisonIndex)
	{
		Loc = PC->LastSpectatorSyncLocation;
		Rot = PC->LastSpectatorSyncRotation;
	}
	else if (PC->GetViewTarget())
	{
		Loc = PC->GetViewTarget()->K2_GetActorLocation();
		Rot = PC->GetControlRotation();
	}
	else
	{
		return GetPlayerViewPointOG(PC, Loc, Rot);
	}
}

HolderFunc(GiveAbilityAndActivateOnce, (__int64(__fastcall* )(void*, FGameplayAbilitySpecHandle*, FGameplayAbilitySpec *, FGameplayEventData*)) (BaseAddress + 0x90ef60));
void ServerPlayEmoteItem(AFortPlayerControllerAthena* PC, UFortMontageItemDefinitionBase* EmoteAsset, float EmoteRandomNumber)
{
	if (!PC || !EmoteAsset || !PC->MyFortPawn) return;
	auto ASC = ((AFortPlayerStateAthena*)PC->PlayerState)->AbilitySystemComponent;
	if (auto CharacterVehicle = CastFromUClass<AFortCharacterVehicle>(PC->Pawn)) {
		ASC = CharacterVehicle->OverrideAbilitySystemComponent;
	}

	FGameplayAbilitySpec NewSpec;
	UGameplayAbility* Ability = nullptr;
	if (auto Spray = CastFromUClass<UAthenaSprayItemDefinition>(EmoteAsset)) {
		Ability = (UGameplayAbility*)UObject::FindClassFast("GAB_Spray_Generic_C")->DefaultObject;
	}
	else if (auto Toy = CastFromUClass<UAthenaToyItemDefinition>(EmoteAsset)) {
		Ability = (UGameplayAbility*)Toy->ToySpawnAbility->DefaultObject;
	}
	else if (auto Emote = CastFromUClass<UAthenaDanceItemDefinition>(EmoteAsset))
	{
		auto DA = Emote->CustomDanceAbility;
		Ability = DA ? (UGameplayAbility*) DA->DefaultObject : (UGameplayAbility*)UObject::FindClassFast("GAB_Emote_Generic_C")->DefaultObject;
		PC->MyFortPawn->bMovingEmote = Emote->bMovingEmote;
		PC->MyFortPawn->bMovingEmoteForwardOnly = Emote->bMoveForwardOnly;
		PC->MyFortPawn->EmoteWalkSpeed = Emote->WalkForwardSpeed;
	}

	if (Ability) {
		ConstructGameplayAbilitySpec(&NewSpec, Ability, 1, -1, EmoteAsset);
		FGameplayAbilitySpecHandle handle;
		GiveAbilityAndActivateOnce(ASC, &handle, &NewSpec, nullptr);
	}
}

HolderFunc(ApplyCharacterCustomization, (void (*)(APlayerState *, APawn *)) (BaseAddress + 0x1a714c0));
void (*ServerAcknowledgePossessionOG)(AFortPlayerControllerAthena* PC, APawn* Pawn);
void ServerAcknowledgePossession(AFortPlayerControllerAthena* PC, APawn* Pawn)
{
	PC->AcknowledgedPawn = Pawn;

	static UFortAbilitySet* AbilitySet = FindObject<UFortAbilitySet>("/Game/Abilities/Player/Generic/Traits/DefaultPlayer/GAS_AthenaPlayer.GAS_AthenaPlayer");
	GiveAbilitySet(PC, AbilitySet);

	auto& ModifierList = GameState->CurrentPlaylistInfo.BasePlaylist->ModifierList;

	for (auto& mod : ModifierList) GiveModifier(mod, PC);

	PC->bBuildFree = true;

	//((AFortPlayerStateAthena*)PC->PlayerState)->HeroType = PC->CosmeticLoadoutPC.Character->HeroDefinition;
	ApplyCharacterCustomization(PC->PlayerState, Pawn);

	return ServerAcknowledgePossessionOG(PC, Pawn);
}

void (*MovingEmoteStoppedOG)(AFortPlayerPawnAthena* Pawn);
void MovingEmoteStopped(AFortPlayerPawnAthena* Pawn) {
	Pawn->bMovingEmote = false;
	Pawn->bMovingEmoteForwardOnly = false;
	return MovingEmoteStoppedOG(Pawn);
}

HolderFunc(RemoveFromAlivePlayers, (void(*)(AFortGameModeAthena*, AFortPlayerControllerAthena*, APlayerState*, AFortPlayerPawn*, UFortWeaponItemDefinition*, EDeathCause, char)) (BaseAddress + 0x11c1ba0));

void (*ClientOnPawnDiedOG)(AFortPlayerControllerAthena* PC, FFortPlayerDeathReport& DeathReport);
void ClientOnPawnDied(AFortPlayerControllerAthena* PC, FFortPlayerDeathReport& DeathReport) {
	if (!PC) return ClientOnPawnDiedOG(PC, DeathReport);
	auto PlayerState = (AFortPlayerStateAthena*)PC->PlayerState;
	if (!GameState->IsRespawningAllowed(PlayerState) && PC->WorldInventory) {
		for (auto& entry : PC->WorldInventory->Inventory.ReplicatedEntries)
		{
			if (!entry.ItemDefinition->IsA<UFortWeaponMeleeItemDefinition>() && (entry.ItemDefinition->IsA<UFortWeaponRangedItemDefinition>() || entry.ItemDefinition->IsA<UFortResourceItemDefinition>() || entry.ItemDefinition->IsA<UFortConsumableItemDefinition>() || entry.ItemDefinition->IsA<UFortAmmoItemDefinition>()))
			{
				SpawnPickup(PC->MyFortPawn->K2_GetActorLocation(), entry, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::PlayerElimination, PC->MyFortPawn);
			}
		}
	}

	auto KillerPS = (AFortPlayerStateAthena*)DeathReport.KillerPlayerState;
	if (DeathReport.KillerPlayerState && DeathReport.KillerPawn && DeathReport.KillerPawn->Controller->IsA<AFortPlayerControllerAthena>() && DeathReport.KillerPawn->Controller != PC) {
		KillerPS->KillScore++;
		KillerPS->OnRep_Kills();
		KillerPS->TeamKillScore++;
		KillerPS->OnRep_TeamKillScore();

		KillerPS->ClientReportKill(PlayerState);
	}
	PlayerState->PawnDeathLocation = PC->MyFortPawn->K2_GetActorLocation();

	PlayerState->DeathInfo.bDBNO = PC->MyFortPawn->bWasDBNOOnDeath;
	PlayerState->DeathInfo.DeathLocation = PC->MyFortPawn->K2_GetActorLocation();
	PlayerState->DeathInfo.DeathTags = DeathReport.Tags;
	PlayerState->DeathInfo.DeathCause = PlayerState->ToDeathCause(DeathReport.Tags, PC->MyFortPawn->bWasDBNOOnDeath);
	if (PlayerState->DeathInfo.bDBNO) PlayerState->DeathInfo.Downer = KillerPS;
	PlayerState->DeathInfo.FinisherOrDowner = KillerPS;
	PlayerState->DeathInfo.Distance = DeathReport.KillerPawn ? DeathReport.KillerPawn->GetDistanceTo(PC->MyFortPawn) : CastFromUClass<AFortPlayerPawnAthena>(PC->MyFortPawn)->LastFallDistance;
	PlayerState->DeathInfo.bInitialized = true;
	PlayerState->OnRep_DeathInfo();


	if (!GameState->IsRespawningAllowed(PlayerState)) {
		FAthenaRewardResult Result;
		Result.TotalSeasonXpGained = 0;
		PC->ClientSendEndBattleRoyaleMatchForPlayer(true, Result);

		PlayerState->Place = GameState->PlayersLeft;
		PlayerState->OnRep_Place();


		FAthenaMatchStats Stats;
		FAthenaMatchTeamStats TeamStats;

		for (int i = 0; i < 20; i++) Stats.Stats[i] = 0;

		Stats.Stats[3] = PlayerState->KillScore;
		Stats.Stats[8] = PlayerState->SquadId;
		PC->ClientSendMatchStatsForPlayer(Stats);

		TeamStats.Place = GameState->PlayersLeft;
		TeamStats.TotalPlayers = GameState->TotalPlayers;
		PC->ClientSendTeamStatsForPlayer(TeamStats);

		RemoveFromAlivePlayers(GameMode, PC, KillerPS, (AFortPlayerPawnAthena*)DeathReport.KillerPawn, (DeathReport.KillerPawn && DeathReport.KillerPawn->CurrentWeapon) ? DeathReport.KillerPawn->CurrentWeapon->WeaponData : nullptr, PlayerState->DeathInfo.DeathCause, 0);

		if (KillerPS && KillerPS->Place == 1) {
			auto KillerWeapon = DeathReport.KillerPawn ? DeathReport.KillerPawn->CurrentWeapon ? DeathReport.KillerPawn->CurrentWeapon->WeaponData : nullptr : nullptr;

			auto KillerPC = (AFortPlayerControllerAthena*)KillerPS->Owner;
			if (KillerWeapon) {
				KillerPC->PlayWinEffects(DeathReport.KillerPawn, KillerWeapon, PlayerState->DeathInfo.DeathCause, false);
				KillerPC->ClientNotifyWon(DeathReport.KillerPawn, KillerWeapon, PlayerState->DeathInfo.DeathCause);
			}

			KillerPC->ClientSendEndBattleRoyaleMatchForPlayer(true, Result); // re-use result

			Stats.Stats[3] = KillerPS->KillScore;
			Stats.Stats[8] = KillerPS->SquadId;
			PC->ClientSendMatchStatsForPlayer(Stats);

			TeamStats.Place = 1;
			TeamStats.TotalPlayers = GameState->TotalPlayers;
			KillerPC->ClientSendTeamStatsForPlayer(TeamStats);


			GameState->WinningTeam = KillerPS->TeamIndex;
			GameState->OnRep_WinningTeam();
			GameState->WinningPlayerState = KillerPS;
			GameState->OnRep_WinningPlayerState();
		}
	}

	return ClientOnPawnDiedOG(PC, DeathReport);
}

HolderFunc(OnRep_ZiplineState, (void(*)(AFortPlayerPawn*)) (BaseAddress + 0x19a9b20));
void ServerSendZiplineState(AFortPlayerPawnAthena* Pawn, FZiplinePawnState& State)
{
	if (!Pawn) return;

	Pawn->ZiplineState = State;
	OnRep_ZiplineState(Pawn);

	if (State.bJumped) Pawn->LaunchCharacter(FVector { 0,0,1200 }, false, false);
}

void (*ServerAttemptInteractOG)(UFortControllerComponent_Interaction* Comp, AActor* ReceivingActor, UPrimitiveComponent* InteractComponent, ETInteractionType InteractType, UObject* OptionalObjectData);
void ServerAttemptInteract(UFortControllerComponent_Interaction* Comp, AActor* ReceivingActor, UPrimitiveComponent* InteractComponent, ETInteractionType InteractType, UObject* OptionalObjectData) {
	auto PC = CastFromUClass<AFortPlayerControllerAthena>(Comp->GetOwner());
	static auto MechClass = UObject::FindClassFast("TestMechVehicle_C");
	AFortPlayerPawn *PPawn = nullptr;
	if (auto Mech = CastFromUClass<ATestMechVehicle_C>(MechClass, ReceivingActor)) PPawn = Mech->PassengerPawn;
	ServerAttemptInteractOG(Comp, ReceivingActor, InteractComponent, InteractType, OptionalObjectData);
	if (!PC) return;
	if (PC->Pawn->GetDistanceTo(ReceivingActor) > 1000.f) return PC->ClientReturnToMainMenu(L"Stop fucking cheating you weirdo actually go get a life");
	static auto VMClass = UObject::FindClassFast("B_Athena_VendingMachine_C");
	static auto DoVendDeath = VMClass->GetFunction("B_Athena_VendingMachine_C", "DoVendDeath");

	if (auto Vehicle = CastFromUClass<AFortAthenaVehicle>(ReceivingActor)) {
		auto sInd = Vehicle->FindSeatIndex(PC->MyFortPawn);
		auto comp = Vehicle->GetSeatWeaponComponent(sInd);
		if (!comp) return;
		UFortWeaponItemDefinition* Weapon = nullptr;
		for (auto& comp : comp->WeaponSeatDefinitions) {
			if (comp.SeatIndex != sInd) continue;
			Weapon = comp.VehicleWeapon;
			break;
		}
		if (!Weapon) return;
		GiveItem(PC, Weapon, 1, ClipSizeForDef(Weapon));
		auto itemEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Search<UFortWeaponItemDefinition*>([](FFortItemEntry& entry, UFortWeaponItemDefinition*& Weapon) {
			return entry.ItemDefinition == Weapon;
		}, Weapon);
		PC->ServerExecuteInventoryItem(itemEntry->ItemGuid);
		PC->ClientEquipItem(itemEntry->ItemGuid, true);
	}
	else if (auto VendingMachine = CastFromUClass<AB_Athena_VendingMachine_C>(VMClass, ReceivingActor)) {
		auto Item = VendingMachine->ActiveInputItem;

		static auto Wood = FindObject<UFortResourceItemDefinition>("/Game/Items/ResourcePickups/WoodItemData.WoodItemData");
		static auto Stone = FindObject<UFortResourceItemDefinition>("/Game/Items/ResourcePickups/StoneItemData.StoneItemData");
		static auto Metal = FindObject<UFortResourceItemDefinition>("/Game/Items/ResourcePickups/MetalItemData.MetalItemData");

		auto CollectorIndex = -1;
		if (Item == Wood) CollectorIndex = 0;
		else if (Item == Stone) CollectorIndex = 1;
		else if (Item == Metal) CollectorIndex = 2;

		if (CollectorIndex == -1) return;

		auto Collection = VendingMachine->ItemCollections[CollectorIndex];

		for (auto& IE : Collection.OutputItemEntry) {
			SpawnPickup(ReceivingActor->K2_GetActorLocation() + ReceivingActor->GetActorRightVector() * 70.f + FVector{ 0, 0, 50 }, IE, EFortPickupSourceTypeFlag::Container);
		}

		VendingMachine->ProcessEvent(DoVendDeath, nullptr);
		VendingMachine->K2_DestroyActor();
	}
	else if (auto Mech = CastFromUClass<ATestMechVehicle_C>(MechClass, ReceivingActor)) {
		if (Mech->PassengerPawn != PPawn) {
			auto comp = Mech->FortVehicleAimingWeaponComp;
			UFortWeaponItemDefinition* Weapon = nullptr;
			for (auto& SD : comp->WeaponSeatDefinitions) {
				if (SD.SeatIndex != 1) continue;
				Weapon = SD.VehicleWeapon;
				break;
			}
			if (!Weapon) return;
			GiveItem(PC, Weapon, 1, ClipSizeForDef(Weapon));
			auto itemEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Search<UFortWeaponItemDefinition*>([](FFortItemEntry& entry, UFortWeaponItemDefinition*& Weapon) {
				return entry.ItemDefinition == Weapon;
			}, Weapon);
			PC->ServerExecuteInventoryItem(itemEntry->ItemGuid);
			PC->ClientEquipItem(itemEntry->ItemGuid, true);
		}
	}
}


void (*NetMulticast_Athena_BatchedDamageCuesOG)(AFortPawn* Pawn, FAthenaBatchedDamageGameplayCues_Shared SharedData, FAthenaBatchedDamageGameplayCues_NonShared NonSharedData);
void NetMulticast_Athena_BatchedDamageCues(AFortPlayerPawnAthena* Pawn, FAthenaBatchedDamageGameplayCues_Shared SharedData, FAthenaBatchedDamageGameplayCues_NonShared NonSharedData)
{
	if (!Pawn || !Pawn->Controller || !Pawn->CurrentWeapon) return;

	if (Pawn->CurrentWeapon) {
		auto ent = ((AFortPlayerControllerAthena*)Pawn->Controller)->WorldInventory->Inventory.ReplicatedEntries.Search<FGuid>([](FFortItemEntry& entry, FGuid& guid) {
			return entry.ItemGuid == guid;
		}, Pawn->CurrentWeapon->ItemEntryGuid);
		ent->LoadedAmmo = Pawn->CurrentWeapon->AmmoCount;
		ReplaceEntry((AFortPlayerControllerAthena*)Pawn->Controller, *ent);
	}

	return NetMulticast_Athena_BatchedDamageCuesOG(Pawn, SharedData, NonSharedData);
}

void ReloadWeapon(AFortWeapon* Weapon, int AmmoToRemove) {
	AFortPlayerControllerAthena* PC = (AFortPlayerControllerAthena*) ((AFortPlayerPawnAthena*)Weapon->Owner)->Controller;
	if (!PC || !&PC->WorldInventory->Inventory) return;
	auto Ammo = Weapon->WeaponData->GetAmmoWorldItemDefinition_BP();
	auto ent = PC->WorldInventory->Inventory.ReplicatedEntries.Search<UFortWorldItemDefinition *>([](FFortItemEntry& entry, UFortWorldItemDefinition*& def) {
		return entry.ItemDefinition == def;
	}, Ammo);
	auto WeaponEnt = PC->WorldInventory->Inventory.ReplicatedEntries.Search<FGuid>([](FFortItemEntry& entry, FGuid& guid) {
		return entry.ItemGuid == guid;
	}, Weapon->ItemEntryGuid);
	if (!ent || !WeaponEnt) return;

	ent->Count -= AmmoToRemove;
	if (ent->Count <= 0) {
		Remove(PC, ent->ItemGuid);
	}
	ReplaceEntry(PC, *ent);
	WeaponEnt->LoadedAmmo = Weapon->AmmoCount;
	ReplaceEntry(PC, *WeaponEnt);
}

void (*ServerChangeNameOG)(AFortPlayerControllerAthena* PC, FString NewName);
void ServerChangeName(AFortPlayerControllerAthena* PC, FString NewName) {
	if (!PC) return ServerChangeNameOG(PC, NewName);
	
	PC->ClientReturnToMainMenu(L"Stop fucking cheating you weirdo actually go get a life");
}

/*float anticheatConst = -1.45130635f;
void (*ServerMoveACOG)(UCharacterMovementComponent* mc, float Timestamp, FVector_NetQuantize10& InAccel, FVector_NetQuantize100& ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode);
void ServerMoveAC(UCharacterMovementComponent* mc, float Timestamp, FVector_NetQuantize10& InAccel, FVector_NetQuantize100& ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode) {
	if (Timestamp != anticheatConst) {
		auto Pawn = CastFromUClass<AFortPlayerPawnAthena>(mc->CharacterOwner);
		if (Pawn) {
			auto PC = CastFromUClass<AFortPlayerControllerAthena>(Pawn->Controller);
			if (PC) {
				return PC->ClientReturnToMainMenu(L"AntiCheat was not loaded!");
			}
		}
	}
	return ServerMoveACOG(mc, Timestamp, InAccel, ClientLoc, CompressedMoveFlags, ClientRoll, View, ClientMovementBase, ClientBaseBoneName, ClientMovementMode);
}*/

bool ABuildingContainer_ServerOnAttemptInteract(__int64 SomePtr, UObject* a2) {
	auto BuildingContainer = (ABuildingContainer*)(SomePtr - 576);

	if (BuildingContainer->bAlreadySearched)
		return true;

	SpawnLoot(BuildingContainer->SearchLootTierGroup, BuildingContainer->K2_GetActorLocation() + BuildingContainer->GetActorRightVector() * 70.f + FVector{ 0, 0, 50 });

	BuildingContainer->bAlreadySearched = true;
	BuildingContainer->OnRep_bAlreadySearched();
	BuildingContainer->SearchBounceData.SearchAnimationCount++;
	BuildingContainer->BounceContainer();

	return true;
}

namespace Player
{
	__forceinline void HookAll()
	{
		auto PCDefault = AFortPlayerControllerAthena::GetDefaultObj();
		auto PawnDefault = AFortPlayerPawnAthena::GetDefaultObj();
		// ploosh: mcp
		CREATEHOOK(BaseAddress + 0xb7e940, DispatchRequest, &DispatchRequestOG);

		// ploosh: stuff
		CREATEHOOK(BaseAddress + 0x19f1f10, GetPlayerViewPoint, &GetPlayerViewPointOG);
		VirtualHook(PCDefault->Vft, 264, ServerAcknowledgePossession, (void**)&ServerAcknowledgePossessionOG);
		VirtualHook(PawnDefault->Vft, 463, ServerSendZiplineState, nullptr);
		VirtualHook(PawnDefault->Vft, 276, NetMulticast_Athena_BatchedDamageCues, (void **)&NetMulticast_Athena_BatchedDamageCuesOG);
		CREATEHOOK(BaseAddress + 0x1c067b0, ReloadWeapon, nullptr);
		VirtualHook(UFortControllerComponent_Interaction::GetDefaultObj()->Vft, 129, ServerAttemptInteract, (void**)&ServerAttemptInteractOG);
		CREATEHOOK(BaseAddress + 0x1353710, ABuildingContainer_ServerOnAttemptInteract, nullptr);

		// ploosh: death
		CREATEHOOK(BaseAddress + 0x1eb5d10, ClientOnPawnDied, &ClientOnPawnDiedOG);

		// ploosh: emotes
		VirtualHook(PCDefault->Vft, 444, ServerPlayEmoteItem);
		CREATEHOOK(BaseAddress + 0xb0e900, MovingEmoteStopped, &MovingEmoteStoppedOG);

		// ploosh: mf ac
		VirtualHook(PCDefault->Vft, 260, ServerChangeName, (void**)&ServerChangeNameOG);
		//CREATEHOOK(BaseAddress + 0x2ee1400, ServerMoveAC, &ServerMoveACOG);
	}
}
