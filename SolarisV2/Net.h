#pragma once

enum ENetMode
{
    NM_Standalone,
    NM_DedicatedServer,
    NM_ListenServer,
    NM_Client,
    NM_MAX,
};

ENetMode GetNetModeWorld()
{
    return ENetMode::NM_DedicatedServer;
}

float (*GetMaxTickrateOG)(void* a1, float a2, char a3);
float GetMaxTickrateHook(void *a1, float a2, char a3)
{
    return World->NetDriver ? (float) World->NetDriver->NetServerMaxTickRate : GetMaxTickrateOG(a1, a2, a3);
}

inline UNetDriver* (*CreateNetDriver)(UEngine* Engine, UWorld* InWorld, FName NetDriverDefinition) = decltype(CreateNetDriver)(BaseAddress + 0x33f0490);
inline bool (*InitListen)(UNetDriver* Driver, void* InNotify, FURL& LocalURL, bool bReuseAddressAndPort, FString& Error) = decltype(InitListen)(BaseAddress + 0x6d9070);
inline void* (*SetWorld)(UNetDriver* NetDriver, UWorld* World) = decltype(SetWorld)(BaseAddress + 0x315ef10);
inline void (*ServerReplicateActors)(UReplicationDriver* ReplicationDriver) = decltype(ServerReplicateActors)(BaseAddress + 0xa0dac0);

bool SetOffline = false;
void (*TickFlush)(UNetDriver*);
void TickFlushHook(UNetDriver* NetDriver)
{
    static bool hasAClientConnected = false;
    if (!hasAClientConnected && NetDriver->ClientConnections.Num() > 0) hasAClientConnected = true;
    else if (hasAClientConnected && NetDriver->ClientConnections.Num() == 0) {
        TerminateProcess(GetCurrentProcess(), 0);
    }
    else if (!SetOffline && GameState->GamePhase == EAthenaGamePhase::Aircraft) {
        SetOffline = true;
    }
    if (NetDriver->ReplicationDriver)
        ServerReplicateActors(NetDriver->ReplicationDriver);

    return TickFlush(NetDriver);
}