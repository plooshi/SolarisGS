#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeSniper.Athena_PlayerCameraModeSniper_C
// (None)

class UClass* UAthena_PlayerCameraModeSniper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeSniper_C");

	return Clss;
}


// Athena_PlayerCameraModeSniper_C Athena_PlayerCameraModeSniper.Default__Athena_PlayerCameraModeSniper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeSniper_C* UAthena_PlayerCameraModeSniper_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeSniper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeSniper_C*>(UAthena_PlayerCameraModeSniper_C::StaticClass()->DefaultObject);

	return Default;
}

}


