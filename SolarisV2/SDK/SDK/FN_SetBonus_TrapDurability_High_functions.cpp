#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SetBonus_TrapDurability_High.SetBonus_TrapDurability_High_C
// (None)

class UClass* USetBonus_TrapDurability_High_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SetBonus_TrapDurability_High_C");

	return Clss;
}


// SetBonus_TrapDurability_High_C SetBonus_TrapDurability_High.Default__SetBonus_TrapDurability_High_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USetBonus_TrapDurability_High_C* USetBonus_TrapDurability_High_C::GetDefaultObj()
{
	static class USetBonus_TrapDurability_High_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USetBonus_TrapDurability_High_C*>(USetBonus_TrapDurability_High_C::StaticClass()->DefaultObject);

	return Default;
}

}


