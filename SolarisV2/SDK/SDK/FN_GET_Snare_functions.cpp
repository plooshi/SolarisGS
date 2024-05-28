#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_Snare.GET_Snare_C
// (None)

class UClass* UGET_Snare_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_Snare_C");

	return Clss;
}


// GET_Snare_C GET_Snare.Default__GET_Snare_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_Snare_C* UGET_Snare_C::GetDefaultObj()
{
	static class UGET_Snare_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_Snare_C*>(UGET_Snare_C::StaticClass()->DefaultObject);

	return Default;
}

}


