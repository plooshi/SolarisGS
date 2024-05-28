#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_PeriodicDamageParent.GET_PeriodicDamageParent_C
// (None)

class UClass* UGET_PeriodicDamageParent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_PeriodicDamageParent_C");

	return Clss;
}


// GET_PeriodicDamageParent_C GET_PeriodicDamageParent.Default__GET_PeriodicDamageParent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_PeriodicDamageParent_C* UGET_PeriodicDamageParent_C::GetDefaultObj()
{
	static class UGET_PeriodicDamageParent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_PeriodicDamageParent_C*>(UGET_PeriodicDamageParent_C::StaticClass()->DefaultObject);

	return Default;
}

}


