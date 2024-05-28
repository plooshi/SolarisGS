#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass v1_PlayerCameraModeTargetingPistol.v1_PlayerCameraModeTargetingPistol_C
// (None)

class UClass* UV1_PlayerCameraModeTargetingPistol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("v1_PlayerCameraModeTargetingPistol_C");

	return Clss;
}


// v1_PlayerCameraModeTargetingPistol_C v1_PlayerCameraModeTargetingPistol.Default__v1_PlayerCameraModeTargetingPistol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UV1_PlayerCameraModeTargetingPistol_C* UV1_PlayerCameraModeTargetingPistol_C::GetDefaultObj()
{
	static class UV1_PlayerCameraModeTargetingPistol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UV1_PlayerCameraModeTargetingPistol_C*>(UV1_PlayerCameraModeTargetingPistol_C::StaticClass()->DefaultObject);

	return Default;
}

}


