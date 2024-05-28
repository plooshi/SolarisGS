#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BattleMapGroundMoveChestNode.BP_BattleMapGroundMoveChestNode_C
// (Actor)

class UClass* ABP_BattleMapGroundMoveChestNode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BattleMapGroundMoveChestNode_C");

	return Clss;
}


// BP_BattleMapGroundMoveChestNode_C BP_BattleMapGroundMoveChestNode.Default__BP_BattleMapGroundMoveChestNode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BattleMapGroundMoveChestNode_C* ABP_BattleMapGroundMoveChestNode_C::GetDefaultObj()
{
	static class ABP_BattleMapGroundMoveChestNode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BattleMapGroundMoveChestNode_C*>(ABP_BattleMapGroundMoveChestNode_C::StaticClass()->DefaultObject);

	return Default;
}

}


