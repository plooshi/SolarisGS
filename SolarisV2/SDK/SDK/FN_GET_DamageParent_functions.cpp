#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_DamageParent.GET_DamageParent_C
// (None)

class UClass* UGET_DamageParent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_DamageParent_C");

	return Clss;
}


// GET_DamageParent_C GET_DamageParent.Default__GET_DamageParent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_DamageParent_C* UGET_DamageParent_C::GetDefaultObj()
{
	static class UGET_DamageParent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_DamageParent_C*>(UGET_DamageParent_C::StaticClass()->DefaultObject);

	return Default;
}

}


