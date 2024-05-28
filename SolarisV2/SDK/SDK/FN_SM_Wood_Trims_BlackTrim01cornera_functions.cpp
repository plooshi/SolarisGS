#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SM_Wood_Trims_BlackTrim01cornera.SM_Wood_Trims_BlackTrim01cornera_C
// (Actor)

class UClass* ASM_Wood_Trims_BlackTrim01cornera_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SM_Wood_Trims_BlackTrim01cornera_C");

	return Clss;
}


// SM_Wood_Trims_BlackTrim01cornera_C SM_Wood_Trims_BlackTrim01cornera.Default__SM_Wood_Trims_BlackTrim01cornera_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASM_Wood_Trims_BlackTrim01cornera_C* ASM_Wood_Trims_BlackTrim01cornera_C::GetDefaultObj()
{
	static class ASM_Wood_Trims_BlackTrim01cornera_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASM_Wood_Trims_BlackTrim01cornera_C*>(ASM_Wood_Trims_BlackTrim01cornera_C::StaticClass()->DefaultObject);

	return Default;
}

}


