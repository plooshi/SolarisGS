#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-MediumButton.TextStyle-MediumButton_C
// (None)

class UClass* UTextStyleMinusMediumButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-MediumButton_C");

	return Clss;
}


// TextStyle-MediumButton_C TextStyle-MediumButton.Default__TextStyle-MediumButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusMediumButton_C* UTextStyleMinusMediumButton_C::GetDefaultObj()
{
	static class UTextStyleMinusMediumButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusMediumButton_C*>(UTextStyleMinusMediumButton_C::StaticClass()->DefaultObject);

	return Default;
}

}


