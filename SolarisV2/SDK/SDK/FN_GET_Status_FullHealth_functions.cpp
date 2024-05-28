#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_Status_FullHealth.GET_Status_FullHealth_C
// (None)

class UClass* UGET_Status_FullHealth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_Status_FullHealth_C");

	return Clss;
}


// GET_Status_FullHealth_C GET_Status_FullHealth.Default__GET_Status_FullHealth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_Status_FullHealth_C* UGET_Status_FullHealth_C::GetDefaultObj()
{
	static class UGET_Status_FullHealth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_Status_FullHealth_C*>(UGET_Status_FullHealth_C::StaticClass()->DefaultObject);

	return Default;
}

}


