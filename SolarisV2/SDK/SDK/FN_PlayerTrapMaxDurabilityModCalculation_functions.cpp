#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerTrapMaxDurabilityModCalculation.PlayerTrapMaxDurabilityModCalculation_C
// (None)

class UClass* UPlayerTrapMaxDurabilityModCalculation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerTrapMaxDurabilityModCalculation_C");

	return Clss;
}


// PlayerTrapMaxDurabilityModCalculation_C PlayerTrapMaxDurabilityModCalculation.Default__PlayerTrapMaxDurabilityModCalculation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerTrapMaxDurabilityModCalculation_C* UPlayerTrapMaxDurabilityModCalculation_C::GetDefaultObj()
{
	static class UPlayerTrapMaxDurabilityModCalculation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerTrapMaxDurabilityModCalculation_C*>(UPlayerTrapMaxDurabilityModCalculation_C::StaticClass()->DefaultObject);

	return Default;
}

}


