#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SetBonus_MaxShield_High.SetBonus_MaxShield_High_C
// (None)

class UClass* USetBonus_MaxShield_High_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SetBonus_MaxShield_High_C");

	return Clss;
}


// SetBonus_MaxShield_High_C SetBonus_MaxShield_High.Default__SetBonus_MaxShield_High_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USetBonus_MaxShield_High_C* USetBonus_MaxShield_High_C::GetDefaultObj()
{
	static class USetBonus_MaxShield_High_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USetBonus_MaxShield_High_C*>(USetBonus_MaxShield_High_C::StaticClass()->DefaultObject);

	return Default;
}

}


