#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MinigameStat_LapTime.MinigameStat_LapTime_C
// (None)

class UClass* UMinigameStat_LapTime_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MinigameStat_LapTime_C");

	return Clss;
}


// MinigameStat_LapTime_C MinigameStat_LapTime.Default__MinigameStat_LapTime_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMinigameStat_LapTime_C* UMinigameStat_LapTime_C::GetDefaultObj()
{
	static class UMinigameStat_LapTime_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMinigameStat_LapTime_C*>(UMinigameStat_LapTime_C::StaticClass()->DefaultObject);

	return Default;
}

}


