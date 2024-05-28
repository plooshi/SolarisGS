#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MinigameStat_Score.MinigameStat_Score_C
// (None)

class UClass* UMinigameStat_Score_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MinigameStat_Score_C");

	return Clss;
}


// MinigameStat_Score_C MinigameStat_Score.Default__MinigameStat_Score_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMinigameStat_Score_C* UMinigameStat_Score_C::GetDefaultObj()
{
	static class UMinigameStat_Score_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMinigameStat_Score_C*>(UMinigameStat_Score_C::StaticClass()->DefaultObject);

	return Default;
}

}


