#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeTargetingDrumGun.Athena_PlayerCameraModeTargetingDrumGun_C
// (None)

class UClass* UAthena_PlayerCameraModeTargetingDrumGun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeTargetingDrumGun_C");

	return Clss;
}


// Athena_PlayerCameraModeTargetingDrumGun_C Athena_PlayerCameraModeTargetingDrumGun.Default__Athena_PlayerCameraModeTargetingDrumGun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeTargetingDrumGun_C* UAthena_PlayerCameraModeTargetingDrumGun_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeTargetingDrumGun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeTargetingDrumGun_C*>(UAthena_PlayerCameraModeTargetingDrumGun_C::StaticClass()->DefaultObject);

	return Default;
}

}


