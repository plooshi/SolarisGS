#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeTargetingLauncherGrenade.Athena_PlayerCameraModeTargetingLauncherGrenade_C
// (None)

class UClass* UAthena_PlayerCameraModeTargetingLauncherGrenade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeTargetingLauncherGrenade_C");

	return Clss;
}


// Athena_PlayerCameraModeTargetingLauncherGrenade_C Athena_PlayerCameraModeTargetingLauncherGrenade.Default__Athena_PlayerCameraModeTargetingLauncherGrenade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeTargetingLauncherGrenade_C* UAthena_PlayerCameraModeTargetingLauncherGrenade_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeTargetingLauncherGrenade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeTargetingLauncherGrenade_C*>(UAthena_PlayerCameraModeTargetingLauncherGrenade_C::StaticClass()->DefaultObject);

	return Default;
}

}


