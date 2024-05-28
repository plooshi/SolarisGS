#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-TextOnlyBase_EmptyFocus.ButtonStyle-TextOnlyBase_EmptyFocus_C
// (None)

class UClass* UButtonStyleMinusTextOnlyBase_EmptyFocus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-TextOnlyBase_EmptyFocus_C");

	return Clss;
}


// ButtonStyle-TextOnlyBase_EmptyFocus_C ButtonStyle-TextOnlyBase_EmptyFocus.Default__ButtonStyle-TextOnlyBase_EmptyFocus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusTextOnlyBase_EmptyFocus_C* UButtonStyleMinusTextOnlyBase_EmptyFocus_C::GetDefaultObj()
{
	static class UButtonStyleMinusTextOnlyBase_EmptyFocus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusTextOnlyBase_EmptyFocus_C*>(UButtonStyleMinusTextOnlyBase_EmptyFocus_C::StaticClass()->DefaultObject);

	return Default;
}

}


