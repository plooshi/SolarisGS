#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-ToolTip-B.TextStyle-Base-ToolTip-B_C
// (None)

class UClass* UTextStyleMinusBaseMinusToolTipMinusB_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-ToolTip-B_C");

	return Clss;
}


// TextStyle-Base-ToolTip-B_C TextStyle-Base-ToolTip-B.Default__TextStyle-Base-ToolTip-B_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusToolTipMinusB_C* UTextStyleMinusBaseMinusToolTipMinusB_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusToolTipMinusB_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusToolTipMinusB_C*>(UTextStyleMinusBaseMinusToolTipMinusB_C::StaticClass()->DefaultObject);

	return Default;
}

}


