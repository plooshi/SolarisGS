#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-Slot-Empty.Border-Slot-Empty_C
// (None)

class UClass* UBorderMinusSlotMinusEmpty_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-Slot-Empty_C");

	return Clss;
}


// Border-Slot-Empty_C Border-Slot-Empty.Default__Border-Slot-Empty_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusSlotMinusEmpty_C* UBorderMinusSlotMinusEmpty_C::GetDefaultObj()
{
	static class UBorderMinusSlotMinusEmpty_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusSlotMinusEmpty_C*>(UBorderMinusSlotMinusEmpty_C::StaticClass()->DefaultObject);

	return Default;
}

}


