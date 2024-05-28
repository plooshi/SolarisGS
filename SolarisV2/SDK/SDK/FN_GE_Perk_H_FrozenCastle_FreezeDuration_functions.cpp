#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Perk_H_FrozenCastle_FreezeDuration.GE_Perk_H_FrozenCastle_FreezeDuration_C
// (None)

class UClass* UGE_Perk_H_FrozenCastle_FreezeDuration_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Perk_H_FrozenCastle_FreezeDuration_C");

	return Clss;
}


// GE_Perk_H_FrozenCastle_FreezeDuration_C GE_Perk_H_FrozenCastle_FreezeDuration.Default__GE_Perk_H_FrozenCastle_FreezeDuration_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Perk_H_FrozenCastle_FreezeDuration_C* UGE_Perk_H_FrozenCastle_FreezeDuration_C::GetDefaultObj()
{
	static class UGE_Perk_H_FrozenCastle_FreezeDuration_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Perk_H_FrozenCastle_FreezeDuration_C*>(UGE_Perk_H_FrozenCastle_FreezeDuration_C::StaticClass()->DefaultObject);

	return Default;
}

}


