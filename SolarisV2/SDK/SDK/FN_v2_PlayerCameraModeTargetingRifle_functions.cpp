#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass v2_PlayerCameraModeTargetingRifle.v2_PlayerCameraModeTargetingRifle_C
// (None)

class UClass* UV2_PlayerCameraModeTargetingRifle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("v2_PlayerCameraModeTargetingRifle_C");

	return Clss;
}


// v2_PlayerCameraModeTargetingRifle_C v2_PlayerCameraModeTargetingRifle.Default__v2_PlayerCameraModeTargetingRifle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UV2_PlayerCameraModeTargetingRifle_C* UV2_PlayerCameraModeTargetingRifle_C::GetDefaultObj()
{
	static class UV2_PlayerCameraModeTargetingRifle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UV2_PlayerCameraModeTargetingRifle_C*>(UV2_PlayerCameraModeTargetingRifle_C::StaticClass()->DefaultObject);

	return Default;
}

}


