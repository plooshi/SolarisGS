#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass v3_PlayerCameraModeTargetingAssault.v3_PlayerCameraModeTargetingAssault_C
// (None)

class UClass* UV3_PlayerCameraModeTargetingAssault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("v3_PlayerCameraModeTargetingAssault_C");

	return Clss;
}


// v3_PlayerCameraModeTargetingAssault_C v3_PlayerCameraModeTargetingAssault.Default__v3_PlayerCameraModeTargetingAssault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UV3_PlayerCameraModeTargetingAssault_C* UV3_PlayerCameraModeTargetingAssault_C::GetDefaultObj()
{
	static class UV3_PlayerCameraModeTargetingAssault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UV3_PlayerCameraModeTargetingAssault_C*>(UV3_PlayerCameraModeTargetingAssault_C::StaticClass()->DefaultObject);

	return Default;
}

}


