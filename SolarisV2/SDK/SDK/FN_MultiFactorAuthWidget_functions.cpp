#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MultiFactorAuthWidget.MultiFactorAuthWidget_C
// (None)

class UClass* UMultiFactorAuthWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MultiFactorAuthWidget_C");

	return Clss;
}


// MultiFactorAuthWidget_C MultiFactorAuthWidget.Default__MultiFactorAuthWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMultiFactorAuthWidget_C* UMultiFactorAuthWidget_C::GetDefaultObj()
{
	static class UMultiFactorAuthWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMultiFactorAuthWidget_C*>(UMultiFactorAuthWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


