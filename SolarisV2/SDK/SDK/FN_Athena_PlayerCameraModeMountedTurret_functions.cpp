#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeMountedTurret.Athena_PlayerCameraModeMountedTurret_C
// (None)

class UClass* UAthena_PlayerCameraModeMountedTurret_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeMountedTurret_C");

	return Clss;
}


// Athena_PlayerCameraModeMountedTurret_C Athena_PlayerCameraModeMountedTurret.Default__Athena_PlayerCameraModeMountedTurret_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeMountedTurret_C* UAthena_PlayerCameraModeMountedTurret_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeMountedTurret_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeMountedTurret_C*>(UAthena_PlayerCameraModeMountedTurret_C::StaticClass()->DefaultObject);

	return Default;
}

}


