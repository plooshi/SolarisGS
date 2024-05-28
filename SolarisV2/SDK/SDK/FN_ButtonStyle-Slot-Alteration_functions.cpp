#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Slot-Alteration.ButtonStyle-Slot-Alteration_C
// (None)

class UClass* UButtonStyleMinusSlotMinusAlteration_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Slot-Alteration_C");

	return Clss;
}


// ButtonStyle-Slot-Alteration_C ButtonStyle-Slot-Alteration.Default__ButtonStyle-Slot-Alteration_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusSlotMinusAlteration_C* UButtonStyleMinusSlotMinusAlteration_C::GetDefaultObj()
{
	static class UButtonStyleMinusSlotMinusAlteration_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusSlotMinusAlteration_C*>(UButtonStyleMinusSlotMinusAlteration_C::StaticClass()->DefaultObject);

	return Default;
}

}


