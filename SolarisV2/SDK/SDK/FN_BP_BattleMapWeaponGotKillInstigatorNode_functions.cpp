#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BattleMapWeaponGotKillInstigatorNode.BP_BattleMapWeaponGotKillInstigatorNode_C
// (Actor)

class UClass* ABP_BattleMapWeaponGotKillInstigatorNode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BattleMapWeaponGotKillInstigatorNode_C");

	return Clss;
}


// BP_BattleMapWeaponGotKillInstigatorNode_C BP_BattleMapWeaponGotKillInstigatorNode.Default__BP_BattleMapWeaponGotKillInstigatorNode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BattleMapWeaponGotKillInstigatorNode_C* ABP_BattleMapWeaponGotKillInstigatorNode_C::GetDefaultObj()
{
	static class ABP_BattleMapWeaponGotKillInstigatorNode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BattleMapWeaponGotKillInstigatorNode_C*>(ABP_BattleMapWeaponGotKillInstigatorNode_C::StaticClass()->DefaultObject);

	return Default;
}

}


