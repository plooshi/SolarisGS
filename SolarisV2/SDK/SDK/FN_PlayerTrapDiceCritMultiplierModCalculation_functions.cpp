#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerTrapDiceCritMultiplierModCalculation.PlayerTrapDiceCritMultiplierModCalculation_C
// (None)

class UClass* UPlayerTrapDiceCritMultiplierModCalculation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerTrapDiceCritMultiplierModCalculation_C");

	return Clss;
}


// PlayerTrapDiceCritMultiplierModCalculation_C PlayerTrapDiceCritMultiplierModCalculation.Default__PlayerTrapDiceCritMultiplierModCalculation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerTrapDiceCritMultiplierModCalculation_C* UPlayerTrapDiceCritMultiplierModCalculation_C::GetDefaultObj()
{
	static class UPlayerTrapDiceCritMultiplierModCalculation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerTrapDiceCritMultiplierModCalculation_C*>(UPlayerTrapDiceCritMultiplierModCalculation_C::StaticClass()->DefaultObject);

	return Default;
}

}


