#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Slot-Gadget-S.ButtonStyle-Slot-Gadget-S_C
// (None)

class UClass* UButtonStyleMinusSlotMinusGadgetMinusS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Slot-Gadget-S_C");

	return Clss;
}


// ButtonStyle-Slot-Gadget-S_C ButtonStyle-Slot-Gadget-S.Default__ButtonStyle-Slot-Gadget-S_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusSlotMinusGadgetMinusS_C* UButtonStyleMinusSlotMinusGadgetMinusS_C::GetDefaultObj()
{
	static class UButtonStyleMinusSlotMinusGadgetMinusS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusSlotMinusGadgetMinusS_C*>(UButtonStyleMinusSlotMinusGadgetMinusS_C::StaticClass()->DefaultObject);

	return Default;
}

}


