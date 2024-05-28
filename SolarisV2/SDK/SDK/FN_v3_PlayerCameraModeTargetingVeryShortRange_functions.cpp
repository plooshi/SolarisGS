#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass v3_PlayerCameraModeTargetingVeryShortRange.v3_PlayerCameraModeTargetingVeryShortRange_C
// (None)

class UClass* UV3_PlayerCameraModeTargetingVeryShortRange_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("v3_PlayerCameraModeTargetingVeryShortRange_C");

	return Clss;
}


// v3_PlayerCameraModeTargetingVeryShortRange_C v3_PlayerCameraModeTargetingVeryShortRange.Default__v3_PlayerCameraModeTargetingVeryShortRange_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UV3_PlayerCameraModeTargetingVeryShortRange_C* UV3_PlayerCameraModeTargetingVeryShortRange_C::GetDefaultObj()
{
	static class UV3_PlayerCameraModeTargetingVeryShortRange_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UV3_PlayerCameraModeTargetingVeryShortRange_C*>(UV3_PlayerCameraModeTargetingVeryShortRange_C::StaticClass()->DefaultObject);

	return Default;
}

}


