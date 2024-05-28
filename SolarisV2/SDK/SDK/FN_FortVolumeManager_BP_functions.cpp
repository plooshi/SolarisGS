#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FortVolumeManager_BP.FortVolumeManager_BP_C
// (Actor)

class UClass* AFortVolumeManager_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortVolumeManager_BP_C");

	return Clss;
}


// FortVolumeManager_BP_C FortVolumeManager_BP.Default__FortVolumeManager_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFortVolumeManager_BP_C* AFortVolumeManager_BP_C::GetDefaultObj()
{
	static class AFortVolumeManager_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortVolumeManager_BP_C*>(AFortVolumeManager_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


