#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Highlight.ButtonStyle-Highlight_C
// (None)

class UClass* UButtonStyleMinusHighlight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Highlight_C");

	return Clss;
}


// ButtonStyle-Highlight_C ButtonStyle-Highlight.Default__ButtonStyle-Highlight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusHighlight_C* UButtonStyleMinusHighlight_C::GetDefaultObj()
{
	static class UButtonStyleMinusHighlight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusHighlight_C*>(UButtonStyleMinusHighlight_C::StaticClass()->DefaultObject);

	return Default;
}

}


