#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_PeriodicEnergyDamage.GET_PeriodicEnergyDamage_C
// (None)

class UClass* UGET_PeriodicEnergyDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_PeriodicEnergyDamage_C");

	return Clss;
}


// GET_PeriodicEnergyDamage_C GET_PeriodicEnergyDamage.Default__GET_PeriodicEnergyDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_PeriodicEnergyDamage_C* UGET_PeriodicEnergyDamage_C::GetDefaultObj()
{
	static class UGET_PeriodicEnergyDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_PeriodicEnergyDamage_C*>(UGET_PeriodicEnergyDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


