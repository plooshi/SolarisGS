#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Perk_H_FrozenCastle_Freeze.GE_Perk_H_FrozenCastle_Freeze_C
// (None)

class UClass* UGE_Perk_H_FrozenCastle_Freeze_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Perk_H_FrozenCastle_Freeze_C");

	return Clss;
}


// GE_Perk_H_FrozenCastle_Freeze_C GE_Perk_H_FrozenCastle_Freeze.Default__GE_Perk_H_FrozenCastle_Freeze_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Perk_H_FrozenCastle_Freeze_C* UGE_Perk_H_FrozenCastle_Freeze_C::GetDefaultObj()
{
	static class UGE_Perk_H_FrozenCastle_Freeze_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Perk_H_FrozenCastle_Freeze_C*>(UGE_Perk_H_FrozenCastle_Freeze_C::StaticClass()->DefaultObject);

	return Default;
}

}


