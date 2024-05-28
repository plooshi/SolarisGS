#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeTargetingScopeMidRange.Athena_PlayerCameraModeTargetingScopeMidRange_C
// (None)

class UClass* UAthena_PlayerCameraModeTargetingScopeMidRange_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeTargetingScopeMidRange_C");

	return Clss;
}


// Athena_PlayerCameraModeTargetingScopeMidRange_C Athena_PlayerCameraModeTargetingScopeMidRange.Default__Athena_PlayerCameraModeTargetingScopeMidRange_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeTargetingScopeMidRange_C* UAthena_PlayerCameraModeTargetingScopeMidRange_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeTargetingScopeMidRange_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeTargetingScopeMidRange_C*>(UAthena_PlayerCameraModeTargetingScopeMidRange_C::StaticClass()->DefaultObject);

	return Default;
}

}


