#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BattleMapZoneNode.BP_BattleMapZoneNode_C
// (Actor)

class UClass* ABP_BattleMapZoneNode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BattleMapZoneNode_C");

	return Clss;
}


// BP_BattleMapZoneNode_C BP_BattleMapZoneNode.Default__BP_BattleMapZoneNode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BattleMapZoneNode_C* ABP_BattleMapZoneNode_C::GetDefaultObj()
{
	static class ABP_BattleMapZoneNode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BattleMapZoneNode_C*>(ABP_BattleMapZoneNode_C::StaticClass()->DefaultObject);

	return Default;
}

}


