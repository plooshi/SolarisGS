#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-ItemInfo-Blank-DkBlue.Border-ItemInfo-Blank-DkBlue_C
// (None)

class UClass* UBorderMinusItemInfoMinusBlankMinusDkBlue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-ItemInfo-Blank-DkBlue_C");

	return Clss;
}


// Border-ItemInfo-Blank-DkBlue_C Border-ItemInfo-Blank-DkBlue.Default__Border-ItemInfo-Blank-DkBlue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusItemInfoMinusBlankMinusDkBlue_C* UBorderMinusItemInfoMinusBlankMinusDkBlue_C::GetDefaultObj()
{
	static class UBorderMinusItemInfoMinusBlankMinusDkBlue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusItemInfoMinusBlankMinusDkBlue_C*>(UBorderMinusItemInfoMinusBlankMinusDkBlue_C::StaticClass()->DefaultObject);

	return Default;
}

}


