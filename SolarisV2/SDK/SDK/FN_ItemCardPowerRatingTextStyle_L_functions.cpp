#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ItemCardPowerRatingTextStyle_L.ItemCardPowerRatingTextStyle_L_C
// (None)

class UClass* UItemCardPowerRatingTextStyle_L_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemCardPowerRatingTextStyle_L_C");

	return Clss;
}


// ItemCardPowerRatingTextStyle_L_C ItemCardPowerRatingTextStyle_L.Default__ItemCardPowerRatingTextStyle_L_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemCardPowerRatingTextStyle_L_C* UItemCardPowerRatingTextStyle_L_C::GetDefaultObj()
{
	static class UItemCardPowerRatingTextStyle_L_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemCardPowerRatingTextStyle_L_C*>(UItemCardPowerRatingTextStyle_L_C::StaticClass()->DefaultObject);

	return Default;
}

}


