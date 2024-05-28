#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass v1_PlayerCameraModeTargetingRifle.v1_PlayerCameraModeTargetingRifle_C
// (None)

class UClass* UV1_PlayerCameraModeTargetingRifle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("v1_PlayerCameraModeTargetingRifle_C");

	return Clss;
}


// v1_PlayerCameraModeTargetingRifle_C v1_PlayerCameraModeTargetingRifle.Default__v1_PlayerCameraModeTargetingRifle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UV1_PlayerCameraModeTargetingRifle_C* UV1_PlayerCameraModeTargetingRifle_C::GetDefaultObj()
{
	static class UV1_PlayerCameraModeTargetingRifle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UV1_PlayerCameraModeTargetingRifle_C*>(UV1_PlayerCameraModeTargetingRifle_C::StaticClass()->DefaultObject);

	return Default;
}

}


