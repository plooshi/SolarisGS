#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-S-B-LowOpacity.TextStyle-Base-S-B-LowOpacity_C
// (None)

class UClass* UTextStyleMinusBaseMinusSMinusBMinusLowOpacity_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-S-B-LowOpacity_C");

	return Clss;
}


// TextStyle-Base-S-B-LowOpacity_C TextStyle-Base-S-B-LowOpacity.Default__TextStyle-Base-S-B-LowOpacity_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusSMinusBMinusLowOpacity_C* UTextStyleMinusBaseMinusSMinusBMinusLowOpacity_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusSMinusBMinusLowOpacity_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusSMinusBMinusLowOpacity_C*>(UTextStyleMinusBaseMinusSMinusBMinusLowOpacity_C::StaticClass()->DefaultObject);

	return Default;
}

}


