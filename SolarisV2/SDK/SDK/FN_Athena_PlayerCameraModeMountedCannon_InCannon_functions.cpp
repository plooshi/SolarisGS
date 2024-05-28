#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeMountedCannon_InCannon.Athena_PlayerCameraModeMountedCannon_InCannon_C
// (None)

class UClass* UAthena_PlayerCameraModeMountedCannon_InCannon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeMountedCannon_InCannon_C");

	return Clss;
}


// Athena_PlayerCameraModeMountedCannon_InCannon_C Athena_PlayerCameraModeMountedCannon_InCannon.Default__Athena_PlayerCameraModeMountedCannon_InCannon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeMountedCannon_InCannon_C* UAthena_PlayerCameraModeMountedCannon_InCannon_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeMountedCannon_InCannon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeMountedCannon_InCannon_C*>(UAthena_PlayerCameraModeMountedCannon_InCannon_C::StaticClass()->DefaultObject);

	return Default;
}

}


