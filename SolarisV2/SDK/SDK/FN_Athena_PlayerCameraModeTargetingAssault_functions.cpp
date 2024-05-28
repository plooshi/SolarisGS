#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeTargetingAssault.Athena_PlayerCameraModeTargetingAssault_C
// (None)

class UClass* UAthena_PlayerCameraModeTargetingAssault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeTargetingAssault_C");

	return Clss;
}


// Athena_PlayerCameraModeTargetingAssault_C Athena_PlayerCameraModeTargetingAssault.Default__Athena_PlayerCameraModeTargetingAssault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeTargetingAssault_C* UAthena_PlayerCameraModeTargetingAssault_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeTargetingAssault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeTargetingAssault_C*>(UAthena_PlayerCameraModeTargetingAssault_C::StaticClass()->DefaultObject);

	return Default;
}

}


