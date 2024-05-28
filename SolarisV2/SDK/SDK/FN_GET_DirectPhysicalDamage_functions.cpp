#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_DirectPhysicalDamage.GET_DirectPhysicalDamage_C
// (None)

class UClass* UGET_DirectPhysicalDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_DirectPhysicalDamage_C");

	return Clss;
}


// GET_DirectPhysicalDamage_C GET_DirectPhysicalDamage.Default__GET_DirectPhysicalDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_DirectPhysicalDamage_C* UGET_DirectPhysicalDamage_C::GetDefaultObj()
{
	static class UGET_DirectPhysicalDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_DirectPhysicalDamage_C*>(UGET_DirectPhysicalDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


