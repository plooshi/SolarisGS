#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ItemCardPowerRatingTextStyle_S.ItemCardPowerRatingTextStyle_S_C
// (None)

class UClass* UItemCardPowerRatingTextStyle_S_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemCardPowerRatingTextStyle_S_C");

	return Clss;
}


// ItemCardPowerRatingTextStyle_S_C ItemCardPowerRatingTextStyle_S.Default__ItemCardPowerRatingTextStyle_S_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemCardPowerRatingTextStyle_S_C* UItemCardPowerRatingTextStyle_S_C::GetDefaultObj()
{
	static class UItemCardPowerRatingTextStyle_S_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemCardPowerRatingTextStyle_S_C*>(UItemCardPowerRatingTextStyle_S_C::StaticClass()->DefaultObject);

	return Default;
}

}


