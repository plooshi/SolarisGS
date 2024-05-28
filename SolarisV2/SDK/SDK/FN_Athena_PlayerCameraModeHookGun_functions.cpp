#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeHookGun.Athena_PlayerCameraModeHookGun_C
// (None)

class UClass* UAthena_PlayerCameraModeHookGun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeHookGun_C");

	return Clss;
}


// Athena_PlayerCameraModeHookGun_C Athena_PlayerCameraModeHookGun.Default__Athena_PlayerCameraModeHookGun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeHookGun_C* UAthena_PlayerCameraModeHookGun_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeHookGun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeHookGun_C*>(UAthena_PlayerCameraModeHookGun_C::StaticClass()->DefaultObject);

	return Default;
}

}


