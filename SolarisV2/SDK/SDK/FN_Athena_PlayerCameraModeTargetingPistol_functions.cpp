#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeTargetingPistol.Athena_PlayerCameraModeTargetingPistol_C
// (None)

class UClass* UAthena_PlayerCameraModeTargetingPistol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeTargetingPistol_C");

	return Clss;
}


// Athena_PlayerCameraModeTargetingPistol_C Athena_PlayerCameraModeTargetingPistol.Default__Athena_PlayerCameraModeTargetingPistol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeTargetingPistol_C* UAthena_PlayerCameraModeTargetingPistol_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeTargetingPistol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeTargetingPistol_C*>(UAthena_PlayerCameraModeTargetingPistol_C::StaticClass()->DefaultObject);

	return Default;
}

}


