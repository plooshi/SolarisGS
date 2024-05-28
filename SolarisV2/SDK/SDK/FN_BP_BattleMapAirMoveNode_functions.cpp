#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BattleMapAirMoveNode.BP_BattleMapAirMoveNode_C
// (Actor)

class UClass* ABP_BattleMapAirMoveNode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BattleMapAirMoveNode_C");

	return Clss;
}


// BP_BattleMapAirMoveNode_C BP_BattleMapAirMoveNode.Default__BP_BattleMapAirMoveNode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BattleMapAirMoveNode_C* ABP_BattleMapAirMoveNode_C::GetDefaultObj()
{
	static class ABP_BattleMapAirMoveNode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BattleMapAirMoveNode_C*>(ABP_BattleMapAirMoveNode_C::StaticClass()->DefaultObject);

	return Default;
}

}


