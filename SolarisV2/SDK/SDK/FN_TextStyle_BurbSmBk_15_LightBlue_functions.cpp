#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle_BurbSmBk_15_LightBlue.TextStyle_BurbSmBk_15_LightBlue_C
// (None)

class UClass* UTextStyle_BurbSmBk_15_LightBlue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle_BurbSmBk_15_LightBlue_C");

	return Clss;
}


// TextStyle_BurbSmBk_15_LightBlue_C TextStyle_BurbSmBk_15_LightBlue.Default__TextStyle_BurbSmBk_15_LightBlue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyle_BurbSmBk_15_LightBlue_C* UTextStyle_BurbSmBk_15_LightBlue_C::GetDefaultObj()
{
	static class UTextStyle_BurbSmBk_15_LightBlue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyle_BurbSmBk_15_LightBlue_C*>(UTextStyle_BurbSmBk_15_LightBlue_C::StaticClass()->DefaultObject);

	return Default;
}

}


