#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass InScreenWidget.InScreenWidget_C
// (None)

class UClass* UInScreenWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InScreenWidget_C");

	return Clss;
}


// InScreenWidget_C InScreenWidget.Default__InScreenWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInScreenWidget_C* UInScreenWidget_C::GetDefaultObj()
{
	static class UInScreenWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInScreenWidget_C*>(UInScreenWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


