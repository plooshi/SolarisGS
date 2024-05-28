#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeTargetingShotgun.Athena_PlayerCameraModeTargetingShotgun_C
// (None)

class UClass* UAthena_PlayerCameraModeTargetingShotgun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeTargetingShotgun_C");

	return Clss;
}


// Athena_PlayerCameraModeTargetingShotgun_C Athena_PlayerCameraModeTargetingShotgun.Default__Athena_PlayerCameraModeTargetingShotgun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeTargetingShotgun_C* UAthena_PlayerCameraModeTargetingShotgun_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeTargetingShotgun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeTargetingShotgun_C*>(UAthena_PlayerCameraModeTargetingShotgun_C::StaticClass()->DefaultObject);

	return Default;
}

}


