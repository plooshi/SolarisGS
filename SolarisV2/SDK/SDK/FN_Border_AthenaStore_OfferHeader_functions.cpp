#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_AthenaStore_OfferHeader.Border_AthenaStore_OfferHeader_C
// (None)

class UClass* UBorder_AthenaStore_OfferHeader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_AthenaStore_OfferHeader_C");

	return Clss;
}


// Border_AthenaStore_OfferHeader_C Border_AthenaStore_OfferHeader.Default__Border_AthenaStore_OfferHeader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_AthenaStore_OfferHeader_C* UBorder_AthenaStore_OfferHeader_C::GetDefaultObj()
{
	static class UBorder_AthenaStore_OfferHeader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_AthenaStore_OfferHeader_C*>(UBorder_AthenaStore_OfferHeader_C::StaticClass()->DefaultObject);

	return Default;
}

}


