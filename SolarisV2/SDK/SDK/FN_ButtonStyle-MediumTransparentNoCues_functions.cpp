#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-MediumTransparentNoCues.ButtonStyle-MediumTransparentNoCues_C
// (None)

class UClass* UButtonStyleMinusMediumTransparentNoCues_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-MediumTransparentNoCues_C");

	return Clss;
}


// ButtonStyle-MediumTransparentNoCues_C ButtonStyle-MediumTransparentNoCues.Default__ButtonStyle-MediumTransparentNoCues_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusMediumTransparentNoCues_C* UButtonStyleMinusMediumTransparentNoCues_C::GetDefaultObj()
{
	static class UButtonStyleMinusMediumTransparentNoCues_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusMediumTransparentNoCues_C*>(UButtonStyleMinusMediumTransparentNoCues_C::StaticClass()->DefaultObject);

	return Default;
}

}


