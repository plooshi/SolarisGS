#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_Cooldown.GET_Cooldown_C
// (None)

class UClass* UGET_Cooldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_Cooldown_C");

	return Clss;
}


// GET_Cooldown_C GET_Cooldown.Default__GET_Cooldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_Cooldown_C* UGET_Cooldown_C::GetDefaultObj()
{
	static class UGET_Cooldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_Cooldown_C*>(UGET_Cooldown_C::StaticClass()->DefaultObject);

	return Default;
}

}


