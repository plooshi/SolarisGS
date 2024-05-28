#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-XL-Horizontal-Yellow.TextStyle-Header-XL-Horizontal-Yellow_C
// (None)

class UClass* UTextStyleMinusHeaderMinusXLMinusHorizontalMinusYellow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-XL-Horizontal-Yellow_C");

	return Clss;
}


// TextStyle-Header-XL-Horizontal-Yellow_C TextStyle-Header-XL-Horizontal-Yellow.Default__TextStyle-Header-XL-Horizontal-Yellow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusXLMinusHorizontalMinusYellow_C* UTextStyleMinusHeaderMinusXLMinusHorizontalMinusYellow_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusXLMinusHorizontalMinusYellow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusXLMinusHorizontalMinusYellow_C*>(UTextStyleMinusHeaderMinusXLMinusHorizontalMinusYellow_C::StaticClass()->DefaultObject);

	return Default;
}

}


