#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MinigameStat_PlayerHealth.MinigameStat_PlayerHealth_C
// (None)

class UClass* UMinigameStat_PlayerHealth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MinigameStat_PlayerHealth_C");

	return Clss;
}


// MinigameStat_PlayerHealth_C MinigameStat_PlayerHealth.Default__MinigameStat_PlayerHealth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMinigameStat_PlayerHealth_C* UMinigameStat_PlayerHealth_C::GetDefaultObj()
{
	static class UMinigameStat_PlayerHealth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMinigameStat_PlayerHealth_C*>(UMinigameStat_PlayerHealth_C::StaticClass()->DefaultObject);

	return Default;
}

}


