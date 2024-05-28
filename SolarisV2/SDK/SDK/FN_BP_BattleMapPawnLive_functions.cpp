#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BattleMapPawnLive.BP_BattleMapPawnLive_C
// (Actor, Pawn)

class UClass* ABP_BattleMapPawnLive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BattleMapPawnLive_C");

	return Clss;
}


// BP_BattleMapPawnLive_C BP_BattleMapPawnLive.Default__BP_BattleMapPawnLive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BattleMapPawnLive_C* ABP_BattleMapPawnLive_C::GetDefaultObj()
{
	static class ABP_BattleMapPawnLive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BattleMapPawnLive_C*>(ABP_BattleMapPawnLive_C::StaticClass()->DefaultObject);

	return Default;
}

}


