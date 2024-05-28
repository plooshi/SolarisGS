#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass STW_PlayerCameraModeRanged.STW_PlayerCameraModeRanged_C
// (None)

class UClass* USTW_PlayerCameraModeRanged_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("STW_PlayerCameraModeRanged_C");

	return Clss;
}


// STW_PlayerCameraModeRanged_C STW_PlayerCameraModeRanged.Default__STW_PlayerCameraModeRanged_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USTW_PlayerCameraModeRanged_C* USTW_PlayerCameraModeRanged_C::GetDefaultObj()
{
	static class USTW_PlayerCameraModeRanged_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USTW_PlayerCameraModeRanged_C*>(USTW_PlayerCameraModeRanged_C::StaticClass()->DefaultObject);

	return Default;
}

}


