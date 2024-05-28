#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Map_Fortitude_To_Health.GE_Map_Fortitude_To_Health_C
// (None)

class UClass* UGE_Map_Fortitude_To_Health_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Map_Fortitude_To_Health_C");

	return Clss;
}


// GE_Map_Fortitude_To_Health_C GE_Map_Fortitude_To_Health.Default__GE_Map_Fortitude_To_Health_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Map_Fortitude_To_Health_C* UGE_Map_Fortitude_To_Health_C::GetDefaultObj()
{
	static class UGE_Map_Fortitude_To_Health_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Map_Fortitude_To_Health_C*>(UGE_Map_Fortitude_To_Health_C::StaticClass()->DefaultObject);

	return Default;
}

}


