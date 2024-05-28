#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BattleMapBaseEdge.BP_BattleMapBaseEdge_C
// (Actor)

class UClass* ABP_BattleMapBaseEdge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BattleMapBaseEdge_C");

	return Clss;
}


// BP_BattleMapBaseEdge_C BP_BattleMapBaseEdge.Default__BP_BattleMapBaseEdge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BattleMapBaseEdge_C* ABP_BattleMapBaseEdge_C::GetDefaultObj()
{
	static class ABP_BattleMapBaseEdge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BattleMapBaseEdge_C*>(ABP_BattleMapBaseEdge_C::StaticClass()->DefaultObject);

	return Default;
}

}


