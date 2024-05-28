#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Com-CounterTip-black1.TextStyle-Com-CounterTip-black1_C
// (None)

class UClass* UTextStyleMinusComMinusCounterTipMinusblack1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Com-CounterTip-black1_C");

	return Clss;
}


// TextStyle-Com-CounterTip-black1_C TextStyle-Com-CounterTip-black1.Default__TextStyle-Com-CounterTip-black1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusComMinusCounterTipMinusblack1_C* UTextStyleMinusComMinusCounterTipMinusblack1_C::GetDefaultObj()
{
	static class UTextStyleMinusComMinusCounterTipMinusblack1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusComMinusCounterTipMinusblack1_C*>(UTextStyleMinusComMinusCounterTipMinusblack1_C::StaticClass()->DefaultObject);

	return Default;
}

}


