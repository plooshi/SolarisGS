#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerTrapDiceCritChanceModCalculation.PlayerTrapDiceCritChanceModCalculation_C
// (None)

class UClass* UPlayerTrapDiceCritChanceModCalculation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerTrapDiceCritChanceModCalculation_C");

	return Clss;
}


// PlayerTrapDiceCritChanceModCalculation_C PlayerTrapDiceCritChanceModCalculation.Default__PlayerTrapDiceCritChanceModCalculation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerTrapDiceCritChanceModCalculation_C* UPlayerTrapDiceCritChanceModCalculation_C::GetDefaultObj()
{
	static class UPlayerTrapDiceCritChanceModCalculation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerTrapDiceCritChanceModCalculation_C*>(UPlayerTrapDiceCritChanceModCalculation_C::StaticClass()->DefaultObject);

	return Default;
}

}


