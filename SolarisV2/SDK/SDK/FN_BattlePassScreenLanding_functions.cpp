#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BattlePassScreenLanding.BattlePassScreenLanding_C
// (None)

class UClass* UBattlePassScreenLanding_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassScreenLanding_C");

	return Clss;
}


// BattlePassScreenLanding_C BattlePassScreenLanding.Default__BattlePassScreenLanding_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattlePassScreenLanding_C* UBattlePassScreenLanding_C::GetDefaultObj()
{
	static class UBattlePassScreenLanding_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassScreenLanding_C*>(UBattlePassScreenLanding_C::StaticClass()->DefaultObject);

	return Default;
}

}


