#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-M-B_Blue.TextStyle-Base-M-B_Blue_C
// (None)

class UClass* UTextStyleMinusBaseMinusMMinusB_Blue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-M-B_Blue_C");

	return Clss;
}


// TextStyle-Base-M-B_Blue_C TextStyle-Base-M-B_Blue.Default__TextStyle-Base-M-B_Blue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusMMinusB_Blue_C* UTextStyleMinusBaseMinusMMinusB_Blue_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusMMinusB_Blue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusMMinusB_Blue_C*>(UTextStyleMinusBaseMinusMMinusB_Blue_C::StaticClass()->DefaultObject);

	return Default;
}

}


