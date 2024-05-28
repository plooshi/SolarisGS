#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_FallingDamage.GET_FallingDamage_C
// (None)

class UClass* UGET_FallingDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_FallingDamage_C");

	return Clss;
}


// GET_FallingDamage_C GET_FallingDamage.Default__GET_FallingDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_FallingDamage_C* UGET_FallingDamage_C::GetDefaultObj()
{
	static class UGET_FallingDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_FallingDamage_C*>(UGET_FallingDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


