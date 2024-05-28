#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SetBonus_AbilityDamage_Low.SetBonus_AbilityDamage_Low_C
// (None)

class UClass* USetBonus_AbilityDamage_Low_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SetBonus_AbilityDamage_Low_C");

	return Clss;
}


// SetBonus_AbilityDamage_Low_C SetBonus_AbilityDamage_Low.Default__SetBonus_AbilityDamage_Low_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USetBonus_AbilityDamage_Low_C* USetBonus_AbilityDamage_Low_C::GetDefaultObj()
{
	static class USetBonus_AbilityDamage_Low_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USetBonus_AbilityDamage_Low_C*>(USetBonus_AbilityDamage_Low_C::StaticClass()->DefaultObject);

	return Default;
}

}


