#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Outline-Header-FadedWhite.ButtonStyle-Outline-Header-FadedWhite_C
// (None)

class UClass* UButtonStyleMinusOutlineMinusHeaderMinusFadedWhite_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Outline-Header-FadedWhite_C");

	return Clss;
}


// ButtonStyle-Outline-Header-FadedWhite_C ButtonStyle-Outline-Header-FadedWhite.Default__ButtonStyle-Outline-Header-FadedWhite_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusOutlineMinusHeaderMinusFadedWhite_C* UButtonStyleMinusOutlineMinusHeaderMinusFadedWhite_C::GetDefaultObj()
{
	static class UButtonStyleMinusOutlineMinusHeaderMinusFadedWhite_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusOutlineMinusHeaderMinusFadedWhite_C*>(UButtonStyleMinusOutlineMinusHeaderMinusFadedWhite_C::StaticClass()->DefaultObject);

	return Default;
}

}


