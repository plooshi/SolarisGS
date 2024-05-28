#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MainMenuButton.MainMenuButton_C
// (None)

class UClass* UMainMenuButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenuButton_C");

	return Clss;
}


// MainMenuButton_C MainMenuButton.Default__MainMenuButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMainMenuButton_C* UMainMenuButton_C::GetDefaultObj()
{
	static class UMainMenuButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMainMenuButton_C*>(UMainMenuButton_C::StaticClass()->DefaultObject);

	return Default;
}

}


