#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Outline-FadedWhite.ButtonStyle-Outline-FadedWhite_C
// (None)

class UClass* UButtonStyleMinusOutlineMinusFadedWhite_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Outline-FadedWhite_C");

	return Clss;
}


// ButtonStyle-Outline-FadedWhite_C ButtonStyle-Outline-FadedWhite.Default__ButtonStyle-Outline-FadedWhite_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusOutlineMinusFadedWhite_C* UButtonStyleMinusOutlineMinusFadedWhite_C::GetDefaultObj()
{
	static class UButtonStyleMinusOutlineMinusFadedWhite_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusOutlineMinusFadedWhite_C*>(UButtonStyleMinusOutlineMinusFadedWhite_C::StaticClass()->DefaultObject);

	return Default;
}

}


