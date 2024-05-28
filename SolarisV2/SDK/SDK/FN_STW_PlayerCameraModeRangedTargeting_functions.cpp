#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass STW_PlayerCameraModeRangedTargeting.STW_PlayerCameraModeRangedTargeting_C
// (None)

class UClass* USTW_PlayerCameraModeRangedTargeting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("STW_PlayerCameraModeRangedTargeting_C");

	return Clss;
}


// STW_PlayerCameraModeRangedTargeting_C STW_PlayerCameraModeRangedTargeting.Default__STW_PlayerCameraModeRangedTargeting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USTW_PlayerCameraModeRangedTargeting_C* USTW_PlayerCameraModeRangedTargeting_C::GetDefaultObj()
{
	static class USTW_PlayerCameraModeRangedTargeting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USTW_PlayerCameraModeRangedTargeting_C*>(USTW_PlayerCameraModeRangedTargeting_C::StaticClass()->DefaultObject);

	return Default;
}

}


