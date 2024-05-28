#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UserActionMenuInputButton.UserActionMenuInputButton_C
// (None)

class UClass* UUserActionMenuInputButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UserActionMenuInputButton_C");

	return Clss;
}


// UserActionMenuInputButton_C UserActionMenuInputButton.Default__UserActionMenuInputButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUserActionMenuInputButton_C* UUserActionMenuInputButton_C::GetDefaultObj()
{
	static class UUserActionMenuInputButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUserActionMenuInputButton_C*>(UUserActionMenuInputButton_C::StaticClass()->DefaultObject);

	return Default;
}

}


