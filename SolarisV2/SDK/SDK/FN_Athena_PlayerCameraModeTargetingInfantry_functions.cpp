#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeTargetingInfantry.Athena_PlayerCameraModeTargetingInfantry_C
// (None)

class UClass* UAthena_PlayerCameraModeTargetingInfantry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeTargetingInfantry_C");

	return Clss;
}


// Athena_PlayerCameraModeTargetingInfantry_C Athena_PlayerCameraModeTargetingInfantry.Default__Athena_PlayerCameraModeTargetingInfantry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeTargetingInfantry_C* UAthena_PlayerCameraModeTargetingInfantry_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeTargetingInfantry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeTargetingInfantry_C*>(UAthena_PlayerCameraModeTargetingInfantry_C::StaticClass()->DefaultObject);

	return Default;
}

}


