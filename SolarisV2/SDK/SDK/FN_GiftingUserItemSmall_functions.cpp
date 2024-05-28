#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass GiftingUserItemSmall.GiftingUserItemSmall_C
// (None)

class UClass* UGiftingUserItemSmall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GiftingUserItemSmall_C");

	return Clss;
}


// GiftingUserItemSmall_C GiftingUserItemSmall.Default__GiftingUserItemSmall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGiftingUserItemSmall_C* UGiftingUserItemSmall_C::GetDefaultObj()
{
	static class UGiftingUserItemSmall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGiftingUserItemSmall_C*>(UGiftingUserItemSmall_C::StaticClass()->DefaultObject);

	return Default;
}

}


