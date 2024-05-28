#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BattlePassScreenLandingBulletpoint.BattlePassScreenLandingBulletpoint_C
// (None)

class UClass* UBattlePassScreenLandingBulletpoint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassScreenLandingBulletpoint_C");

	return Clss;
}


// BattlePassScreenLandingBulletpoint_C BattlePassScreenLandingBulletpoint.Default__BattlePassScreenLandingBulletpoint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattlePassScreenLandingBulletpoint_C* UBattlePassScreenLandingBulletpoint_C::GetDefaultObj()
{
	static class UBattlePassScreenLandingBulletpoint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassScreenLandingBulletpoint_C*>(UBattlePassScreenLandingBulletpoint_C::StaticClass()->DefaultObject);

	return Default;
}

}


