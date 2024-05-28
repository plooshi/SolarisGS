#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-XL-BrightYellow.TextStyle-Header-XL-BrightYellow_C
// (None)

class UClass* UTextStyleMinusHeaderMinusXLMinusBrightYellow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-XL-BrightYellow_C");

	return Clss;
}


// TextStyle-Header-XL-BrightYellow_C TextStyle-Header-XL-BrightYellow.Default__TextStyle-Header-XL-BrightYellow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusXLMinusBrightYellow_C* UTextStyleMinusHeaderMinusXLMinusBrightYellow_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusXLMinusBrightYellow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusXLMinusBrightYellow_C*>(UTextStyleMinusHeaderMinusXLMinusBrightYellow_C::StaticClass()->DefaultObject);

	return Default;
}

}


