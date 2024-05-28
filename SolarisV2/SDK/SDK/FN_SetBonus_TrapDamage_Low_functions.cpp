#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SetBonus_TrapDamage_Low.SetBonus_TrapDamage_Low_C
// (None)

class UClass* USetBonus_TrapDamage_Low_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SetBonus_TrapDamage_Low_C");

	return Clss;
}


// SetBonus_TrapDamage_Low_C SetBonus_TrapDamage_Low.Default__SetBonus_TrapDamage_Low_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USetBonus_TrapDamage_Low_C* USetBonus_TrapDamage_Low_C::GetDefaultObj()
{
	static class USetBonus_TrapDamage_Low_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USetBonus_TrapDamage_Low_C*>(USetBonus_TrapDamage_Low_C::StaticClass()->DefaultObject);

	return Default;
}

}


