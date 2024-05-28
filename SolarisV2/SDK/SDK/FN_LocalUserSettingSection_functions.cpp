#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LocalUserSettingSection.LocalUserSettingSection_C
// (None)

class UClass* ULocalUserSettingSection_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LocalUserSettingSection_C");

	return Clss;
}


// LocalUserSettingSection_C LocalUserSettingSection.Default__LocalUserSettingSection_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULocalUserSettingSection_C* ULocalUserSettingSection_C::GetDefaultObj()
{
	static class ULocalUserSettingSection_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULocalUserSettingSection_C*>(ULocalUserSettingSection_C::StaticClass()->DefaultObject);

	return Default;
}

}


