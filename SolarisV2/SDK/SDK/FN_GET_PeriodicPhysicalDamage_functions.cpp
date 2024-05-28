#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_PeriodicPhysicalDamage.GET_PeriodicPhysicalDamage_C
// (None)

class UClass* UGET_PeriodicPhysicalDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_PeriodicPhysicalDamage_C");

	return Clss;
}


// GET_PeriodicPhysicalDamage_C GET_PeriodicPhysicalDamage.Default__GET_PeriodicPhysicalDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_PeriodicPhysicalDamage_C* UGET_PeriodicPhysicalDamage_C::GetDefaultObj()
{
	static class UGET_PeriodicPhysicalDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_PeriodicPhysicalDamage_C*>(UGET_PeriodicPhysicalDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


