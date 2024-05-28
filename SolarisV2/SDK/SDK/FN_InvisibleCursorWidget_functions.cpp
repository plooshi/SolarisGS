#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass InvisibleCursorWidget.InvisibleCursorWidget_C
// (None)

class UClass* UInvisibleCursorWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InvisibleCursorWidget_C");

	return Clss;
}


// InvisibleCursorWidget_C InvisibleCursorWidget.Default__InvisibleCursorWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInvisibleCursorWidget_C* UInvisibleCursorWidget_C::GetDefaultObj()
{
	static class UInvisibleCursorWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInvisibleCursorWidget_C*>(UInvisibleCursorWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


