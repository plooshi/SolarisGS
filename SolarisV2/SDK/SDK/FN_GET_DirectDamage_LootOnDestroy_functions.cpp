#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_DirectDamage_LootOnDestroy.GET_DirectDamage_LootOnDestroy_C
// (None)

class UClass* UGET_DirectDamage_LootOnDestroy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_DirectDamage_LootOnDestroy_C");

	return Clss;
}


// GET_DirectDamage_LootOnDestroy_C GET_DirectDamage_LootOnDestroy.Default__GET_DirectDamage_LootOnDestroy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_DirectDamage_LootOnDestroy_C* UGET_DirectDamage_LootOnDestroy_C::GetDefaultObj()
{
	static class UGET_DirectDamage_LootOnDestroy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_DirectDamage_LootOnDestroy_C*>(UGET_DirectDamage_LootOnDestroy_C::StaticClass()->DefaultObject);

	return Default;
}

}


