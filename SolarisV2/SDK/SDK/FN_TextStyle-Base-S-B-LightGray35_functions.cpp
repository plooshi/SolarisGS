#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-S-B-LightGray35.TextStyle-Base-S-B-LightGray35_C
// (None)

class UClass* UTextStyleMinusBaseMinusSMinusBMinusLightGray35_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-S-B-LightGray35_C");

	return Clss;
}


// TextStyle-Base-S-B-LightGray35_C TextStyle-Base-S-B-LightGray35.Default__TextStyle-Base-S-B-LightGray35_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusSMinusBMinusLightGray35_C* UTextStyleMinusBaseMinusSMinusBMinusLightGray35_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusSMinusBMinusLightGray35_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusSMinusBMinusLightGray35_C*>(UTextStyleMinusBaseMinusSMinusBMinusLightGray35_C::StaticClass()->DefaultObject);

	return Default;
}

}


