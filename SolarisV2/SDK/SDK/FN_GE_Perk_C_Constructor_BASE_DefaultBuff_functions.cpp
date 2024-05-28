#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Perk_C_Constructor_BASE_DefaultBuff.GE_Perk_C_Constructor_BASE_DefaultBuff_C
// (None)

class UClass* UGE_Perk_C_Constructor_BASE_DefaultBuff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Perk_C_Constructor_BASE_DefaultBuff_C");

	return Clss;
}


// GE_Perk_C_Constructor_BASE_DefaultBuff_C GE_Perk_C_Constructor_BASE_DefaultBuff.Default__GE_Perk_C_Constructor_BASE_DefaultBuff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Perk_C_Constructor_BASE_DefaultBuff_C* UGE_Perk_C_Constructor_BASE_DefaultBuff_C::GetDefaultObj()
{
	static class UGE_Perk_C_Constructor_BASE_DefaultBuff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Perk_C_Constructor_BASE_DefaultBuff_C*>(UGE_Perk_C_Constructor_BASE_DefaultBuff_C::StaticClass()->DefaultObject);

	return Default;
}

}


