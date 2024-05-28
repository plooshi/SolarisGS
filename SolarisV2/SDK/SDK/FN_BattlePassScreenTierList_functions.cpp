#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BattlePassScreenTierList.BattlePassScreenTierList_C
// (None)

class UClass* UBattlePassScreenTierList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassScreenTierList_C");

	return Clss;
}


// BattlePassScreenTierList_C BattlePassScreenTierList.Default__BattlePassScreenTierList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattlePassScreenTierList_C* UBattlePassScreenTierList_C::GetDefaultObj()
{
	static class UBattlePassScreenTierList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassScreenTierList_C*>(UBattlePassScreenTierList_C::StaticClass()->DefaultObject);

	return Default;
}

}


