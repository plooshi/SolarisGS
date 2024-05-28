#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Perk_H_FrozenCastle_FreezeOnHit_Applied.GE_Perk_H_FrozenCastle_FreezeOnHit_Applied_C
// (None)

class UClass* UGE_Perk_H_FrozenCastle_FreezeOnHit_Applied_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Perk_H_FrozenCastle_FreezeOnHit_Applied_C");

	return Clss;
}


// GE_Perk_H_FrozenCastle_FreezeOnHit_Applied_C GE_Perk_H_FrozenCastle_FreezeOnHit_Applied.Default__GE_Perk_H_FrozenCastle_FreezeOnHit_Applied_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Perk_H_FrozenCastle_FreezeOnHit_Applied_C* UGE_Perk_H_FrozenCastle_FreezeOnHit_Applied_C::GetDefaultObj()
{
	static class UGE_Perk_H_FrozenCastle_FreezeOnHit_Applied_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Perk_H_FrozenCastle_FreezeOnHit_Applied_C*>(UGE_Perk_H_FrozenCastle_FreezeOnHit_Applied_C::StaticClass()->DefaultObject);

	return Default;
}

}


