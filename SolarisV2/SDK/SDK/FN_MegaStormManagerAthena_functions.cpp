#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MegaStormManagerAthena.MegaStormManagerAthena_C
// (Actor)

class UClass* AMegaStormManagerAthena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MegaStormManagerAthena_C");

	return Clss;
}


// MegaStormManagerAthena_C MegaStormManagerAthena.Default__MegaStormManagerAthena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMegaStormManagerAthena_C* AMegaStormManagerAthena_C::GetDefaultObj()
{
	static class AMegaStormManagerAthena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMegaStormManagerAthena_C*>(AMegaStormManagerAthena_C::StaticClass()->DefaultObject);

	return Default;
}

}


