#pragma once

#include <Windows.h>
#include <string>
#include <vector>
#include <cstdio>
#include <array>
#include <bitset>
#include <thread>
#include <set>
#include <intrin.h>
#include <numeric>
#include <algorithm>
#include <map>

#pragma comment(lib,"minhook/minhook.lib")
#include "minhook/MinHook.h"

#define CREATEHOOK(Address, Hook, Og) \
MH_CreateHook((void*)(Address), Hook, (void**)(Og));

static void VirtualHook(void** vft, int idx, void* newfunc, void** OG = nullptr)
{
	if (OG)
		*OG = vft[idx];

	DWORD dwProt;
	VirtualProtect(&vft[idx], 8, PAGE_EXECUTE_READWRITE, &dwProt);
	vft[idx] = newfunc;
	DWORD dwTemp;
	VirtualProtect(&vft[idx], 8, dwProt, &dwTemp);
}


#include "SDK/SDK.hpp"
using namespace SDK;

template <typename T>
static void HookEvery(int idx, void* newfunc, void** OG = nullptr) {
    for (int32 i = 0; i < UObject::GObjects->Num(); i++)
    {
        UObject* Obj = UObject::GObjects->GetByIndex(i);
        if (Obj && Obj->IsA<T>()) VirtualHook(Obj->Class->DefaultObject->Vft, idx, newfunc, (OG != nullptr && *OG) ? OG : nullptr);
    }
}