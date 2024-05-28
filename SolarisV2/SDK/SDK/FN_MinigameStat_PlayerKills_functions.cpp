#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MinigameStat_PlayerKills.MinigameStat_PlayerKills_C
// (None)

class UClass* UMinigameStat_PlayerKills_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MinigameStat_PlayerKills_C");

	return Clss;
}


// MinigameStat_PlayerKills_C MinigameStat_PlayerKills.Default__MinigameStat_PlayerKills_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMinigameStat_PlayerKills_C* UMinigameStat_PlayerKills_C::GetDefaultObj()
{
	static class UMinigameStat_PlayerKills_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMinigameStat_PlayerKills_C*>(UMinigameStat_PlayerKills_C::StaticClass()->DefaultObject);

	return Default;
}

}


