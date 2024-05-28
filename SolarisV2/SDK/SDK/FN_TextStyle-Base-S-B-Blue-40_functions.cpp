#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-S-B-Blue-40.TextStyle-Base-S-B-Blue-40_C
// (None)

class UClass* UTextStyleMinusBaseMinusSMinusBMinusBlueMinus40_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-S-B-Blue-40_C");

	return Clss;
}


// TextStyle-Base-S-B-Blue-40_C TextStyle-Base-S-B-Blue-40.Default__TextStyle-Base-S-B-Blue-40_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusSMinusBMinusBlueMinus40_C* UTextStyleMinusBaseMinusSMinusBMinusBlueMinus40_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusSMinusBMinusBlueMinus40_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusSMinusBMinusBlueMinus40_C*>(UTextStyleMinusBaseMinusSMinusBMinusBlueMinus40_C::StaticClass()->DefaultObject);

	return Default;
}

}


