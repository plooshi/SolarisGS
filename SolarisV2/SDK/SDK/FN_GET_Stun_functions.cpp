#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_Stun.GET_Stun_C
// (None)

class UClass* UGET_Stun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_Stun_C");

	return Clss;
}


// GET_Stun_C GET_Stun.Default__GET_Stun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_Stun_C* UGET_Stun_C::GetDefaultObj()
{
	static class UGET_Stun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_Stun_C*>(UGET_Stun_C::StaticClass()->DefaultObject);

	return Default;
}

}


