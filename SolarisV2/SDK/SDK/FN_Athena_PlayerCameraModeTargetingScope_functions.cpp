#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeTargetingScope.Athena_PlayerCameraModeTargetingScope_C
// (None)

class UClass* UAthena_PlayerCameraModeTargetingScope_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeTargetingScope_C");

	return Clss;
}


// Athena_PlayerCameraModeTargetingScope_C Athena_PlayerCameraModeTargetingScope.Default__Athena_PlayerCameraModeTargetingScope_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeTargetingScope_C* UAthena_PlayerCameraModeTargetingScope_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeTargetingScope_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeTargetingScope_C*>(UAthena_PlayerCameraModeTargetingScope_C::StaticClass()->DefaultObject);

	return Default;
}

}


