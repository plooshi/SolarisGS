#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass StatusWidget.StatusWidget_C
// (None)

class UClass* UStatusWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StatusWidget_C");

	return Clss;
}


// StatusWidget_C StatusWidget.Default__StatusWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStatusWidget_C* UStatusWidget_C::GetDefaultObj()
{
	static class UStatusWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStatusWidget_C*>(UStatusWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


