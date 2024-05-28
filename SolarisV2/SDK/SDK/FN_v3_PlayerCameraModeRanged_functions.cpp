#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass v3_PlayerCameraModeRanged.v3_PlayerCameraModeRanged_C
// (None)

class UClass* UV3_PlayerCameraModeRanged_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("v3_PlayerCameraModeRanged_C");

	return Clss;
}


// v3_PlayerCameraModeRanged_C v3_PlayerCameraModeRanged.Default__v3_PlayerCameraModeRanged_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UV3_PlayerCameraModeRanged_C* UV3_PlayerCameraModeRanged_C::GetDefaultObj()
{
	static class UV3_PlayerCameraModeRanged_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UV3_PlayerCameraModeRanged_C*>(UV3_PlayerCameraModeRanged_C::StaticClass()->DefaultObject);

	return Default;
}

}


