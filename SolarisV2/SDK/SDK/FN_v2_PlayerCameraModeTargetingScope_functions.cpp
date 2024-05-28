#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass v2_PlayerCameraModeTargetingScope.v2_PlayerCameraModeTargetingScope_C
// (None)

class UClass* UV2_PlayerCameraModeTargetingScope_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("v2_PlayerCameraModeTargetingScope_C");

	return Clss;
}


// v2_PlayerCameraModeTargetingScope_C v2_PlayerCameraModeTargetingScope.Default__v2_PlayerCameraModeTargetingScope_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UV2_PlayerCameraModeTargetingScope_C* UV2_PlayerCameraModeTargetingScope_C::GetDefaultObj()
{
	static class UV2_PlayerCameraModeTargetingScope_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UV2_PlayerCameraModeTargetingScope_C*>(UV2_PlayerCameraModeTargetingScope_C::StaticClass()->DefaultObject);

	return Default;
}

}


