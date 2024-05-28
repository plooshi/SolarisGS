#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_KnockbackImmunityTag.GET_KnockbackImmunityTag_C
// (None)

class UClass* UGET_KnockbackImmunityTag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_KnockbackImmunityTag_C");

	return Clss;
}


// GET_KnockbackImmunityTag_C GET_KnockbackImmunityTag.Default__GET_KnockbackImmunityTag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_KnockbackImmunityTag_C* UGET_KnockbackImmunityTag_C::GetDefaultObj()
{
	static class UGET_KnockbackImmunityTag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_KnockbackImmunityTag_C*>(UGET_KnockbackImmunityTag_C::StaticClass()->DefaultObject);

	return Default;
}

}


