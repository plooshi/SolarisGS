#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass v2_PlayerCameraModeTargetingVeryShortRange.v2_PlayerCameraModeTargetingVeryShortRange_C
// (None)

class UClass* UV2_PlayerCameraModeTargetingVeryShortRange_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("v2_PlayerCameraModeTargetingVeryShortRange_C");

	return Clss;
}


// v2_PlayerCameraModeTargetingVeryShortRange_C v2_PlayerCameraModeTargetingVeryShortRange.Default__v2_PlayerCameraModeTargetingVeryShortRange_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UV2_PlayerCameraModeTargetingVeryShortRange_C* UV2_PlayerCameraModeTargetingVeryShortRange_C::GetDefaultObj()
{
	static class UV2_PlayerCameraModeTargetingVeryShortRange_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UV2_PlayerCameraModeTargetingVeryShortRange_C*>(UV2_PlayerCameraModeTargetingVeryShortRange_C::StaticClass()->DefaultObject);

	return Default;
}

}


