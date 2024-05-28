#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerTrapBaseDamageModCalculation.PlayerTrapBaseDamageModCalculation_C
// (None)

class UClass* UPlayerTrapBaseDamageModCalculation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerTrapBaseDamageModCalculation_C");

	return Clss;
}


// PlayerTrapBaseDamageModCalculation_C PlayerTrapBaseDamageModCalculation.Default__PlayerTrapBaseDamageModCalculation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerTrapBaseDamageModCalculation_C* UPlayerTrapBaseDamageModCalculation_C::GetDefaultObj()
{
	static class UPlayerTrapBaseDamageModCalculation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerTrapBaseDamageModCalculation_C*>(UPlayerTrapBaseDamageModCalculation_C::StaticClass()->DefaultObject);

	return Default;
}

}


