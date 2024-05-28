#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ItemCardPowerRatingTextStyle_M.ItemCardPowerRatingTextStyle_M_C
// (None)

class UClass* UItemCardPowerRatingTextStyle_M_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemCardPowerRatingTextStyle_M_C");

	return Clss;
}


// ItemCardPowerRatingTextStyle_M_C ItemCardPowerRatingTextStyle_M.Default__ItemCardPowerRatingTextStyle_M_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemCardPowerRatingTextStyle_M_C* UItemCardPowerRatingTextStyle_M_C::GetDefaultObj()
{
	static class UItemCardPowerRatingTextStyle_M_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemCardPowerRatingTextStyle_M_C*>(UItemCardPowerRatingTextStyle_M_C::StaticClass()->DefaultObject);

	return Default;
}

}


