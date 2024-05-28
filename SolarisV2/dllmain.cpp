#include "pch.h"
#include "Util.h"
#include "Net.h"

#include "Inventory.h"

#include "Vehicle.h"
#include "Building.h"
#include "Abilities.h"

#include "Gamemode.h"
#include "Player.h"

#include "Hooks.h"
#include "Looting.h"

BaseAddressHolder BaseAddress;
namespace SDK { 
    UObject* FindObject(std::string ObjectPath, UClass* Class)
    {
        auto Found = InternalFindObject(ObjectPath, Class);
        return Found ? Found : InternalLoadObject(ObjectPath, Class);
    }
}

#define CONSOLE

DWORD WINAPI Main(LPVOID)
{
#ifdef CONSOLE
    AllocConsole();
    FILE* fptr;
    freopen_s(&fptr, "CONOUT$", "w+", stdout);

    SetConsoleTitleA("Solaris V2");
#endif

    MH_Initialize();

    srand((uint32)time(0));
    Hooks::HookAll();
    Sleep(5000);
    Hooks::LoadTerrain();

    return 0;
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(0, 0, Main, 0, 0, 0);
        break;
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

