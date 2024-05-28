#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-S-Blue.TextStyle-Base-S-Blue_C
// (None)

class UClass* UTextStyleMinusBaseMinusSMinusBlue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-S-Blue_C");

	return Clss;
}


// TextStyle-Base-S-Blue_C TextStyle-Base-S-Blue.Default__TextStyle-Base-S-Blue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusSMinusBlue_C* UTextStyleMinusBaseMinusSMinusBlue_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusSMinusBlue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusSMinusBlue_C*>(UTextStyleMinusBaseMinusSMinusBlue_C::StaticClass()->DefaultObject);

	return Default;
}

}


