#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LoginInteractionHost.LoginInteractionHost_C
// (None)

class UClass* ULoginInteractionHost_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoginInteractionHost_C");

	return Clss;
}


// LoginInteractionHost_C LoginInteractionHost.Default__LoginInteractionHost_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULoginInteractionHost_C* ULoginInteractionHost_C::GetDefaultObj()
{
	static class ULoginInteractionHost_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoginInteractionHost_C*>(ULoginInteractionHost_C::StaticClass()->DefaultObject);

	return Default;
}

}


