#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_OutsideSafeZoneDamage.GE_OutsideSafeZoneDamage_C
// (None)

class UClass* UGE_OutsideSafeZoneDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_OutsideSafeZoneDamage_C");

	return Clss;
}


// GE_OutsideSafeZoneDamage_C GE_OutsideSafeZoneDamage.Default__GE_OutsideSafeZoneDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_OutsideSafeZoneDamage_C* UGE_OutsideSafeZoneDamage_C::GetDefaultObj()
{
	static class UGE_OutsideSafeZoneDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_OutsideSafeZoneDamage_C*>(UGE_OutsideSafeZoneDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


