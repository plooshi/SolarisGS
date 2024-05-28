#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BattleMapTimeIndicator.BP_BattleMapTimeIndicator_C
// (Actor)

class UClass* ABP_BattleMapTimeIndicator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BattleMapTimeIndicator_C");

	return Clss;
}


// BP_BattleMapTimeIndicator_C BP_BattleMapTimeIndicator.Default__BP_BattleMapTimeIndicator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BattleMapTimeIndicator_C* ABP_BattleMapTimeIndicator_C::GetDefaultObj()
{
	static class ABP_BattleMapTimeIndicator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BattleMapTimeIndicator_C*>(ABP_BattleMapTimeIndicator_C::StaticClass()->DefaultObject);

	return Default;
}

}


