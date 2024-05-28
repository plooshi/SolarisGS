#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SetBonus_MeleeDamage_Low.SetBonus_MeleeDamage_Low_C
// (None)

class UClass* USetBonus_MeleeDamage_Low_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SetBonus_MeleeDamage_Low_C");

	return Clss;
}


// SetBonus_MeleeDamage_Low_C SetBonus_MeleeDamage_Low.Default__SetBonus_MeleeDamage_Low_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USetBonus_MeleeDamage_Low_C* USetBonus_MeleeDamage_Low_C::GetDefaultObj()
{
	static class USetBonus_MeleeDamage_Low_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USetBonus_MeleeDamage_Low_C*>(USetBonus_MeleeDamage_Low_C::StaticClass()->DefaultObject);

	return Default;
}

}


