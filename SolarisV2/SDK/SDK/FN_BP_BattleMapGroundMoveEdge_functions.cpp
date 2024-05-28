#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BattleMapGroundMoveEdge.BP_BattleMapGroundMoveEdge_C
// (Actor)

class UClass* ABP_BattleMapGroundMoveEdge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BattleMapGroundMoveEdge_C");

	return Clss;
}


// BP_BattleMapGroundMoveEdge_C BP_BattleMapGroundMoveEdge.Default__BP_BattleMapGroundMoveEdge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BattleMapGroundMoveEdge_C* ABP_BattleMapGroundMoveEdge_C::GetDefaultObj()
{
	static class ABP_BattleMapGroundMoveEdge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BattleMapGroundMoveEdge_C*>(ABP_BattleMapGroundMoveEdge_C::StaticClass()->DefaultObject);

	return Default;
}

}


