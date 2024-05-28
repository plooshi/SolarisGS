#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BattleMapBaseNode.BP_BattleMapBaseNode_C
// (Actor)

class UClass* ABP_BattleMapBaseNode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BattleMapBaseNode_C");

	return Clss;
}


// BP_BattleMapBaseNode_C BP_BattleMapBaseNode.Default__BP_BattleMapBaseNode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BattleMapBaseNode_C* ABP_BattleMapBaseNode_C::GetDefaultObj()
{
	static class ABP_BattleMapBaseNode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BattleMapBaseNode_C*>(ABP_BattleMapBaseNode_C::StaticClass()->DefaultObject);

	return Default;
}

}


