#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass v2_PlayerCameraModeRanged.v2_PlayerCameraModeRanged_C
// (None)

class UClass* UV2_PlayerCameraModeRanged_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("v2_PlayerCameraModeRanged_C");

	return Clss;
}


// v2_PlayerCameraModeRanged_C v2_PlayerCameraModeRanged.Default__v2_PlayerCameraModeRanged_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UV2_PlayerCameraModeRanged_C* UV2_PlayerCameraModeRanged_C::GetDefaultObj()
{
	static class UV2_PlayerCameraModeRanged_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UV2_PlayerCameraModeRanged_C*>(UV2_PlayerCameraModeRanged_C::StaticClass()->DefaultObject);

	return Default;
}

}


