#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SocialSettings.SocialSettings_C
// (None)

class UClass* USocialSettings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialSettings_C");

	return Clss;
}


// SocialSettings_C SocialSettings.Default__SocialSettings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USocialSettings_C* USocialSettings_C::GetDefaultObj()
{
	static class USocialSettings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialSettings_C*>(USocialSettings_C::StaticClass()->DefaultObject);

	return Default;
}

}


