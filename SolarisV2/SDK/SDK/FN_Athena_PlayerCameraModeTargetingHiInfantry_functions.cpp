#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeTargetingHiInfantry.Athena_PlayerCameraModeTargetingHiInfantry_C
// (None)

class UClass* UAthena_PlayerCameraModeTargetingHiInfantry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeTargetingHiInfantry_C");

	return Clss;
}


// Athena_PlayerCameraModeTargetingHiInfantry_C Athena_PlayerCameraModeTargetingHiInfantry.Default__Athena_PlayerCameraModeTargetingHiInfantry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeTargetingHiInfantry_C* UAthena_PlayerCameraModeTargetingHiInfantry_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeTargetingHiInfantry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeTargetingHiInfantry_C*>(UAthena_PlayerCameraModeTargetingHiInfantry_C::StaticClass()->DefaultObject);

	return Default;
}

}


