#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SetBonus_RangedDamage_Low.SetBonus_RangedDamage_Low_C
// (None)

class UClass* USetBonus_RangedDamage_Low_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SetBonus_RangedDamage_Low_C");

	return Clss;
}


// SetBonus_RangedDamage_Low_C SetBonus_RangedDamage_Low.Default__SetBonus_RangedDamage_Low_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USetBonus_RangedDamage_Low_C* USetBonus_RangedDamage_Low_C::GetDefaultObj()
{
	static class USetBonus_RangedDamage_Low_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USetBonus_RangedDamage_Low_C*>(USetBonus_RangedDamage_Low_C::StaticClass()->DefaultObject);

	return Default;
}

}


