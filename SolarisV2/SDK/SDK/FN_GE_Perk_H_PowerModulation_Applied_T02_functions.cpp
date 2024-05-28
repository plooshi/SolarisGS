#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Perk_H_PowerModulation_Applied_T02.GE_Perk_H_PowerModulation_Applied_T02_C
// (None)

class UClass* UGE_Perk_H_PowerModulation_Applied_T02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Perk_H_PowerModulation_Applied_T02_C");

	return Clss;
}


// GE_Perk_H_PowerModulation_Applied_T02_C GE_Perk_H_PowerModulation_Applied_T02.Default__GE_Perk_H_PowerModulation_Applied_T02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Perk_H_PowerModulation_Applied_T02_C* UGE_Perk_H_PowerModulation_Applied_T02_C::GetDefaultObj()
{
	static class UGE_Perk_H_PowerModulation_Applied_T02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Perk_H_PowerModulation_Applied_T02_C*>(UGE_Perk_H_PowerModulation_Applied_T02_C::StaticClass()->DefaultObject);

	return Default;
}

}


