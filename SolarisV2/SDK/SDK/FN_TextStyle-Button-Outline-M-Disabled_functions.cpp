#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Button-Outline-M-Disabled.TextStyle-Button-Outline-M-Disabled_C
// (None)

class UClass* UTextStyleMinusButtonMinusOutlineMinusMMinusDisabled_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Button-Outline-M-Disabled_C");

	return Clss;
}


// TextStyle-Button-Outline-M-Disabled_C TextStyle-Button-Outline-M-Disabled.Default__TextStyle-Button-Outline-M-Disabled_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusButtonMinusOutlineMinusMMinusDisabled_C* UTextStyleMinusButtonMinusOutlineMinusMMinusDisabled_C::GetDefaultObj()
{
	static class UTextStyleMinusButtonMinusOutlineMinusMMinusDisabled_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusButtonMinusOutlineMinusMMinusDisabled_C*>(UTextStyleMinusButtonMinusOutlineMinusMMinusDisabled_C::StaticClass()->DefaultObject);

	return Default;
}

}


