#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-XL-BrightBlue.TextStyle-Header-XL-BrightBlue_C
// (None)

class UClass* UTextStyleMinusHeaderMinusXLMinusBrightBlue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-XL-BrightBlue_C");

	return Clss;
}


// TextStyle-Header-XL-BrightBlue_C TextStyle-Header-XL-BrightBlue.Default__TextStyle-Header-XL-BrightBlue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusXLMinusBrightBlue_C* UTextStyleMinusHeaderMinusXLMinusBrightBlue_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusXLMinusBrightBlue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusXLMinusBrightBlue_C*>(UTextStyleMinusHeaderMinusXLMinusBrightBlue_C::StaticClass()->DefaultObject);

	return Default;
}

}


