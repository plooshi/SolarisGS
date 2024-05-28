#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_FatalDamage.GET_FatalDamage_C
// (None)

class UClass* UGET_FatalDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_FatalDamage_C");

	return Clss;
}


// GET_FatalDamage_C GET_FatalDamage.Default__GET_FatalDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_FatalDamage_C* UGET_FatalDamage_C::GetDefaultObj()
{
	static class UGET_FatalDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_FatalDamage_C*>(UGET_FatalDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


