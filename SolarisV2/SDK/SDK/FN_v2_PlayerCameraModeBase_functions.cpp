#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass v2_PlayerCameraModeBase.v2_PlayerCameraModeBase_C
// (None)

class UClass* UV2_PlayerCameraModeBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("v2_PlayerCameraModeBase_C");

	return Clss;
}


// v2_PlayerCameraModeBase_C v2_PlayerCameraModeBase.Default__v2_PlayerCameraModeBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UV2_PlayerCameraModeBase_C* UV2_PlayerCameraModeBase_C::GetDefaultObj()
{
	static class UV2_PlayerCameraModeBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UV2_PlayerCameraModeBase_C*>(UV2_PlayerCameraModeBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


