#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_DamagePercent.GET_DamagePercent_C
// (None)

class UClass* UGET_DamagePercent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_DamagePercent_C");

	return Clss;
}


// GET_DamagePercent_C GET_DamagePercent.Default__GET_DamagePercent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_DamagePercent_C* UGET_DamagePercent_C::GetDefaultObj()
{
	static class UGET_DamagePercent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_DamagePercent_C*>(UGET_DamagePercent_C::StaticClass()->DefaultObject);

	return Default;
}

}


