#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SupplyDropBalloon_DamageResistances.GE_SupplyDropBalloon_DamageResistances_C
// (None)

class UClass* UGE_SupplyDropBalloon_DamageResistances_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SupplyDropBalloon_DamageResistances_C");

	return Clss;
}


// GE_SupplyDropBalloon_DamageResistances_C GE_SupplyDropBalloon_DamageResistances.Default__GE_SupplyDropBalloon_DamageResistances_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SupplyDropBalloon_DamageResistances_C* UGE_SupplyDropBalloon_DamageResistances_C::GetDefaultObj()
{
	static class UGE_SupplyDropBalloon_DamageResistances_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SupplyDropBalloon_DamageResistances_C*>(UGE_SupplyDropBalloon_DamageResistances_C::StaticClass()->DefaultObject);

	return Default;
}

}


