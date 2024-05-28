#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-Bottom-Box-Rounded-DkBlue.Border-Bottom-Box-Rounded-DkBlue_C
// (None)

class UClass* UBorderMinusBottomMinusBoxMinusRoundedMinusDkBlue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-Bottom-Box-Rounded-DkBlue_C");

	return Clss;
}


// Border-Bottom-Box-Rounded-DkBlue_C Border-Bottom-Box-Rounded-DkBlue.Default__Border-Bottom-Box-Rounded-DkBlue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusBottomMinusBoxMinusRoundedMinusDkBlue_C* UBorderMinusBottomMinusBoxMinusRoundedMinusDkBlue_C::GetDefaultObj()
{
	static class UBorderMinusBottomMinusBoxMinusRoundedMinusDkBlue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusBottomMinusBoxMinusRoundedMinusDkBlue_C*>(UBorderMinusBottomMinusBoxMinusRoundedMinusDkBlue_C::StaticClass()->DefaultObject);

	return Default;
}

}


