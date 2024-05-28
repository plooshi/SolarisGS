#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BattleMapTeamFlightNode.BP_BattleMapTeamFlightNode_C
// (Actor)

class UClass* ABP_BattleMapTeamFlightNode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BattleMapTeamFlightNode_C");

	return Clss;
}


// BP_BattleMapTeamFlightNode_C BP_BattleMapTeamFlightNode.Default__BP_BattleMapTeamFlightNode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BattleMapTeamFlightNode_C* ABP_BattleMapTeamFlightNode_C::GetDefaultObj()
{
	static class ABP_BattleMapTeamFlightNode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BattleMapTeamFlightNode_C*>(ABP_BattleMapTeamFlightNode_C::StaticClass()->DefaultObject);

	return Default;
}

}


