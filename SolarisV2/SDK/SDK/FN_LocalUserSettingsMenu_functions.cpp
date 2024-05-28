#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LocalUserSettingsMenu.LocalUserSettingsMenu_C
// (None)

class UClass* ULocalUserSettingsMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LocalUserSettingsMenu_C");

	return Clss;
}


// LocalUserSettingsMenu_C LocalUserSettingsMenu.Default__LocalUserSettingsMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULocalUserSettingsMenu_C* ULocalUserSettingsMenu_C::GetDefaultObj()
{
	static class ULocalUserSettingsMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULocalUserSettingsMenu_C*>(ULocalUserSettingsMenu_C::StaticClass()->DefaultObject);

	return Default;
}

}


