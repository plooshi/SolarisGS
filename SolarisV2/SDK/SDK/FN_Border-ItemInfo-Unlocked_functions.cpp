#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-ItemInfo-Unlocked.Border-ItemInfo-Unlocked_C
// (None)

class UClass* UBorderMinusItemInfoMinusUnlocked_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-ItemInfo-Unlocked_C");

	return Clss;
}


// Border-ItemInfo-Unlocked_C Border-ItemInfo-Unlocked.Default__Border-ItemInfo-Unlocked_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusItemInfoMinusUnlocked_C* UBorderMinusItemInfoMinusUnlocked_C::GetDefaultObj()
{
	static class UBorderMinusItemInfoMinusUnlocked_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusItemInfoMinusUnlocked_C*>(UBorderMinusItemInfoMinusUnlocked_C::StaticClass()->DefaultObject);

	return Default;
}

}


