#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Outline-FadedBlue.ButtonStyle-Outline-FadedBlue_C
// (None)

class UClass* UButtonStyleMinusOutlineMinusFadedBlue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Outline-FadedBlue_C");

	return Clss;
}


// ButtonStyle-Outline-FadedBlue_C ButtonStyle-Outline-FadedBlue.Default__ButtonStyle-Outline-FadedBlue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusOutlineMinusFadedBlue_C* UButtonStyleMinusOutlineMinusFadedBlue_C::GetDefaultObj()
{
	static class UButtonStyleMinusOutlineMinusFadedBlue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusOutlineMinusFadedBlue_C*>(UButtonStyleMinusOutlineMinusFadedBlue_C::StaticClass()->DefaultObject);

	return Default;
}

}


