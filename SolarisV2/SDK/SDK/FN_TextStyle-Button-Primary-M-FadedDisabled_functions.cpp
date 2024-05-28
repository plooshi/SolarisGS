#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Button-Primary-M-FadedDisabled.TextStyle-Button-Primary-M-FadedDisabled_C
// (None)

class UClass* UTextStyleMinusButtonMinusPrimaryMinusMMinusFadedDisabled_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Button-Primary-M-FadedDisabled_C");

	return Clss;
}


// TextStyle-Button-Primary-M-FadedDisabled_C TextStyle-Button-Primary-M-FadedDisabled.Default__TextStyle-Button-Primary-M-FadedDisabled_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusButtonMinusPrimaryMinusMMinusFadedDisabled_C* UTextStyleMinusButtonMinusPrimaryMinusMMinusFadedDisabled_C::GetDefaultObj()
{
	static class UTextStyleMinusButtonMinusPrimaryMinusMMinusFadedDisabled_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusButtonMinusPrimaryMinusMMinusFadedDisabled_C*>(UTextStyleMinusButtonMinusPrimaryMinusMMinusFadedDisabled_C::StaticClass()->DefaultObject);

	return Default;
}

}


