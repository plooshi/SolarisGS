#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_Cooldown_Hero_Active.GET_Cooldown_Hero_Active_C
// (None)

class UClass* UGET_Cooldown_Hero_Active_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_Cooldown_Hero_Active_C");

	return Clss;
}


// GET_Cooldown_Hero_Active_C GET_Cooldown_Hero_Active.Default__GET_Cooldown_Hero_Active_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_Cooldown_Hero_Active_C* UGET_Cooldown_Hero_Active_C::GetDefaultObj()
{
	static class UGET_Cooldown_Hero_Active_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_Cooldown_Hero_Active_C*>(UGET_Cooldown_Hero_Active_C::StaticClass()->DefaultObject);

	return Default;
}

}


