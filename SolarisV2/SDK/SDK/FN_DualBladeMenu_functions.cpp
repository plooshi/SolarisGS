#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DualBladeMenu.DualBladeMenu_C
// (None)

class UClass* UDualBladeMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DualBladeMenu_C");

	return Clss;
}


// DualBladeMenu_C DualBladeMenu.Default__DualBladeMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDualBladeMenu_C* UDualBladeMenu_C::GetDefaultObj()
{
	static class UDualBladeMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDualBladeMenu_C*>(UDualBladeMenu_C::StaticClass()->DefaultObject);

	return Default;
}

}


