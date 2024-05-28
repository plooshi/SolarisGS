#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AccountLinkingWindow.AccountLinkingWindow_C
// (None)

class UClass* UAccountLinkingWindow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AccountLinkingWindow_C");

	return Clss;
}


// AccountLinkingWindow_C AccountLinkingWindow.Default__AccountLinkingWindow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAccountLinkingWindow_C* UAccountLinkingWindow_C::GetDefaultObj()
{
	static class UAccountLinkingWindow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAccountLinkingWindow_C*>(UAccountLinkingWindow_C::StaticClass()->DefaultObject);

	return Default;
}

}


