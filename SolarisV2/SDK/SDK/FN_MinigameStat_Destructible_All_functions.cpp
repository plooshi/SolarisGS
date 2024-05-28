#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MinigameStat_Destructible_All.MinigameStat_Destructible_All_C
// (None)

class UClass* UMinigameStat_Destructible_All_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MinigameStat_Destructible_All_C");

	return Clss;
}


// MinigameStat_Destructible_All_C MinigameStat_Destructible_All.Default__MinigameStat_Destructible_All_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMinigameStat_Destructible_All_C* UMinigameStat_Destructible_All_C::GetDefaultObj()
{
	static class UMinigameStat_Destructible_All_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMinigameStat_Destructible_All_C*>(UMinigameStat_Destructible_All_C::StaticClass()->DefaultObject);

	return Default;
}

}


