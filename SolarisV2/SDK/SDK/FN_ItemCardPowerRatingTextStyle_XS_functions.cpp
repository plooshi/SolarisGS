#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ItemCardPowerRatingTextStyle_XS.ItemCardPowerRatingTextStyle_XS_C
// (None)

class UClass* UItemCardPowerRatingTextStyle_XS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemCardPowerRatingTextStyle_XS_C");

	return Clss;
}


// ItemCardPowerRatingTextStyle_XS_C ItemCardPowerRatingTextStyle_XS.Default__ItemCardPowerRatingTextStyle_XS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemCardPowerRatingTextStyle_XS_C* UItemCardPowerRatingTextStyle_XS_C::GetDefaultObj()
{
	static class UItemCardPowerRatingTextStyle_XS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemCardPowerRatingTextStyle_XS_C*>(UItemCardPowerRatingTextStyle_XS_C::StaticClass()->DefaultObject);

	return Default;
}

}


