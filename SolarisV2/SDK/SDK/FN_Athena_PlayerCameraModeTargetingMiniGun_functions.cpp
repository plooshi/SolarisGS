#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeTargetingMiniGun.Athena_PlayerCameraModeTargetingMiniGun_C
// (None)

class UClass* UAthena_PlayerCameraModeTargetingMiniGun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeTargetingMiniGun_C");

	return Clss;
}


// Athena_PlayerCameraModeTargetingMiniGun_C Athena_PlayerCameraModeTargetingMiniGun.Default__Athena_PlayerCameraModeTargetingMiniGun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeTargetingMiniGun_C* UAthena_PlayerCameraModeTargetingMiniGun_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeTargetingMiniGun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeTargetingMiniGun_C*>(UAthena_PlayerCameraModeTargetingMiniGun_C::StaticClass()->DefaultObject);

	return Default;
}

}


