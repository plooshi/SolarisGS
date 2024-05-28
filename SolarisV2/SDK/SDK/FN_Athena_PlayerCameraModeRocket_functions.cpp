#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeRocket.Athena_PlayerCameraModeRocket_C
// (None)

class UClass* UAthena_PlayerCameraModeRocket_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeRocket_C");

	return Clss;
}


// Athena_PlayerCameraModeRocket_C Athena_PlayerCameraModeRocket.Default__Athena_PlayerCameraModeRocket_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeRocket_C* UAthena_PlayerCameraModeRocket_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeRocket_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeRocket_C*>(UAthena_PlayerCameraModeRocket_C::StaticClass()->DefaultObject);

	return Default;
}

}


