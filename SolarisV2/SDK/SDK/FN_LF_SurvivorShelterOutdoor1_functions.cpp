#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LF_SurvivorShelterOutdoor1.LF_SurvivorShelterOutdoor1_C
// (Actor)

class UClass* ALF_SurvivorShelterOutdoor1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LF_SurvivorShelterOutdoor1_C");

	return Clss;
}


// LF_SurvivorShelterOutdoor1_C LF_SurvivorShelterOutdoor1.Default__LF_SurvivorShelterOutdoor1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALF_SurvivorShelterOutdoor1_C* ALF_SurvivorShelterOutdoor1_C::GetDefaultObj()
{
	static class ALF_SurvivorShelterOutdoor1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALF_SurvivorShelterOutdoor1_C*>(ALF_SurvivorShelterOutdoor1_C::StaticClass()->DefaultObject);

	return Default;
}

}


