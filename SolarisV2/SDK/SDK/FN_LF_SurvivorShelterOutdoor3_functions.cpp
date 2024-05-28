#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LF_SurvivorShelterOutdoor3.LF_SurvivorShelterOutdoor3_C
// (Actor)

class UClass* ALF_SurvivorShelterOutdoor3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LF_SurvivorShelterOutdoor3_C");

	return Clss;
}


// LF_SurvivorShelterOutdoor3_C LF_SurvivorShelterOutdoor3.Default__LF_SurvivorShelterOutdoor3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALF_SurvivorShelterOutdoor3_C* ALF_SurvivorShelterOutdoor3_C::GetDefaultObj()
{
	static class ALF_SurvivorShelterOutdoor3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALF_SurvivorShelterOutdoor3_C*>(ALF_SurvivorShelterOutdoor3_C::StaticClass()->DefaultObject);

	return Default;
}

}


