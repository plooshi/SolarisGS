#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeInfantry.Athena_PlayerCameraModeInfantry_C
// (None)

class UClass* UAthena_PlayerCameraModeInfantry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeInfantry_C");

	return Clss;
}


// Athena_PlayerCameraModeInfantry_C Athena_PlayerCameraModeInfantry.Default__Athena_PlayerCameraModeInfantry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeInfantry_C* UAthena_PlayerCameraModeInfantry_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeInfantry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeInfantry_C*>(UAthena_PlayerCameraModeInfantry_C::StaticClass()->DefaultObject);

	return Default;
}

}


