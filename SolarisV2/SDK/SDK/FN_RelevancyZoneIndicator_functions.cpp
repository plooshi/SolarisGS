#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RelevancyZoneIndicator.RelevancyZoneIndicator_C
// (Actor)

class UClass* ARelevancyZoneIndicator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RelevancyZoneIndicator_C");

	return Clss;
}


// RelevancyZoneIndicator_C RelevancyZoneIndicator.Default__RelevancyZoneIndicator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARelevancyZoneIndicator_C* ARelevancyZoneIndicator_C::GetDefaultObj()
{
	static class ARelevancyZoneIndicator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARelevancyZoneIndicator_C*>(ARelevancyZoneIndicator_C::StaticClass()->DefaultObject);

	return Default;
}

}


