#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeOctopus.Athena_PlayerCameraModeOctopus_C
// (None)

class UClass* UAthena_PlayerCameraModeOctopus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeOctopus_C");

	return Clss;
}


// Athena_PlayerCameraModeOctopus_C Athena_PlayerCameraModeOctopus.Default__Athena_PlayerCameraModeOctopus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeOctopus_C* UAthena_PlayerCameraModeOctopus_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeOctopus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeOctopus_C*>(UAthena_PlayerCameraModeOctopus_C::StaticClass()->DefaultObject);

	return Default;
}

}


