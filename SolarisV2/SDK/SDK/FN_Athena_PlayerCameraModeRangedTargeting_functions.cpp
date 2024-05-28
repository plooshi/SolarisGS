#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeRangedTargeting.Athena_PlayerCameraModeRangedTargeting_C
// (None)

class UClass* UAthena_PlayerCameraModeRangedTargeting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeRangedTargeting_C");

	return Clss;
}


// Athena_PlayerCameraModeRangedTargeting_C Athena_PlayerCameraModeRangedTargeting.Default__Athena_PlayerCameraModeRangedTargeting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeRangedTargeting_C* UAthena_PlayerCameraModeRangedTargeting_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeRangedTargeting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeRangedTargeting_C*>(UAthena_PlayerCameraModeRangedTargeting_C::StaticClass()->DefaultObject);

	return Default;
}

}


