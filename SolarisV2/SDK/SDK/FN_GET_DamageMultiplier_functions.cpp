#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_DamageMultiplier.GET_DamageMultiplier_C
// (None)

class UClass* UGET_DamageMultiplier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_DamageMultiplier_C");

	return Clss;
}


// GET_DamageMultiplier_C GET_DamageMultiplier.Default__GET_DamageMultiplier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_DamageMultiplier_C* UGET_DamageMultiplier_C::GetDefaultObj()
{
	static class UGET_DamageMultiplier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_DamageMultiplier_C*>(UGET_DamageMultiplier_C::StaticClass()->DefaultObject);

	return Default;
}

}


