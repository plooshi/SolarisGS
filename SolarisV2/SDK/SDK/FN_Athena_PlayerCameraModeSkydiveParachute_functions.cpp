#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeSkydiveParachute.Athena_PlayerCameraModeSkydiveParachute_C
// (None)

class UClass* UAthena_PlayerCameraModeSkydiveParachute_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeSkydiveParachute_C");

	return Clss;
}


// Athena_PlayerCameraModeSkydiveParachute_C Athena_PlayerCameraModeSkydiveParachute.Default__Athena_PlayerCameraModeSkydiveParachute_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeSkydiveParachute_C* UAthena_PlayerCameraModeSkydiveParachute_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeSkydiveParachute_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeSkydiveParachute_C*>(UAthena_PlayerCameraModeSkydiveParachute_C::StaticClass()->DefaultObject);

	return Default;
}

}


