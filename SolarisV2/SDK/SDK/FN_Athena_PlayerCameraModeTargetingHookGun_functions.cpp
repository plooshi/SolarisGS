#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeTargetingHookGun.Athena_PlayerCameraModeTargetingHookGun_C
// (None)

class UClass* UAthena_PlayerCameraModeTargetingHookGun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeTargetingHookGun_C");

	return Clss;
}


// Athena_PlayerCameraModeTargetingHookGun_C Athena_PlayerCameraModeTargetingHookGun.Default__Athena_PlayerCameraModeTargetingHookGun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeTargetingHookGun_C* UAthena_PlayerCameraModeTargetingHookGun_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeTargetingHookGun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeTargetingHookGun_C*>(UAthena_PlayerCameraModeTargetingHookGun_C::StaticClass()->DefaultObject);

	return Default;
}

}


