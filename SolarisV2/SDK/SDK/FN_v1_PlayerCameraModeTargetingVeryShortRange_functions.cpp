#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass v1_PlayerCameraModeTargetingVeryShortRange.v1_PlayerCameraModeTargetingVeryShortRange_C
// (None)

class UClass* UV1_PlayerCameraModeTargetingVeryShortRange_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("v1_PlayerCameraModeTargetingVeryShortRange_C");

	return Clss;
}


// v1_PlayerCameraModeTargetingVeryShortRange_C v1_PlayerCameraModeTargetingVeryShortRange.Default__v1_PlayerCameraModeTargetingVeryShortRange_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UV1_PlayerCameraModeTargetingVeryShortRange_C* UV1_PlayerCameraModeTargetingVeryShortRange_C::GetDefaultObj()
{
	static class UV1_PlayerCameraModeTargetingVeryShortRange_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UV1_PlayerCameraModeTargetingVeryShortRange_C*>(UV1_PlayerCameraModeTargetingVeryShortRange_C::StaticClass()->DefaultObject);

	return Default;
}

}


