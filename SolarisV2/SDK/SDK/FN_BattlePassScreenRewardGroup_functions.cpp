#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BattlePassScreenRewardGroup.BattlePassScreenRewardGroup_C
// (None)

class UClass* UBattlePassScreenRewardGroup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassScreenRewardGroup_C");

	return Clss;
}


// BattlePassScreenRewardGroup_C BattlePassScreenRewardGroup.Default__BattlePassScreenRewardGroup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattlePassScreenRewardGroup_C* UBattlePassScreenRewardGroup_C::GetDefaultObj()
{
	static class UBattlePassScreenRewardGroup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassScreenRewardGroup_C*>(UBattlePassScreenRewardGroup_C::StaticClass()->DefaultObject);

	return Default;
}

}


