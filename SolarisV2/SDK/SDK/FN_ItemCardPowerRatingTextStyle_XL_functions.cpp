#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ItemCardPowerRatingTextStyle_XL.ItemCardPowerRatingTextStyle_XL_C
// (None)

class UClass* UItemCardPowerRatingTextStyle_XL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemCardPowerRatingTextStyle_XL_C");

	return Clss;
}


// ItemCardPowerRatingTextStyle_XL_C ItemCardPowerRatingTextStyle_XL.Default__ItemCardPowerRatingTextStyle_XL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemCardPowerRatingTextStyle_XL_C* UItemCardPowerRatingTextStyle_XL_C::GetDefaultObj()
{
	static class UItemCardPowerRatingTextStyle_XL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemCardPowerRatingTextStyle_XL_C*>(UItemCardPowerRatingTextStyle_XL_C::StaticClass()->DefaultObject);

	return Default;
}

}


