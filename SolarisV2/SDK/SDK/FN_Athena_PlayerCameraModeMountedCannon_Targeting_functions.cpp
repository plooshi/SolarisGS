#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeMountedCannon_Targeting.Athena_PlayerCameraModeMountedCannon_Targeting_C
// (None)

class UClass* UAthena_PlayerCameraModeMountedCannon_Targeting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeMountedCannon_Targeting_C");

	return Clss;
}


// Athena_PlayerCameraModeMountedCannon_Targeting_C Athena_PlayerCameraModeMountedCannon_Targeting.Default__Athena_PlayerCameraModeMountedCannon_Targeting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeMountedCannon_Targeting_C* UAthena_PlayerCameraModeMountedCannon_Targeting_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeMountedCannon_Targeting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeMountedCannon_Targeting_C*>(UAthena_PlayerCameraModeMountedCannon_Targeting_C::StaticClass()->DefaultObject);

	return Default;
}

}


