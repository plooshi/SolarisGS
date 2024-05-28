#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-S-B-Blue.TextStyle-Base-S-B-Blue_C
// (None)

class UClass* UTextStyleMinusBaseMinusSMinusBMinusBlue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-S-B-Blue_C");

	return Clss;
}


// TextStyle-Base-S-B-Blue_C TextStyle-Base-S-B-Blue.Default__TextStyle-Base-S-B-Blue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusSMinusBMinusBlue_C* UTextStyleMinusBaseMinusSMinusBMinusBlue_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusSMinusBMinusBlue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusSMinusBMinusBlue_C*>(UTextStyleMinusBaseMinusSMinusBMinusBlue_C::StaticClass()->DefaultObject);

	return Default;
}

}


