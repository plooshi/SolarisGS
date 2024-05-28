#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Perk_H_FeelTheBase_StackCountTag_Overflow.GE_Perk_H_FeelTheBase_StackCountTag_Overflow_C
// (None)

class UClass* UGE_Perk_H_FeelTheBase_StackCountTag_Overflow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Perk_H_FeelTheBase_StackCountTag_Overflow_C");

	return Clss;
}


// GE_Perk_H_FeelTheBase_StackCountTag_Overflow_C GE_Perk_H_FeelTheBase_StackCountTag_Overflow.Default__GE_Perk_H_FeelTheBase_StackCountTag_Overflow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Perk_H_FeelTheBase_StackCountTag_Overflow_C* UGE_Perk_H_FeelTheBase_StackCountTag_Overflow_C::GetDefaultObj()
{
	static class UGE_Perk_H_FeelTheBase_StackCountTag_Overflow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Perk_H_FeelTheBase_StackCountTag_Overflow_C*>(UGE_Perk_H_FeelTheBase_StackCountTag_Overflow_C::StaticClass()->DefaultObject);

	return Default;
}

}


