#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass v1_PlayerCameraModeBase.v1_PlayerCameraModeBase_C
// (None)

class UClass* UV1_PlayerCameraModeBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("v1_PlayerCameraModeBase_C");

	return Clss;
}


// v1_PlayerCameraModeBase_C v1_PlayerCameraModeBase.Default__v1_PlayerCameraModeBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UV1_PlayerCameraModeBase_C* UV1_PlayerCameraModeBase_C::GetDefaultObj()
{
	static class UV1_PlayerCameraModeBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UV1_PlayerCameraModeBase_C*>(UV1_PlayerCameraModeBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


