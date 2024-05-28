#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeRanged.Athena_PlayerCameraModeRanged_C
// (None)

class UClass* UAthena_PlayerCameraModeRanged_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeRanged_C");

	return Clss;
}


// Athena_PlayerCameraModeRanged_C Athena_PlayerCameraModeRanged.Default__Athena_PlayerCameraModeRanged_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeRanged_C* UAthena_PlayerCameraModeRanged_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeRanged_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeRanged_C*>(UAthena_PlayerCameraModeRanged_C::StaticClass()->DefaultObject);

	return Default;
}

}


