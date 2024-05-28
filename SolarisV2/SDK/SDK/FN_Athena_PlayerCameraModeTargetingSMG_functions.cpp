#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeTargetingSMG.Athena_PlayerCameraModeTargetingSMG_C
// (None)

class UClass* UAthena_PlayerCameraModeTargetingSMG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeTargetingSMG_C");

	return Clss;
}


// Athena_PlayerCameraModeTargetingSMG_C Athena_PlayerCameraModeTargetingSMG.Default__Athena_PlayerCameraModeTargetingSMG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeTargetingSMG_C* UAthena_PlayerCameraModeTargetingSMG_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeTargetingSMG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeTargetingSMG_C*>(UAthena_PlayerCameraModeTargetingSMG_C::StaticClass()->DefaultObject);

	return Default;
}

}


