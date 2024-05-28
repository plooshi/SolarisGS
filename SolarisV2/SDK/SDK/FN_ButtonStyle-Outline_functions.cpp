#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Outline.ButtonStyle-Outline_C
// (None)

class UClass* UButtonStyleMinusOutline_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Outline_C");

	return Clss;
}


// ButtonStyle-Outline_C ButtonStyle-Outline.Default__ButtonStyle-Outline_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusOutline_C* UButtonStyleMinusOutline_C::GetDefaultObj()
{
	static class UButtonStyleMinusOutline_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusOutline_C*>(UButtonStyleMinusOutline_C::StaticClass()->DefaultObject);

	return Default;
}

}


