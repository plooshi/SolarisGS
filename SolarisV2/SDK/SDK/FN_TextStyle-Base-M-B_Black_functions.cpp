#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-M-B_Black.TextStyle-Base-M-B_Black_C
// (None)

class UClass* UTextStyleMinusBaseMinusMMinusB_Black_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-M-B_Black_C");

	return Clss;
}


// TextStyle-Base-M-B_Black_C TextStyle-Base-M-B_Black.Default__TextStyle-Base-M-B_Black_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusMMinusB_Black_C* UTextStyleMinusBaseMinusMMinusB_Black_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusMMinusB_Black_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusMMinusB_Black_C*>(UTextStyleMinusBaseMinusMMinusB_Black_C::StaticClass()->DefaultObject);

	return Default;
}

}


