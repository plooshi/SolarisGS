#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_AthenaStore_OfferHeaderBacking.Border_AthenaStore_OfferHeaderBacking_C
// (None)

class UClass* UBorder_AthenaStore_OfferHeaderBacking_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_AthenaStore_OfferHeaderBacking_C");

	return Clss;
}


// Border_AthenaStore_OfferHeaderBacking_C Border_AthenaStore_OfferHeaderBacking.Default__Border_AthenaStore_OfferHeaderBacking_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_AthenaStore_OfferHeaderBacking_C* UBorder_AthenaStore_OfferHeaderBacking_C::GetDefaultObj()
{
	static class UBorder_AthenaStore_OfferHeaderBacking_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_AthenaStore_OfferHeaderBacking_C*>(UBorder_AthenaStore_OfferHeaderBacking_C::StaticClass()->DefaultObject);

	return Default;
}

}


