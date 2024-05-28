#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeCarmine.Athena_PlayerCameraModeCarmine_C
// (None)

class UClass* UAthena_PlayerCameraModeCarmine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeCarmine_C");

	return Clss;
}


// Athena_PlayerCameraModeCarmine_C Athena_PlayerCameraModeCarmine.Default__Athena_PlayerCameraModeCarmine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeCarmine_C* UAthena_PlayerCameraModeCarmine_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeCarmine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeCarmine_C*>(UAthena_PlayerCameraModeCarmine_C::StaticClass()->DefaultObject);

	return Default;
}

}


