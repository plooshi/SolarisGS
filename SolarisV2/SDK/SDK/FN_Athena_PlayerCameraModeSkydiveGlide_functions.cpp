#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeSkydiveGlide.Athena_PlayerCameraModeSkydiveGlide_C
// (None)

class UClass* UAthena_PlayerCameraModeSkydiveGlide_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeSkydiveGlide_C");

	return Clss;
}


// Athena_PlayerCameraModeSkydiveGlide_C Athena_PlayerCameraModeSkydiveGlide.Default__Athena_PlayerCameraModeSkydiveGlide_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeSkydiveGlide_C* UAthena_PlayerCameraModeSkydiveGlide_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeSkydiveGlide_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeSkydiveGlide_C*>(UAthena_PlayerCameraModeSkydiveGlide_C::StaticClass()->DefaultObject);

	return Default;
}

}


