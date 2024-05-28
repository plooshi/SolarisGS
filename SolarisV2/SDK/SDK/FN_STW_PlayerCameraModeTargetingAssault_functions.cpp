#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass STW_PlayerCameraModeTargetingAssault.STW_PlayerCameraModeTargetingAssault_C
// (None)

class UClass* USTW_PlayerCameraModeTargetingAssault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("STW_PlayerCameraModeTargetingAssault_C");

	return Clss;
}


// STW_PlayerCameraModeTargetingAssault_C STW_PlayerCameraModeTargetingAssault.Default__STW_PlayerCameraModeTargetingAssault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USTW_PlayerCameraModeTargetingAssault_C* USTW_PlayerCameraModeTargetingAssault_C::GetDefaultObj()
{
	static class USTW_PlayerCameraModeTargetingAssault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USTW_PlayerCameraModeTargetingAssault_C*>(USTW_PlayerCameraModeTargetingAssault_C::StaticClass()->DefaultObject);

	return Default;
}

}


