#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_DirectEnvironmentDamage.GET_DirectEnvironmentDamage_C
// (None)

class UClass* UGET_DirectEnvironmentDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_DirectEnvironmentDamage_C");

	return Clss;
}


// GET_DirectEnvironmentDamage_C GET_DirectEnvironmentDamage.Default__GET_DirectEnvironmentDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_DirectEnvironmentDamage_C* UGET_DirectEnvironmentDamage_C::GetDefaultObj()
{
	static class UGET_DirectEnvironmentDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_DirectEnvironmentDamage_C*>(UGET_DirectEnvironmentDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


