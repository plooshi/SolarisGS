#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_Heal.GET_Heal_C
// (None)

class UClass* UGET_Heal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_Heal_C");

	return Clss;
}


// GET_Heal_C GET_Heal.Default__GET_Heal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_Heal_C* UGET_Heal_C::GetDefaultObj()
{
	static class UGET_Heal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_Heal_C*>(UGET_Heal_C::StaticClass()->DefaultObject);

	return Default;
}

}


