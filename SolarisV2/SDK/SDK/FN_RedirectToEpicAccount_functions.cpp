#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass RedirectToEpicAccount.RedirectToEpicAccount_C
// (None)

class UClass* URedirectToEpicAccount_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RedirectToEpicAccount_C");

	return Clss;
}


// RedirectToEpicAccount_C RedirectToEpicAccount.Default__RedirectToEpicAccount_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URedirectToEpicAccount_C* URedirectToEpicAccount_C::GetDefaultObj()
{
	static class URedirectToEpicAccount_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URedirectToEpicAccount_C*>(URedirectToEpicAccount_C::StaticClass()->DefaultObject);

	return Default;
}

}


