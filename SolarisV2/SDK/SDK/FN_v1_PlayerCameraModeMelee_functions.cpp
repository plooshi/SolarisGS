#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass v1_PlayerCameraModeMelee.v1_PlayerCameraModeMelee_C
// (None)

class UClass* UV1_PlayerCameraModeMelee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("v1_PlayerCameraModeMelee_C");

	return Clss;
}


// v1_PlayerCameraModeMelee_C v1_PlayerCameraModeMelee.Default__v1_PlayerCameraModeMelee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UV1_PlayerCameraModeMelee_C* UV1_PlayerCameraModeMelee_C::GetDefaultObj()
{
	static class UV1_PlayerCameraModeMelee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UV1_PlayerCameraModeMelee_C*>(UV1_PlayerCameraModeMelee_C::StaticClass()->DefaultObject);

	return Default;
}

}


