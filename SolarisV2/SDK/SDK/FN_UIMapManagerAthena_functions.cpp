#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UIMapManagerAthena.UIMapManagerAthena_C
// (Actor)

class UClass* AUIMapManagerAthena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIMapManagerAthena_C");

	return Clss;
}


// UIMapManagerAthena_C UIMapManagerAthena.Default__UIMapManagerAthena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AUIMapManagerAthena_C* AUIMapManagerAthena_C::GetDefaultObj()
{
	static class AUIMapManagerAthena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AUIMapManagerAthena_C*>(AUIMapManagerAthena_C::StaticClass()->DefaultObject);

	return Default;
}

}


