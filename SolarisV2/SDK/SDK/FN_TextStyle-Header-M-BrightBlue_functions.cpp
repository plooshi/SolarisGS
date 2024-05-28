#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-M-BrightBlue.TextStyle-Header-M-BrightBlue_C
// (None)

class UClass* UTextStyleMinusHeaderMinusMMinusBrightBlue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-M-BrightBlue_C");

	return Clss;
}


// TextStyle-Header-M-BrightBlue_C TextStyle-Header-M-BrightBlue.Default__TextStyle-Header-M-BrightBlue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusMMinusBrightBlue_C* UTextStyleMinusHeaderMinusMMinusBrightBlue_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusMMinusBrightBlue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusMMinusBrightBlue_C*>(UTextStyleMinusHeaderMinusMMinusBrightBlue_C::StaticClass()->DefaultObject);

	return Default;
}

}


