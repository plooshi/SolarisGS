#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass v1_PlayerCameraModeRanged.v1_PlayerCameraModeRanged_C
// (None)

class UClass* UV1_PlayerCameraModeRanged_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("v1_PlayerCameraModeRanged_C");

	return Clss;
}


// v1_PlayerCameraModeRanged_C v1_PlayerCameraModeRanged.Default__v1_PlayerCameraModeRanged_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UV1_PlayerCameraModeRanged_C* UV1_PlayerCameraModeRanged_C::GetDefaultObj()
{
	static class UV1_PlayerCameraModeRanged_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UV1_PlayerCameraModeRanged_C*>(UV1_PlayerCameraModeRanged_C::StaticClass()->DefaultObject);

	return Default;
}

}


