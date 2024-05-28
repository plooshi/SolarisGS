#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-ToolTip-Body.TextStyle-Base-ToolTip-Body_C
// (None)

class UClass* UTextStyleMinusBaseMinusToolTipMinusBody_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-ToolTip-Body_C");

	return Clss;
}


// TextStyle-Base-ToolTip-Body_C TextStyle-Base-ToolTip-Body.Default__TextStyle-Base-ToolTip-Body_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusToolTipMinusBody_C* UTextStyleMinusBaseMinusToolTipMinusBody_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusToolTipMinusBody_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusToolTipMinusBody_C*>(UTextStyleMinusBaseMinusToolTipMinusBody_C::StaticClass()->DefaultObject);

	return Default;
}

}


