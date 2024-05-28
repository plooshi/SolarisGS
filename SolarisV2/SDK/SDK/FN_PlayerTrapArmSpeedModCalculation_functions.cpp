#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerTrapArmSpeedModCalculation.PlayerTrapArmSpeedModCalculation_C
// (None)

class UClass* UPlayerTrapArmSpeedModCalculation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerTrapArmSpeedModCalculation_C");

	return Clss;
}


// PlayerTrapArmSpeedModCalculation_C PlayerTrapArmSpeedModCalculation.Default__PlayerTrapArmSpeedModCalculation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerTrapArmSpeedModCalculation_C* UPlayerTrapArmSpeedModCalculation_C::GetDefaultObj()
{
	static class UPlayerTrapArmSpeedModCalculation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerTrapArmSpeedModCalculation_C*>(UPlayerTrapArmSpeedModCalculation_C::StaticClass()->DefaultObject);

	return Default;
}

}


