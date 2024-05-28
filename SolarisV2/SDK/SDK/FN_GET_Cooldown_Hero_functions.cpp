#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_Cooldown_Hero.GET_Cooldown_Hero_C
// (None)

class UClass* UGET_Cooldown_Hero_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_Cooldown_Hero_C");

	return Clss;
}


// GET_Cooldown_Hero_C GET_Cooldown_Hero.Default__GET_Cooldown_Hero_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_Cooldown_Hero_C* UGET_Cooldown_Hero_C::GetDefaultObj()
{
	static class UGET_Cooldown_Hero_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_Cooldown_Hero_C*>(UGET_Cooldown_Hero_C::StaticClass()->DefaultObject);

	return Default;
}

}


