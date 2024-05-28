#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass STW_PlayerCameraModeTargetingIronSight.STW_PlayerCameraModeTargetingIronSight_C
// (None)

class UClass* USTW_PlayerCameraModeTargetingIronSight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("STW_PlayerCameraModeTargetingIronSight_C");

	return Clss;
}


// STW_PlayerCameraModeTargetingIronSight_C STW_PlayerCameraModeTargetingIronSight.Default__STW_PlayerCameraModeTargetingIronSight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USTW_PlayerCameraModeTargetingIronSight_C* USTW_PlayerCameraModeTargetingIronSight_C::GetDefaultObj()
{
	static class USTW_PlayerCameraModeTargetingIronSight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USTW_PlayerCameraModeTargetingIronSight_C*>(USTW_PlayerCameraModeTargetingIronSight_C::StaticClass()->DefaultObject);

	return Default;
}

}


