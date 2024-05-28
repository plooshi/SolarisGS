#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_SlowedParent.GET_SlowedParent_C
// (None)

class UClass* UGET_SlowedParent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_SlowedParent_C");

	return Clss;
}


// GET_SlowedParent_C GET_SlowedParent.Default__GET_SlowedParent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_SlowedParent_C* UGET_SlowedParent_C::GetDefaultObj()
{
	static class UGET_SlowedParent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_SlowedParent_C*>(UGET_SlowedParent_C::StaticClass()->DefaultObject);

	return Default;
}

}


