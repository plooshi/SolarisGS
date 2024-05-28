#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-ItemInfoHeader.Border-ItemInfoHeader_C
// (None)

class UClass* UBorderMinusItemInfoHeader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-ItemInfoHeader_C");

	return Clss;
}


// Border-ItemInfoHeader_C Border-ItemInfoHeader.Default__Border-ItemInfoHeader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusItemInfoHeader_C* UBorderMinusItemInfoHeader_C::GetDefaultObj()
{
	static class UBorderMinusItemInfoHeader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusItemInfoHeader_C*>(UBorderMinusItemInfoHeader_C::StaticClass()->DefaultObject);

	return Default;
}

}


