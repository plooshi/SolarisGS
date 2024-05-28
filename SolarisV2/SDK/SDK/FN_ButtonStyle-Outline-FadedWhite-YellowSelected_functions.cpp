#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Outline-FadedWhite-YellowSelected.ButtonStyle-Outline-FadedWhite-YellowSelected_C
// (None)

class UClass* UButtonStyleMinusOutlineMinusFadedWhiteMinusYellowSelected_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Outline-FadedWhite-YellowSelected_C");

	return Clss;
}


// ButtonStyle-Outline-FadedWhite-YellowSelected_C ButtonStyle-Outline-FadedWhite-YellowSelected.Default__ButtonStyle-Outline-FadedWhite-YellowSelected_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusOutlineMinusFadedWhiteMinusYellowSelected_C* UButtonStyleMinusOutlineMinusFadedWhiteMinusYellowSelected_C::GetDefaultObj()
{
	static class UButtonStyleMinusOutlineMinusFadedWhiteMinusYellowSelected_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusOutlineMinusFadedWhiteMinusYellowSelected_C*>(UButtonStyleMinusOutlineMinusFadedWhiteMinusYellowSelected_C::StaticClass()->DefaultObject);

	return Default;
}

}


