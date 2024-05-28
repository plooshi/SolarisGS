#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass v3_PlayerCameraModeBase.v3_PlayerCameraModeBase_C
// (None)

class UClass* UV3_PlayerCameraModeBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("v3_PlayerCameraModeBase_C");

	return Clss;
}


// v3_PlayerCameraModeBase_C v3_PlayerCameraModeBase.Default__v3_PlayerCameraModeBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UV3_PlayerCameraModeBase_C* UV3_PlayerCameraModeBase_C::GetDefaultObj()
{
	static class UV3_PlayerCameraModeBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UV3_PlayerCameraModeBase_C*>(UV3_PlayerCameraModeBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


