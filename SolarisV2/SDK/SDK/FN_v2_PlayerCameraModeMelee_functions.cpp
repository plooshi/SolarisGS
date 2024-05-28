#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass v2_PlayerCameraModeMelee.v2_PlayerCameraModeMelee_C
// (None)

class UClass* UV2_PlayerCameraModeMelee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("v2_PlayerCameraModeMelee_C");

	return Clss;
}


// v2_PlayerCameraModeMelee_C v2_PlayerCameraModeMelee.Default__v2_PlayerCameraModeMelee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UV2_PlayerCameraModeMelee_C* UV2_PlayerCameraModeMelee_C::GetDefaultObj()
{
	static class UV2_PlayerCameraModeMelee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UV2_PlayerCameraModeMelee_C*>(UV2_PlayerCameraModeMelee_C::StaticClass()->DefaultObject);

	return Default;
}

}


