#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SimpleCommonButtonWithInput.SimpleCommonButtonWithInput_C
// (None)

class UClass* USimpleCommonButtonWithInput_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimpleCommonButtonWithInput_C");

	return Clss;
}


// SimpleCommonButtonWithInput_C SimpleCommonButtonWithInput.Default__SimpleCommonButtonWithInput_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USimpleCommonButtonWithInput_C* USimpleCommonButtonWithInput_C::GetDefaultObj()
{
	static class USimpleCommonButtonWithInput_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USimpleCommonButtonWithInput_C*>(USimpleCommonButtonWithInput_C::StaticClass()->DefaultObject);

	return Default;
}

}


