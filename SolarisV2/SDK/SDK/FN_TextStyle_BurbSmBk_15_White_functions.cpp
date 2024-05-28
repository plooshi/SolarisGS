#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle_BurbSmBk_15_White.TextStyle_BurbSmBk_15_White_C
// (None)

class UClass* UTextStyle_BurbSmBk_15_White_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle_BurbSmBk_15_White_C");

	return Clss;
}


// TextStyle_BurbSmBk_15_White_C TextStyle_BurbSmBk_15_White.Default__TextStyle_BurbSmBk_15_White_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyle_BurbSmBk_15_White_C* UTextStyle_BurbSmBk_15_White_C::GetDefaultObj()
{
	static class UTextStyle_BurbSmBk_15_White_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyle_BurbSmBk_15_White_C*>(UTextStyle_BurbSmBk_15_White_C::StaticClass()->DefaultObject);

	return Default;
}

}


