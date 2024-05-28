#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerTrapHealingSourceModCalculation.PlayerTrapHealingSourceModCalculation_C
// (None)

class UClass* UPlayerTrapHealingSourceModCalculation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerTrapHealingSourceModCalculation_C");

	return Clss;
}


// PlayerTrapHealingSourceModCalculation_C PlayerTrapHealingSourceModCalculation.Default__PlayerTrapHealingSourceModCalculation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerTrapHealingSourceModCalculation_C* UPlayerTrapHealingSourceModCalculation_C::GetDefaultObj()
{
	static class UPlayerTrapHealingSourceModCalculation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerTrapHealingSourceModCalculation_C*>(UPlayerTrapHealingSourceModCalculation_C::StaticClass()->DefaultObject);

	return Default;
}

}


