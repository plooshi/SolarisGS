#pragma once
#include "Looting.h"
#include "Options.h"

static inline void (*KickPlayer)(AGameSession*, AController*);
static void KickPlayerHook(AGameSession*, AController*) { return; }

void ShowFoundation(ABuildingFoundation* Foundation)
{
	if (!Foundation) return;

	Foundation->DynamicFoundationType = EDynamicFoundationType::Static;
	Foundation->bServerStreamedInLevel = true;
	Foundation->OnRep_ServerStreamedInLevel();
	Foundation->DynamicFoundationRepData.EnabledState = EDynamicFoundationEnabledState::Enabled;
	Foundation->OnRep_DynamicFoundationRepData();
	Foundation->FoundationEnabledState = EDynamicFoundationEnabledState::Enabled;
	Foundation->SetDynamicFoundationEnabled(true);
}


HolderFunc(PickSupplyDropLocation, (FVector* (*)(AFortAthenaMapInfo*, FVector*, FVector *, float)) (BaseAddress + 0x1165d40));

bool (*ReadyToStartMatch)(AFortGameModeAthena*);
bool ReadyToStartMatchHook(AFortGameModeAthena* GM)
{
	static bool bInit = false;
	static bool bSetPlaylist = false;
	static bool bSetupFinal = false;
	static bool bHasAllVMS = false;
	if (!bSetPlaylist) {
		bSetPlaylist = true;

		GameMode->WarmupRequiredPlayerCount = 1;

		UFortPlaylistAthena* Playlist = FindObject<UFortPlaylistAthena>(PlaylistPath);

		GameState->CurrentPlaylistInfo.BasePlaylist = Playlist;
		GameState->CurrentPlaylistInfo.OverridePlaylist = Playlist;
		GameState->CurrentPlaylistInfo.PlaylistReplicationKey++;
		GameState->CurrentPlaylistInfo.MarkArrayDirty();
		GameState->OnRep_CurrentPlaylistInfo();

		GameState->CurrentPlaylistId = Playlist->PlaylistId;
		GameState->OnRep_CurrentPlaylistId();
		GameMode->CurrentPlaylistId = Playlist->PlaylistId;
		GameMode->CurrentPlaylistName = Playlist->PlaylistName;

		GameState->OnRep_CurrentPlaylistInfo();
		GameState->OnRep_CurrentPlaylistId();

		ShowFoundation(FindObject<ABuildingFoundation>("/Game/Athena/Maps/Athena_POI_Foundations.Athena_POI_Foundations.PersistentLevel.SLAB_2")); // SLAB_2 is real!

		for (auto& Level : Playlist->AdditionalLevels)
		{
			bool Success = false;
			ULevelStreamingDynamic::GetDefaultObj()->LoadLevelInstanceBySoftObjectPtr(World, Level, FVector(), FRotator(), &Success);
			if (Success) GameState->AdditionalPlaylistLevelsStreamed.Add(Level.ObjectID.AssetPathName);
		}
	}
	auto WarmupActors = GetAll<AFortPlayerStartWarmup>();

	int WarmupSpots = WarmupActors.Num();

	WarmupActors.Free();

	if (WarmupSpots == 0)
		return false;
		
	if (!bInit)
	{
		bInit = true;

		World->NetDriver = CreateNetDriver(Engine, World, FName(L"GameNetDriver"));
		
		World->NetDriver->World = World;
		World->NetDriver->NetDriverName = FName(L"GameNetDriver");

		GameMode->GameSession->MaxPlayers = GameState->CurrentPlaylistInfo.BasePlaylist->MaxPlayers;

		for (auto& Collection : World->LevelCollections) Collection.NetDriver = World->NetDriver;

		GameState->AirCraftBehavior = GameState->CurrentPlaylistInfo.BasePlaylist->AirCraftBehavior;
		GameState->CachedSafeZoneStartUp = GameState->CurrentPlaylistInfo.BasePlaylist->SafeZoneStartUp;
	}

	
	if (!GameState->MapInfo) return false;

	if (!bSetupFinal) {
		bSetupFinal = true;

		SpawnVehicles();
		SpawnFloorLootForContainer(FindObject<UBlueprintGeneratedClass>("/Game/Athena/Environments/Blueprints/Tiered_Athena_FloorLoot_Warmup.Tiered_Athena_FloorLoot_Warmup_C"));
		SpawnFloorLootForContainer(FindObject<UBlueprintGeneratedClass>("/Game/Athena/Environments/Blueprints/Tiered_Athena_FloorLoot_01.Tiered_Athena_FloorLoot_01_C"));

		EEvaluateCurveTableResult idk{};

		{
			float AmmoSpawnMin, AmmoSpawnMax;
			UDataTableFunctionLibrary::GetDefaultObj()->EvaluateCurveTableRow(GameState->MapInfo->AmmoBoxMinSpawnPercent.Curve.CurveTable, GameState->MapInfo->AmmoBoxMinSpawnPercent.Curve.RowName, (float)0, &idk, &AmmoSpawnMin, FString());
			UDataTableFunctionLibrary::GetDefaultObj()->EvaluateCurveTableRow(GameState->MapInfo->AmmoBoxMaxSpawnPercent.Curve.CurveTable, GameState->MapInfo->AmmoBoxMaxSpawnPercent.Curve.RowName, (float)0, &idk, &AmmoSpawnMax, FString());

			auto AmmoBoxes = GetAll(GameState->MapInfo->AmmoBoxClass);
			auto NumToWipe = (int)(AmmoSpawnMax - AmmoSpawnMin) == 0 ? 0 : AmmoBoxes.Num() * (rand() % (int) (AmmoSpawnMax - AmmoSpawnMin));
			NumToWipe += AmmoBoxes.Num() * (100 - (int) AmmoSpawnMax) / 100;

			for (int i = 0; i < NumToWipe; i++) {
				AmmoBoxes[rand() % AmmoBoxes.Num()]->K2_DestroyActor();
			}
			AmmoBoxes.Free();
		}
		{
			float ChestSpawnMin, ChestSpawnMax;
			UDataTableFunctionLibrary::GetDefaultObj()->EvaluateCurveTableRow(GameState->MapInfo->TreasureChestMinSpawnPercent.Curve.CurveTable, GameState->MapInfo->TreasureChestMinSpawnPercent.Curve.RowName, (float)0, &idk, &ChestSpawnMin, FString());
			UDataTableFunctionLibrary::GetDefaultObj()->EvaluateCurveTableRow(GameState->MapInfo->TreasureChestMinSpawnPercent.Curve.CurveTable, GameState->MapInfo->TreasureChestMinSpawnPercent.Curve.RowName, (float)0, &idk, &ChestSpawnMax, FString());

			auto Chests = GetAll(GameState->MapInfo->TreasureChestClass);
			auto NumToWipe = (int)(ChestSpawnMax - ChestSpawnMin) == 0 ? 0 : Chests.Num() * (rand() % (int) (ChestSpawnMax - ChestSpawnMin));
			NumToWipe += Chests.Num() * (100 - (int) ChestSpawnMax) / 100;

			for (int i = 0; i < NumToWipe; i++) {
				Chests[rand() % Chests.Num()]->K2_DestroyActor();
			}
			Chests.Free();
		}

		UCurveTable *GameData = GameState->CurrentPlaylistInfo.BasePlaylist->GameData;
		if (!GameData) {
			GameData = FindObject<UCurveTable>("/Game/Athena/Balance/DataTables/AthenaGameData.AthenaGameData");
		}

		float LlamaMin = 0.f;
		float LlamaMax = 0.f;

		UDataTableFunctionLibrary::GetDefaultObj()->EvaluateCurveTableRow(GameState->MapInfo->LlamaQuantityMin.Curve.CurveTable, GameState->MapInfo->LlamaQuantityMin.Curve.RowName, 0.f, &idk, &LlamaMin, FString());
		UDataTableFunctionLibrary::GetDefaultObj()->EvaluateCurveTableRow(GameState->MapInfo->LlamaQuantityMax.Curve.CurveTable, GameState->MapInfo->LlamaQuantityMax.Curve.RowName, 0.f, &idk, &LlamaMax, FString());

		auto LlamaCount = UKismetMathLibrary::GetDefaultObj()->RandomIntegerInRange((int)LlamaMin, (int)LlamaMax);

		for (int i = 0; i < LlamaCount; i++) {
			FVector Loc = FVector(0, 0, 0);
			PickSupplyDropLocation(GameState->MapInfo, &Loc, new FVector(1, 1, 10000), 100000);

			FRotator Rot{ 0, 0, 0 };
			Rot.Yaw = rand() * 0.010986663f;

			auto Llama = SpawnActorUnfinished<AFortAthenaSupplyDrop>(GameState->MapInfo->LlamaClass, Loc, Rot);

			FinishSpawnActor(Llama, Llama->FindGroundLocationAt(Loc), Rot);
		}
		LOG("Spawned " + std::to_string(LlamaCount) + " loot llamas");

		float MaxWoodF, MaxStoneF, MaxMetalF;
		UDataTableFunctionLibrary::GetDefaultObj()->EvaluateCurveTableRow(GameData, FName(L"Default.MaxStack.Resources.Wood"), 0.f, &idk, &MaxWoodF, FString());
		UDataTableFunctionLibrary::GetDefaultObj()->EvaluateCurveTableRow(GameData, FName(L"Default.MaxStack.Resources.Stone"), 0.f, &idk, &MaxStoneF, FString());
		UDataTableFunctionLibrary::GetDefaultObj()->EvaluateCurveTableRow(GameData, FName(L"Default.MaxStack.Resources.Metal"), 0.f, &idk, &MaxMetalF, FString());
		MaxWood = (int)MaxWoodF, MaxStone = (int)MaxStoneF, MaxMetal = (int)MaxMetalF;

		World->PersistentLevel->URL.Port = Port;

		FString Err;
		if (InitListen(World->NetDriver, World, World->PersistentLevel->URL, false, Err)) {
			SetWorld(World->NetDriver, World);
			
			LOG("Listening on Port " + std::to_string(Port) + "!");
			SetConsoleTitleA(("SolarisV2 | Listening on Port " + std::to_string(Port)).c_str());
			GameMode->bWorldIsReady = true;
		}
		else {
			LOG("Failed to listen on port " + std::to_string(Port) + "!");
		}
	}

	return ReadyToStartMatch(GameMode) || GameMode->AlivePlayers.Num() >= GameMode->WarmupRequiredPlayerCount;
}

APawn* SpawnDefaultPawnForHook(AGameModeBase* GM, AController* NewPlayer, AActor* StartSpot)
{
	auto Transform = StartSpot->GetTransform();
	Transform.Translation.Z += 200;
	auto NewPawn = GM->SpawnDefaultPawnAtTransform(NewPlayer, Transform);

	auto PC = CastFromUClass<AFortPlayerControllerAthena>(NewPlayer);
	if (!PC) return NewPawn;
	PC->WorldInventory->Inventory.ReplicatedEntries.ResetNum();
	PC->WorldInventory->Inventory.ItemInstances.ResetNum();

	for (auto& SI : GameMode->StartingItems)
	{
		if (SI.Count > 0) GiveItem(PC, SI.Item, SI.Count);
	}
	GiveItem(PC, PC->CosmeticLoadoutPC.Pickaxe->WeaponDefinition);

	return NewPawn;
}

uint8_t NextTeam = 3;
uint8_t LastPlayers = 0;
EFortTeam PickTeamHook(AFortGameModeAthena* GM, uint8_t Preferred, AFortPlayerControllerAthena* PC) {
	uint8_t ret = NextTeam;
	
	LastPlayers++;
	if (LastPlayers >= GameState->CurrentPlaylistInfo.BasePlaylist->MaxSquadSize) {
		NextTeam++;
		LastPlayers = 0;
	}

	return EFortTeam(ret);
}

void (*ChangeNameOG)(AGameModeBase* GM, AController* Controller, FString& NewName, bool bNameChange);
void ChangeName(AGameModeBase* GM, AController* Controller, FString& NewName, bool bNameChange) {
	if (!Controller->IsA<AFortPlayerControllerAthena>()) return ChangeNameOG(GM, Controller, NewName, bNameChange);

	if (bNameChange) {
		auto PC = CastFromUClass<AFortPlayerControllerAthena>(Controller);
		PC->ClientReturnToMainMenu(L"Stop fucking cheating you weirdo actually go get a life");
	}
	else {
		return ChangeNameOG(GM, Controller, NewName, bNameChange);
	}
}

void (*HandleStartingNewPlayer)(AGameModeBase*, APlayerController*);
void HandleStartingNewPlayerHook(AGameModeBase* GM, APlayerController* NewPlayer) {
	if (GameState->GamePhase >= EAthenaGamePhase::Aircraft) return NewPlayer->ClientReturnToMainMenu(L"Cannot join an in-progress game!");
	AFortPlayerStateAthena* PlayerState = (AFortPlayerStateAthena*)NewPlayer->PlayerState;

	PlayerState->SquadId = PlayerState->TeamIndex - 3;
	PlayerState->OnRep_SquadId();

	FGameMemberInfo Member;
	Member.TeamIndex = PlayerState->TeamIndex;
	Member.SquadId = PlayerState->SquadId;
	Member.MemberUniqueId = PlayerState->UniqueId;

	GameState->GameMemberInfoArray.Members.Add(Member);
	GameState->GameMemberInfoArray.MarkItemDirty(Member);

	return HandleStartingNewPlayer(GM, NewPlayer);
}

namespace GM
{
	__forceinline void HookAll()
	{
		//auto GameModeDefault = StaticFindObject<AFortGameModeAthena>("/Script/FortniteGame.Default__FortGameModeAthena");
		auto GameModeDefault = AFortGameModeAthena::GetDefaultObj();

		VirtualHook(GameModeDefault->Vft, 252, ReadyToStartMatchHook, (PVOID*)&ReadyToStartMatch);
		VirtualHook(GameModeDefault->Vft, 195, SpawnDefaultPawnForHook);
		CREATEHOOK(BaseAddress + 0x11bd030, PickTeamHook, nullptr);
		VirtualHook(GameModeDefault->Vft, 233, ChangeName, (PVOID*)&ChangeNameOG);
		VirtualHook(GameModeDefault->Vft, 201, HandleStartingNewPlayerHook, (PVOID*)&HandleStartingNewPlayer);
	}
}
