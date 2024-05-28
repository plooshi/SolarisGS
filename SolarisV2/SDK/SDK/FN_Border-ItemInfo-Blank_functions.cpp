#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-ItemInfo-Blank.Border-ItemInfo-Blank_C
// (None)

class UClass* UBorderMinusItemInfoMinusBlank_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-ItemInfo-Blank_C");

	return Clss;
}


// Border-ItemInfo-Blank_C Border-ItemInfo-Blank.Default__Border-ItemInfo-Blank_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusItemInfoMinusBlank_C* UBorderMinusItemInfoMinusBlank_C::GetDefaultObj()
{
	static class UBorderMinusItemInfoMinusBlank_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusItemInfoMinusBlank_C*>(UBorderMinusItemInfoMinusBlank_C::StaticClass()->DefaultObject);

	return Default;
}

}


