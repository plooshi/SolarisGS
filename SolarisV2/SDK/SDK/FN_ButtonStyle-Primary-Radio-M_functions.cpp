#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Primary-Radio-M.ButtonStyle-Primary-Radio-M_C
// (None)

class UClass* UButtonStyleMinusPrimaryMinusRadioMinusM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Primary-Radio-M_C");

	return Clss;
}


// ButtonStyle-Primary-Radio-M_C ButtonStyle-Primary-Radio-M.Default__ButtonStyle-Primary-Radio-M_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusPrimaryMinusRadioMinusM_C* UButtonStyleMinusPrimaryMinusRadioMinusM_C::GetDefaultObj()
{
	static class UButtonStyleMinusPrimaryMinusRadioMinusM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusPrimaryMinusRadioMinusM_C*>(UButtonStyleMinusPrimaryMinusRadioMinusM_C::StaticClass()->DefaultObject);

	return Default;
}

}


