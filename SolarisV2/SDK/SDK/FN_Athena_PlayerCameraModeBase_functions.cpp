#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeBase.Athena_PlayerCameraModeBase_C
// (None)

class UClass* UAthena_PlayerCameraModeBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeBase_C");

	return Clss;
}


// Athena_PlayerCameraModeBase_C Athena_PlayerCameraModeBase.Default__Athena_PlayerCameraModeBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeBase_C* UAthena_PlayerCameraModeBase_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeBase_C*>(UAthena_PlayerCameraModeBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


