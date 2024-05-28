#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerTrapReloadTimeModCalculation.PlayerTrapReloadTimeModCalculation_C
// (None)

class UClass* UPlayerTrapReloadTimeModCalculation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerTrapReloadTimeModCalculation_C");

	return Clss;
}


// PlayerTrapReloadTimeModCalculation_C PlayerTrapReloadTimeModCalculation.Default__PlayerTrapReloadTimeModCalculation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerTrapReloadTimeModCalculation_C* UPlayerTrapReloadTimeModCalculation_C::GetDefaultObj()
{
	static class UPlayerTrapReloadTimeModCalculation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerTrapReloadTimeModCalculation_C*>(UPlayerTrapReloadTimeModCalculation_C::StaticClass()->DefaultObject);

	return Default;
}

}


