#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MinigameStat_AIKills.MinigameStat_AIKills_C
// (None)

class UClass* UMinigameStat_AIKills_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MinigameStat_AIKills_C");

	return Clss;
}


// MinigameStat_AIKills_C MinigameStat_AIKills.Default__MinigameStat_AIKills_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMinigameStat_AIKills_C* UMinigameStat_AIKills_C::GetDefaultObj()
{
	static class UMinigameStat_AIKills_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMinigameStat_AIKills_C*>(UMinigameStat_AIKills_C::StaticClass()->DefaultObject);

	return Default;
}

}


