#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BattleMapGroundMoveNode.BP_BattleMapGroundMoveNode_C
// (Actor)

class UClass* ABP_BattleMapGroundMoveNode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BattleMapGroundMoveNode_C");

	return Clss;
}


// BP_BattleMapGroundMoveNode_C BP_BattleMapGroundMoveNode.Default__BP_BattleMapGroundMoveNode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BattleMapGroundMoveNode_C* ABP_BattleMapGroundMoveNode_C::GetDefaultObj()
{
	static class ABP_BattleMapGroundMoveNode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BattleMapGroundMoveNode_C*>(ABP_BattleMapGroundMoveNode_C::StaticClass()->DefaultObject);

	return Default;
}

}


