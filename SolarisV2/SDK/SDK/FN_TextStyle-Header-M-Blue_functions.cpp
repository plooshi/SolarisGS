#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-M-Blue.TextStyle-Header-M-Blue_C
// (None)

class UClass* UTextStyleMinusHeaderMinusMMinusBlue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-M-Blue_C");

	return Clss;
}


// TextStyle-Header-M-Blue_C TextStyle-Header-M-Blue.Default__TextStyle-Header-M-Blue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusMMinusBlue_C* UTextStyleMinusHeaderMinusMMinusBlue_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusMMinusBlue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusMMinusBlue_C*>(UTextStyleMinusHeaderMinusMMinusBlue_C::StaticClass()->DefaultObject);

	return Default;
}

}


