#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeTargetingIronSight.Athena_PlayerCameraModeTargetingIronSight_C
// (None)

class UClass* UAthena_PlayerCameraModeTargetingIronSight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeTargetingIronSight_C");

	return Clss;
}


// Athena_PlayerCameraModeTargetingIronSight_C Athena_PlayerCameraModeTargetingIronSight.Default__Athena_PlayerCameraModeTargetingIronSight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeTargetingIronSight_C* UAthena_PlayerCameraModeTargetingIronSight_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeTargetingIronSight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeTargetingIronSight_C*>(UAthena_PlayerCameraModeTargetingIronSight_C::StaticClass()->DefaultObject);

	return Default;
}

}


