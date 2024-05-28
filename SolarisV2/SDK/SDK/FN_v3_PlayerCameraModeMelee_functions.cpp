#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass v3_PlayerCameraModeMelee.v3_PlayerCameraModeMelee_C
// (None)

class UClass* UV3_PlayerCameraModeMelee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("v3_PlayerCameraModeMelee_C");

	return Clss;
}


// v3_PlayerCameraModeMelee_C v3_PlayerCameraModeMelee.Default__v3_PlayerCameraModeMelee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UV3_PlayerCameraModeMelee_C* UV3_PlayerCameraModeMelee_C::GetDefaultObj()
{
	static class UV3_PlayerCameraModeMelee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UV3_PlayerCameraModeMelee_C*>(UV3_PlayerCameraModeMelee_C::StaticClass()->DefaultObject);

	return Default;
}

}


