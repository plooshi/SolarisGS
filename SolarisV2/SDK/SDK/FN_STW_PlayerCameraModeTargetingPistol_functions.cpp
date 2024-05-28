#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass STW_PlayerCameraModeTargetingPistol.STW_PlayerCameraModeTargetingPistol_C
// (None)

class UClass* USTW_PlayerCameraModeTargetingPistol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("STW_PlayerCameraModeTargetingPistol_C");

	return Clss;
}


// STW_PlayerCameraModeTargetingPistol_C STW_PlayerCameraModeTargetingPistol.Default__STW_PlayerCameraModeTargetingPistol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USTW_PlayerCameraModeTargetingPistol_C* USTW_PlayerCameraModeTargetingPistol_C::GetDefaultObj()
{
	static class USTW_PlayerCameraModeTargetingPistol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USTW_PlayerCameraModeTargetingPistol_C*>(USTW_PlayerCameraModeTargetingPistol_C::StaticClass()->DefaultObject);

	return Default;
}

}


