#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LF_SurvivorShelterIndoor.LF_SurvivorShelterIndoor_C
// (Actor)

class UClass* ALF_SurvivorShelterIndoor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LF_SurvivorShelterIndoor_C");

	return Clss;
}


// LF_SurvivorShelterIndoor_C LF_SurvivorShelterIndoor.Default__LF_SurvivorShelterIndoor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALF_SurvivorShelterIndoor_C* ALF_SurvivorShelterIndoor_C::GetDefaultObj()
{
	static class ALF_SurvivorShelterIndoor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALF_SurvivorShelterIndoor_C*>(ALF_SurvivorShelterIndoor_C::StaticClass()->DefaultObject);

	return Default;
}

}


