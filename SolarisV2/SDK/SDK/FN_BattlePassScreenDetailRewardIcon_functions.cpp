#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BattlePassScreenDetailRewardIcon.BattlePassScreenDetailRewardIcon_C
// (None)

class UClass* UBattlePassScreenDetailRewardIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassScreenDetailRewardIcon_C");

	return Clss;
}


// BattlePassScreenDetailRewardIcon_C BattlePassScreenDetailRewardIcon.Default__BattlePassScreenDetailRewardIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattlePassScreenDetailRewardIcon_C* UBattlePassScreenDetailRewardIcon_C::GetDefaultObj()
{
	static class UBattlePassScreenDetailRewardIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassScreenDetailRewardIcon_C*>(UBattlePassScreenDetailRewardIcon_C::StaticClass()->DefaultObject);

	return Default;
}

}


