#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DivisionInfoPayoutEntry.DivisionInfoPayoutEntry_C
// (None)

class UClass* UDivisionInfoPayoutEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DivisionInfoPayoutEntry_C");

	return Clss;
}


// DivisionInfoPayoutEntry_C DivisionInfoPayoutEntry.Default__DivisionInfoPayoutEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDivisionInfoPayoutEntry_C* UDivisionInfoPayoutEntry_C::GetDefaultObj()
{
	static class UDivisionInfoPayoutEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDivisionInfoPayoutEntry_C*>(UDivisionInfoPayoutEntry_C::StaticClass()->DefaultObject);

	return Default;
}

}


