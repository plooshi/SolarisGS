#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-ItemInfoHeader_BrightBar.Border-ItemInfoHeader_BrightBar_C
// (None)

class UClass* UBorderMinusItemInfoHeader_BrightBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-ItemInfoHeader_BrightBar_C");

	return Clss;
}


// Border-ItemInfoHeader_BrightBar_C Border-ItemInfoHeader_BrightBar.Default__Border-ItemInfoHeader_BrightBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusItemInfoHeader_BrightBar_C* UBorderMinusItemInfoHeader_BrightBar_C::GetDefaultObj()
{
	static class UBorderMinusItemInfoHeader_BrightBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusItemInfoHeader_BrightBar_C*>(UBorderMinusItemInfoHeader_BrightBar_C::StaticClass()->DefaultObject);

	return Default;
}

}


