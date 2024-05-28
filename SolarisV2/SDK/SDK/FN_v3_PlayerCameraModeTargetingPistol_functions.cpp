#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass v3_PlayerCameraModeTargetingPistol.v3_PlayerCameraModeTargetingPistol_C
// (None)

class UClass* UV3_PlayerCameraModeTargetingPistol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("v3_PlayerCameraModeTargetingPistol_C");

	return Clss;
}


// v3_PlayerCameraModeTargetingPistol_C v3_PlayerCameraModeTargetingPistol.Default__v3_PlayerCameraModeTargetingPistol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UV3_PlayerCameraModeTargetingPistol_C* UV3_PlayerCameraModeTargetingPistol_C::GetDefaultObj()
{
	static class UV3_PlayerCameraModeTargetingPistol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UV3_PlayerCameraModeTargetingPistol_C*>(UV3_PlayerCameraModeTargetingPistol_C::StaticClass()->DefaultObject);

	return Default;
}

}


