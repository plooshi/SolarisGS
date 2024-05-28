#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_AfflictedParent.GET_AfflictedParent_C
// (None)

class UClass* UGET_AfflictedParent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_AfflictedParent_C");

	return Clss;
}


// GET_AfflictedParent_C GET_AfflictedParent.Default__GET_AfflictedParent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_AfflictedParent_C* UGET_AfflictedParent_C::GetDefaultObj()
{
	static class UGET_AfflictedParent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_AfflictedParent_C*>(UGET_AfflictedParent_C::StaticClass()->DefaultObject);

	return Default;
}

}


