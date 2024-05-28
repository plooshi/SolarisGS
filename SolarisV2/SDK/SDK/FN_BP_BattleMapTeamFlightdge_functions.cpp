#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BattleMapTeamFlightdge.BP_BattleMapTeamFlightdge_C
// (Actor)

class UClass* ABP_BattleMapTeamFlightdge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BattleMapTeamFlightdge_C");

	return Clss;
}


// BP_BattleMapTeamFlightdge_C BP_BattleMapTeamFlightdge.Default__BP_BattleMapTeamFlightdge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BattleMapTeamFlightdge_C* ABP_BattleMapTeamFlightdge_C::GetDefaultObj()
{
	static class ABP_BattleMapTeamFlightdge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BattleMapTeamFlightdge_C*>(ABP_BattleMapTeamFlightdge_C::StaticClass()->DefaultObject);

	return Default;
}

}


