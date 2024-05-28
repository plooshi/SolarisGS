#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass v3_PlayerCameraModeTargetingRifle.v3_PlayerCameraModeTargetingRifle_C
// (None)

class UClass* UV3_PlayerCameraModeTargetingRifle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("v3_PlayerCameraModeTargetingRifle_C");

	return Clss;
}


// v3_PlayerCameraModeTargetingRifle_C v3_PlayerCameraModeTargetingRifle.Default__v3_PlayerCameraModeTargetingRifle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UV3_PlayerCameraModeTargetingRifle_C* UV3_PlayerCameraModeTargetingRifle_C::GetDefaultObj()
{
	static class UV3_PlayerCameraModeTargetingRifle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UV3_PlayerCameraModeTargetingRifle_C*>(UV3_PlayerCameraModeTargetingRifle_C::StaticClass()->DefaultObject);

	return Default;
}

}


