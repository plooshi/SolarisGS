#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-ItemInfo-Locked.Border-ItemInfo-Locked_C
// (None)

class UClass* UBorderMinusItemInfoMinusLocked_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-ItemInfo-Locked_C");

	return Clss;
}


// Border-ItemInfo-Locked_C Border-ItemInfo-Locked.Default__Border-ItemInfo-Locked_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusItemInfoMinusLocked_C* UBorderMinusItemInfoMinusLocked_C::GetDefaultObj()
{
	static class UBorderMinusItemInfoMinusLocked_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusItemInfoMinusLocked_C*>(UBorderMinusItemInfoMinusLocked_C::StaticClass()->DefaultObject);

	return Default;
}

}


