#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass KeybindWidget.KeybindWidget_C
// (None)

class UClass* UKeybindWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KeybindWidget_C");

	return Clss;
}


// KeybindWidget_C KeybindWidget.Default__KeybindWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKeybindWidget_C* UKeybindWidget_C::GetDefaultObj()
{
	static class UKeybindWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKeybindWidget_C*>(UKeybindWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


