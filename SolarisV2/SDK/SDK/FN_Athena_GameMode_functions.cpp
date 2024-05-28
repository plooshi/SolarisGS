#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_GameMode.Athena_GameMode_C
// (Actor)

class UClass* AAthena_GameMode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_GameMode_C");

	return Clss;
}


// Athena_GameMode_C Athena_GameMode.Default__Athena_GameMode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAthena_GameMode_C* AAthena_GameMode_C::GetDefaultObj()
{
	static class AAthena_GameMode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAthena_GameMode_C*>(AAthena_GameMode_C::StaticClass()->DefaultObject);

	return Default;
}

}


