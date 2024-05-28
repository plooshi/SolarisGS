#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass v2_PlayerCameraModeTargetingPistol.v2_PlayerCameraModeTargetingPistol_C
// (None)

class UClass* UV2_PlayerCameraModeTargetingPistol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("v2_PlayerCameraModeTargetingPistol_C");

	return Clss;
}


// v2_PlayerCameraModeTargetingPistol_C v2_PlayerCameraModeTargetingPistol.Default__v2_PlayerCameraModeTargetingPistol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UV2_PlayerCameraModeTargetingPistol_C* UV2_PlayerCameraModeTargetingPistol_C::GetDefaultObj()
{
	static class UV2_PlayerCameraModeTargetingPistol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UV2_PlayerCameraModeTargetingPistol_C*>(UV2_PlayerCameraModeTargetingPistol_C::StaticClass()->DefaultObject);

	return Default;
}

}


