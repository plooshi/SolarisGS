#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass v1_PlayerCameraModeTargetingScope.v1_PlayerCameraModeTargetingScope_C
// (None)

class UClass* UV1_PlayerCameraModeTargetingScope_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("v1_PlayerCameraModeTargetingScope_C");

	return Clss;
}


// v1_PlayerCameraModeTargetingScope_C v1_PlayerCameraModeTargetingScope.Default__v1_PlayerCameraModeTargetingScope_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UV1_PlayerCameraModeTargetingScope_C* UV1_PlayerCameraModeTargetingScope_C::GetDefaultObj()
{
	static class UV1_PlayerCameraModeTargetingScope_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UV1_PlayerCameraModeTargetingScope_C*>(UV1_PlayerCameraModeTargetingScope_C::StaticClass()->DefaultObject);

	return Default;
}

}


