#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AccountPinLinkingWindow.AccountPinLinkingWindow_C
// (None)

class UClass* UAccountPinLinkingWindow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AccountPinLinkingWindow_C");

	return Clss;
}


// AccountPinLinkingWindow_C AccountPinLinkingWindow.Default__AccountPinLinkingWindow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAccountPinLinkingWindow_C* UAccountPinLinkingWindow_C::GetDefaultObj()
{
	static class UAccountPinLinkingWindow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAccountPinLinkingWindow_C*>(UAccountPinLinkingWindow_C::StaticClass()->DefaultObject);

	return Default;
}

}


