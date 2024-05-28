#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-SolidBG-ToolTipShadow.Border-SolidBG-ToolTipShadow_C
// (None)

class UClass* UBorderMinusSolidBGMinusToolTipShadow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-SolidBG-ToolTipShadow_C");

	return Clss;
}


// Border-SolidBG-ToolTipShadow_C Border-SolidBG-ToolTipShadow.Default__Border-SolidBG-ToolTipShadow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusSolidBGMinusToolTipShadow_C* UBorderMinusSolidBGMinusToolTipShadow_C::GetDefaultObj()
{
	static class UBorderMinusSolidBGMinusToolTipShadow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusSolidBGMinusToolTipShadow_C*>(UBorderMinusSolidBGMinusToolTipShadow_C::StaticClass()->DefaultObject);

	return Default;
}

}


