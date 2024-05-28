#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-MediumTransparentWithCuesShadow.ButtonStyle-MediumTransparentWithCuesShadow_C
// (None)

class UClass* UButtonStyleMinusMediumTransparentWithCuesShadow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-MediumTransparentWithCuesShadow_C");

	return Clss;
}


// ButtonStyle-MediumTransparentWithCuesShadow_C ButtonStyle-MediumTransparentWithCuesShadow.Default__ButtonStyle-MediumTransparentWithCuesShadow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusMediumTransparentWithCuesShadow_C* UButtonStyleMinusMediumTransparentWithCuesShadow_C::GetDefaultObj()
{
	static class UButtonStyleMinusMediumTransparentWithCuesShadow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusMediumTransparentWithCuesShadow_C*>(UButtonStyleMinusMediumTransparentWithCuesShadow_C::StaticClass()->DefaultObject);

	return Default;
}

}


