#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeMountedTurret_Targeting.Athena_PlayerCameraModeMountedTurret_Targeting_C
// (None)

class UClass* UAthena_PlayerCameraModeMountedTurret_Targeting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeMountedTurret_Targeting_C");

	return Clss;
}


// Athena_PlayerCameraModeMountedTurret_Targeting_C Athena_PlayerCameraModeMountedTurret_Targeting.Default__Athena_PlayerCameraModeMountedTurret_Targeting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeMountedTurret_Targeting_C* UAthena_PlayerCameraModeMountedTurret_Targeting_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeMountedTurret_Targeting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeMountedTurret_Targeting_C*>(UAthena_PlayerCameraModeMountedTurret_Targeting_C::StaticClass()->DefaultObject);

	return Default;
}

}


