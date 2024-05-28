#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MinigameStat_PlayerAssists.MinigameStat_PlayerAssists_C
// (None)

class UClass* UMinigameStat_PlayerAssists_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MinigameStat_PlayerAssists_C");

	return Clss;
}


// MinigameStat_PlayerAssists_C MinigameStat_PlayerAssists.Default__MinigameStat_PlayerAssists_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMinigameStat_PlayerAssists_C* UMinigameStat_PlayerAssists_C::GetDefaultObj()
{
	static class UMinigameStat_PlayerAssists_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMinigameStat_PlayerAssists_C*>(UMinigameStat_PlayerAssists_C::StaticClass()->DefaultObject);

	return Default;
}

}


