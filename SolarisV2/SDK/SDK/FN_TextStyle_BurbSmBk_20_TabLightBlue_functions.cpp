#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle_BurbSmBk_20_TabLightBlue.TextStyle_BurbSmBk_20_TabLightBlue_C
// (None)

class UClass* UTextStyle_BurbSmBk_20_TabLightBlue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle_BurbSmBk_20_TabLightBlue_C");

	return Clss;
}


// TextStyle_BurbSmBk_20_TabLightBlue_C TextStyle_BurbSmBk_20_TabLightBlue.Default__TextStyle_BurbSmBk_20_TabLightBlue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyle_BurbSmBk_20_TabLightBlue_C* UTextStyle_BurbSmBk_20_TabLightBlue_C::GetDefaultObj()
{
	static class UTextStyle_BurbSmBk_20_TabLightBlue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyle_BurbSmBk_20_TabLightBlue_C*>(UTextStyle_BurbSmBk_20_TabLightBlue_C::StaticClass()->DefaultObject);

	return Default;
}

}


