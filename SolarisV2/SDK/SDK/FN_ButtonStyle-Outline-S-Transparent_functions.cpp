#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Outline-S-Transparent.ButtonStyle-Outline-S-Transparent_C
// (None)

class UClass* UButtonStyleMinusOutlineMinusSMinusTransparent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Outline-S-Transparent_C");

	return Clss;
}


// ButtonStyle-Outline-S-Transparent_C ButtonStyle-Outline-S-Transparent.Default__ButtonStyle-Outline-S-Transparent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusOutlineMinusSMinusTransparent_C* UButtonStyleMinusOutlineMinusSMinusTransparent_C::GetDefaultObj()
{
	static class UButtonStyleMinusOutlineMinusSMinusTransparent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusOutlineMinusSMinusTransparent_C*>(UButtonStyleMinusOutlineMinusSMinusTransparent_C::StaticClass()->DefaultObject);

	return Default;
}

}


