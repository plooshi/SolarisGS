#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-M-B-Yellow.TextStyle-Base-M-B-Yellow_C
// (None)

class UClass* UTextStyleMinusBaseMinusMMinusBMinusYellow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-M-B-Yellow_C");

	return Clss;
}


// TextStyle-Base-M-B-Yellow_C TextStyle-Base-M-B-Yellow.Default__TextStyle-Base-M-B-Yellow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusMMinusBMinusYellow_C* UTextStyleMinusBaseMinusMMinusBMinusYellow_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusMMinusBMinusYellow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusMMinusBMinusYellow_C*>(UTextStyleMinusBaseMinusMMinusBMinusYellow_C::StaticClass()->DefaultObject);

	return Default;
}

}


