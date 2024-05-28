#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass STW_PlayerCameraModeTargetingShotgun.STW_PlayerCameraModeTargetingShotgun_C
// (None)

class UClass* USTW_PlayerCameraModeTargetingShotgun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("STW_PlayerCameraModeTargetingShotgun_C");

	return Clss;
}


// STW_PlayerCameraModeTargetingShotgun_C STW_PlayerCameraModeTargetingShotgun.Default__STW_PlayerCameraModeTargetingShotgun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USTW_PlayerCameraModeTargetingShotgun_C* USTW_PlayerCameraModeTargetingShotgun_C::GetDefaultObj()
{
	static class USTW_PlayerCameraModeTargetingShotgun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USTW_PlayerCameraModeTargetingShotgun_C*>(USTW_PlayerCameraModeTargetingShotgun_C::StaticClass()->DefaultObject);

	return Default;
}

}


