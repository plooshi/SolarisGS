#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle_BurbSmBk_15_Red.TextStyle_BurbSmBk_15_Red_C
// (None)

class UClass* UTextStyle_BurbSmBk_15_Red_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle_BurbSmBk_15_Red_C");

	return Clss;
}


// TextStyle_BurbSmBk_15_Red_C TextStyle_BurbSmBk_15_Red.Default__TextStyle_BurbSmBk_15_Red_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyle_BurbSmBk_15_Red_C* UTextStyle_BurbSmBk_15_Red_C::GetDefaultObj()
{
	static class UTextStyle_BurbSmBk_15_Red_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyle_BurbSmBk_15_Red_C*>(UTextStyle_BurbSmBk_15_Red_C::StaticClass()->DefaultObject);

	return Default;
}

}


