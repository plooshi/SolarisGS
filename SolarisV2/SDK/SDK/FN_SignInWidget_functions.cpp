#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SignInWidget.SignInWidget_C
// (None)

class UClass* USignInWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SignInWidget_C");

	return Clss;
}


// SignInWidget_C SignInWidget.Default__SignInWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USignInWidget_C* USignInWidget_C::GetDefaultObj()
{
	static class USignInWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USignInWidget_C*>(USignInWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


