#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BattleMapWeaponGotKillNode.BP_BattleMapWeaponGotKillNode_C
// (Actor)

class UClass* ABP_BattleMapWeaponGotKillNode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BattleMapWeaponGotKillNode_C");

	return Clss;
}


// BP_BattleMapWeaponGotKillNode_C BP_BattleMapWeaponGotKillNode.Default__BP_BattleMapWeaponGotKillNode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BattleMapWeaponGotKillNode_C* ABP_BattleMapWeaponGotKillNode_C::GetDefaultObj()
{
	static class ABP_BattleMapWeaponGotKillNode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BattleMapWeaponGotKillNode_C*>(ABP_BattleMapWeaponGotKillNode_C::StaticClass()->DefaultObject);

	return Default;
}

}


