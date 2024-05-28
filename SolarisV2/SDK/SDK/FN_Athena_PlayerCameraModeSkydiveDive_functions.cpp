#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeSkydiveDive.Athena_PlayerCameraModeSkydiveDive_C
// (None)

class UClass* UAthena_PlayerCameraModeSkydiveDive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeSkydiveDive_C");

	return Clss;
}


// Athena_PlayerCameraModeSkydiveDive_C Athena_PlayerCameraModeSkydiveDive.Default__Athena_PlayerCameraModeSkydiveDive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeSkydiveDive_C* UAthena_PlayerCameraModeSkydiveDive_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeSkydiveDive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeSkydiveDive_C*>(UAthena_PlayerCameraModeSkydiveDive_C::StaticClass()->DefaultObject);

	return Default;
}

}


