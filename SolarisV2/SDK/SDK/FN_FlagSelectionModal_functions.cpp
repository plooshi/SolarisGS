#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FlagSelectionModal.FlagSelectionModal_C
// (None)

class UClass* UFlagSelectionModal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FlagSelectionModal_C");

	return Clss;
}


// FlagSelectionModal_C FlagSelectionModal.Default__FlagSelectionModal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFlagSelectionModal_C* UFlagSelectionModal_C::GetDefaultObj()
{
	static class UFlagSelectionModal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFlagSelectionModal_C*>(UFlagSelectionModal_C::StaticClass()->DefaultObject);

	return Default;
}

}


