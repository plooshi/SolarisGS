#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BattleMapWeaponGotKillInstigatorEdge.BP_BattleMapWeaponGotKillInstigatorEdge_C
// (Actor)

class UClass* ABP_BattleMapWeaponGotKillInstigatorEdge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BattleMapWeaponGotKillInstigatorEdge_C");

	return Clss;
}


// BP_BattleMapWeaponGotKillInstigatorEdge_C BP_BattleMapWeaponGotKillInstigatorEdge.Default__BP_BattleMapWeaponGotKillInstigatorEdge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BattleMapWeaponGotKillInstigatorEdge_C* ABP_BattleMapWeaponGotKillInstigatorEdge_C::GetDefaultObj()
{
	static class ABP_BattleMapWeaponGotKillInstigatorEdge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BattleMapWeaponGotKillInstigatorEdge_C*>(ABP_BattleMapWeaponGotKillInstigatorEdge_C::StaticClass()->DefaultObject);

	return Default;
}

}


