#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass v3_PlayerCameraModeTargetingScope.v3_PlayerCameraModeTargetingScope_C
// (None)

class UClass* UV3_PlayerCameraModeTargetingScope_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("v3_PlayerCameraModeTargetingScope_C");

	return Clss;
}


// v3_PlayerCameraModeTargetingScope_C v3_PlayerCameraModeTargetingScope.Default__v3_PlayerCameraModeTargetingScope_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UV3_PlayerCameraModeTargetingScope_C* UV3_PlayerCameraModeTargetingScope_C::GetDefaultObj()
{
	static class UV3_PlayerCameraModeTargetingScope_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UV3_PlayerCameraModeTargetingScope_C*>(UV3_PlayerCameraModeTargetingScope_C::StaticClass()->DefaultObject);

	return Default;
}

}


