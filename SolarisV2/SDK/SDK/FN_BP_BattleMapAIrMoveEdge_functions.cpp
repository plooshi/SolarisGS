#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BattleMapAIrMoveEdge.BP_BattleMapAIrMoveEdge_C
// (Actor)

class UClass* ABP_BattleMapAIrMoveEdge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BattleMapAIrMoveEdge_C");

	return Clss;
}


// BP_BattleMapAIrMoveEdge_C BP_BattleMapAIrMoveEdge.Default__BP_BattleMapAIrMoveEdge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BattleMapAIrMoveEdge_C* ABP_BattleMapAIrMoveEdge_C::GetDefaultObj()
{
	static class ABP_BattleMapAIrMoveEdge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BattleMapAIrMoveEdge_C*>(ABP_BattleMapAIrMoveEdge_C::StaticClass()->DefaultObject);

	return Default;
}

}


