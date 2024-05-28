#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeMelee.Athena_PlayerCameraModeMelee_C
// (None)

class UClass* UAthena_PlayerCameraModeMelee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeMelee_C");

	return Clss;
}


// Athena_PlayerCameraModeMelee_C Athena_PlayerCameraModeMelee.Default__Athena_PlayerCameraModeMelee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeMelee_C* UAthena_PlayerCameraModeMelee_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeMelee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeMelee_C*>(UAthena_PlayerCameraModeMelee_C::StaticClass()->DefaultObject);

	return Default;
}

}


