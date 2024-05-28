#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BattleMapGroundMoveChestEdge.BP_BattleMapGroundMoveChestEdge_C
// (Actor)

class UClass* ABP_BattleMapGroundMoveChestEdge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BattleMapGroundMoveChestEdge_C");

	return Clss;
}


// BP_BattleMapGroundMoveChestEdge_C BP_BattleMapGroundMoveChestEdge.Default__BP_BattleMapGroundMoveChestEdge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BattleMapGroundMoveChestEdge_C* ABP_BattleMapGroundMoveChestEdge_C::GetDefaultObj()
{
	static class ABP_BattleMapGroundMoveChestEdge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BattleMapGroundMoveChestEdge_C*>(ABP_BattleMapGroundMoveChestEdge_C::StaticClass()->DefaultObject);

	return Default;
}

}


