#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeTargetingDualPistol.Athena_PlayerCameraModeTargetingDualPistol_C
// (None)

class UClass* UAthena_PlayerCameraModeTargetingDualPistol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeTargetingDualPistol_C");

	return Clss;
}


// Athena_PlayerCameraModeTargetingDualPistol_C Athena_PlayerCameraModeTargetingDualPistol.Default__Athena_PlayerCameraModeTargetingDualPistol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeTargetingDualPistol_C* UAthena_PlayerCameraModeTargetingDualPistol_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeTargetingDualPistol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeTargetingDualPistol_C*>(UAthena_PlayerCameraModeTargetingDualPistol_C::StaticClass()->DefaultObject);

	return Default;
}

}


