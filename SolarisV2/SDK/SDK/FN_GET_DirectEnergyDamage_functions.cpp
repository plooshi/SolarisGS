#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_DirectEnergyDamage.GET_DirectEnergyDamage_C
// (None)

class UClass* UGET_DirectEnergyDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_DirectEnergyDamage_C");

	return Clss;
}


// GET_DirectEnergyDamage_C GET_DirectEnergyDamage.Default__GET_DirectEnergyDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_DirectEnergyDamage_C* UGET_DirectEnergyDamage_C::GetDefaultObj()
{
	static class UGET_DirectEnergyDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_DirectEnergyDamage_C*>(UGET_DirectEnergyDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


