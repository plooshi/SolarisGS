#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-M-NavyBlue.TextStyle-Header-M-NavyBlue_C
// (None)

class UClass* UTextStyleMinusHeaderMinusMMinusNavyBlue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-M-NavyBlue_C");

	return Clss;
}


// TextStyle-Header-M-NavyBlue_C TextStyle-Header-M-NavyBlue.Default__TextStyle-Header-M-NavyBlue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusMMinusNavyBlue_C* UTextStyleMinusHeaderMinusMMinusNavyBlue_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusMMinusNavyBlue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusMMinusNavyBlue_C*>(UTextStyleMinusHeaderMinusMMinusNavyBlue_C::StaticClass()->DefaultObject);

	return Default;
}

}


