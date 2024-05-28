#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_DirectBallisticDamage.GET_DirectBallisticDamage_C
// (None)

class UClass* UGET_DirectBallisticDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_DirectBallisticDamage_C");

	return Clss;
}


// GET_DirectBallisticDamage_C GET_DirectBallisticDamage.Default__GET_DirectBallisticDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_DirectBallisticDamage_C* UGET_DirectBallisticDamage_C::GetDefaultObj()
{
	static class UGET_DirectBallisticDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_DirectBallisticDamage_C*>(UGET_DirectBallisticDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


