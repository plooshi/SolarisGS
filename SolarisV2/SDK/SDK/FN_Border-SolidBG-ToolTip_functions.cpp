#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-SolidBG-ToolTip.Border-SolidBG-ToolTip_C
// (None)

class UClass* UBorderMinusSolidBGMinusToolTip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-SolidBG-ToolTip_C");

	return Clss;
}


// Border-SolidBG-ToolTip_C Border-SolidBG-ToolTip.Default__Border-SolidBG-ToolTip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusSolidBGMinusToolTip_C* UBorderMinusSolidBGMinusToolTip_C::GetDefaultObj()
{
	static class UBorderMinusSolidBGMinusToolTip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusSolidBGMinusToolTip_C*>(UBorderMinusSolidBGMinusToolTip_C::StaticClass()->DefaultObject);

	return Default;
}

}


