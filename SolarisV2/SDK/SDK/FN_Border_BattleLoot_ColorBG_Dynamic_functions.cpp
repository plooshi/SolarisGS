#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_BattleLoot_ColorBG_Dynamic.Border_BattleLoot_ColorBG_Dynamic_C
// (None)

class UClass* UBorder_BattleLoot_ColorBG_Dynamic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_BattleLoot_ColorBG_Dynamic_C");

	return Clss;
}


// Border_BattleLoot_ColorBG_Dynamic_C Border_BattleLoot_ColorBG_Dynamic.Default__Border_BattleLoot_ColorBG_Dynamic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_BattleLoot_ColorBG_Dynamic_C* UBorder_BattleLoot_ColorBG_Dynamic_C::GetDefaultObj()
{
	static class UBorder_BattleLoot_ColorBG_Dynamic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_BattleLoot_ColorBG_Dynamic_C*>(UBorder_BattleLoot_ColorBG_Dynamic_C::StaticClass()->DefaultObject);

	return Default;
}

}


