#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-M-B.TextStyle-Base-M-B_C
// (None)

class UClass* UTextStyleMinusBaseMinusMMinusB_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-M-B_C");

	return Clss;
}


// TextStyle-Base-M-B_C TextStyle-Base-M-B.Default__TextStyle-Base-M-B_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusMMinusB_C* UTextStyleMinusBaseMinusMMinusB_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusMMinusB_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusMMinusB_C*>(UTextStyleMinusBaseMinusMMinusB_C::StaticClass()->DefaultObject);

	return Default;
}

}


