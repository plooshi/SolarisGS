#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SimpleCommonButton.SimpleCommonButton_C
// (None)

class UClass* USimpleCommonButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimpleCommonButton_C");

	return Clss;
}


// SimpleCommonButton_C SimpleCommonButton.Default__SimpleCommonButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USimpleCommonButton_C* USimpleCommonButton_C::GetDefaultObj()
{
	static class USimpleCommonButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USimpleCommonButton_C*>(USimpleCommonButton_C::StaticClass()->DefaultObject);

	return Default;
}

}


