#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-MediumTransparentWithCues.ButtonStyle-MediumTransparentWithCues_C
// (None)

class UClass* UButtonStyleMinusMediumTransparentWithCues_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-MediumTransparentWithCues_C");

	return Clss;
}


// ButtonStyle-MediumTransparentWithCues_C ButtonStyle-MediumTransparentWithCues.Default__ButtonStyle-MediumTransparentWithCues_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusMediumTransparentWithCues_C* UButtonStyleMinusMediumTransparentWithCues_C::GetDefaultObj()
{
	static class UButtonStyleMinusMediumTransparentWithCues_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusMediumTransparentWithCues_C*>(UButtonStyleMinusMediumTransparentWithCues_C::StaticClass()->DefaultObject);

	return Default;
}

}


