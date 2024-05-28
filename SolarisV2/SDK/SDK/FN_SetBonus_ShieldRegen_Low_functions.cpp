#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SetBonus_ShieldRegen_Low.SetBonus_ShieldRegen_Low_C
// (None)

class UClass* USetBonus_ShieldRegen_Low_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SetBonus_ShieldRegen_Low_C");

	return Clss;
}


// SetBonus_ShieldRegen_Low_C SetBonus_ShieldRegen_Low.Default__SetBonus_ShieldRegen_Low_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USetBonus_ShieldRegen_Low_C* USetBonus_ShieldRegen_Low_C::GetDefaultObj()
{
	static class USetBonus_ShieldRegen_Low_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USetBonus_ShieldRegen_Low_C*>(USetBonus_ShieldRegen_Low_C::StaticClass()->DefaultObject);

	return Default;
}

}


