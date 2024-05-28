#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-M-Horizon-Blue.TextStyle-Header-M-Horizon-Blue_C
// (None)

class UClass* UTextStyleMinusHeaderMinusMMinusHorizonMinusBlue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-M-Horizon-Blue_C");

	return Clss;
}


// TextStyle-Header-M-Horizon-Blue_C TextStyle-Header-M-Horizon-Blue.Default__TextStyle-Header-M-Horizon-Blue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusMMinusHorizonMinusBlue_C* UTextStyleMinusHeaderMinusMMinusHorizonMinusBlue_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusMMinusHorizonMinusBlue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusMMinusHorizonMinusBlue_C*>(UTextStyleMinusHeaderMinusMMinusHorizonMinusBlue_C::StaticClass()->DefaultObject);

	return Default;
}

}


