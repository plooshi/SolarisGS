#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraMode_RespawnedAir.Athena_PlayerCameraMode_RespawnedAir_C
// (None)

class UClass* UAthena_PlayerCameraMode_RespawnedAir_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraMode_RespawnedAir_C");

	return Clss;
}


// Athena_PlayerCameraMode_RespawnedAir_C Athena_PlayerCameraMode_RespawnedAir.Default__Athena_PlayerCameraMode_RespawnedAir_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraMode_RespawnedAir_C* UAthena_PlayerCameraMode_RespawnedAir_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraMode_RespawnedAir_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraMode_RespawnedAir_C*>(UAthena_PlayerCameraMode_RespawnedAir_C::StaticClass()->DefaultObject);

	return Default;
}

}


