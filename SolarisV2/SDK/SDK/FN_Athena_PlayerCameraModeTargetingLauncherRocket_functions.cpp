#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeTargetingLauncherRocket.Athena_PlayerCameraModeTargetingLauncherRocket_C
// (None)

class UClass* UAthena_PlayerCameraModeTargetingLauncherRocket_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeTargetingLauncherRocket_C");

	return Clss;
}


// Athena_PlayerCameraModeTargetingLauncherRocket_C Athena_PlayerCameraModeTargetingLauncherRocket.Default__Athena_PlayerCameraModeTargetingLauncherRocket_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeTargetingLauncherRocket_C* UAthena_PlayerCameraModeTargetingLauncherRocket_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeTargetingLauncherRocket_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeTargetingLauncherRocket_C*>(UAthena_PlayerCameraModeTargetingLauncherRocket_C::StaticClass()->DefaultObject);

	return Default;
}

}


