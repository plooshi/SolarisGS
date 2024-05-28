#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-SolidBG-DkBlue.Border-SolidBG-DkBlue_C
// (None)

class UClass* UBorderMinusSolidBGMinusDkBlue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-SolidBG-DkBlue_C");

	return Clss;
}


// Border-SolidBG-DkBlue_C Border-SolidBG-DkBlue.Default__Border-SolidBG-DkBlue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusSolidBGMinusDkBlue_C* UBorderMinusSolidBGMinusDkBlue_C::GetDefaultObj()
{
	static class UBorderMinusSolidBGMinusDkBlue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusSolidBGMinusDkBlue_C*>(UBorderMinusSolidBGMinusDkBlue_C::StaticClass()->DefaultObject);

	return Default;
}

}


