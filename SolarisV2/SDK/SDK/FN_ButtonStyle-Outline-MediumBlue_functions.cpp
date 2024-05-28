#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Outline-MediumBlue.ButtonStyle-Outline-MediumBlue_C
// (None)

class UClass* UButtonStyleMinusOutlineMinusMediumBlue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Outline-MediumBlue_C");

	return Clss;
}


// ButtonStyle-Outline-MediumBlue_C ButtonStyle-Outline-MediumBlue.Default__ButtonStyle-Outline-MediumBlue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusOutlineMinusMediumBlue_C* UButtonStyleMinusOutlineMinusMediumBlue_C::GetDefaultObj()
{
	static class UButtonStyleMinusOutlineMinusMediumBlue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusOutlineMinusMediumBlue_C*>(UButtonStyleMinusOutlineMinusMediumBlue_C::StaticClass()->DefaultObject);

	return Default;
}

}


