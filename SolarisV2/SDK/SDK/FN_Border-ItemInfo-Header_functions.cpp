#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-ItemInfo-Header.Border-ItemInfo-Header_C
// (None)

class UClass* UBorderMinusItemInfoMinusHeader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-ItemInfo-Header_C");

	return Clss;
}


// Border-ItemInfo-Header_C Border-ItemInfo-Header.Default__Border-ItemInfo-Header_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusItemInfoMinusHeader_C* UBorderMinusItemInfoMinusHeader_C::GetDefaultObj()
{
	static class UBorderMinusItemInfoMinusHeader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusItemInfoMinusHeader_C*>(UBorderMinusItemInfoMinusHeader_C::StaticClass()->DefaultObject);

	return Default;
}

}


