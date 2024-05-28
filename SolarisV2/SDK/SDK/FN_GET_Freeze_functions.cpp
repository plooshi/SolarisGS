#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_Freeze.GET_Freeze_C
// (None)

class UClass* UGET_Freeze_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_Freeze_C");

	return Clss;
}


// GET_Freeze_C GET_Freeze.Default__GET_Freeze_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_Freeze_C* UGET_Freeze_C::GetDefaultObj()
{
	static class UGET_Freeze_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_Freeze_C*>(UGET_Freeze_C::StaticClass()->DefaultObject);

	return Default;
}

}


