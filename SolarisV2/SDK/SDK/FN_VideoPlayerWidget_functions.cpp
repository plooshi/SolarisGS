#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass VideoPlayerWidget.VideoPlayerWidget_C
// (None)

class UClass* UVideoPlayerWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VideoPlayerWidget_C");

	return Clss;
}


// VideoPlayerWidget_C VideoPlayerWidget.Default__VideoPlayerWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVideoPlayerWidget_C* UVideoPlayerWidget_C::GetDefaultObj()
{
	static class UVideoPlayerWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVideoPlayerWidget_C*>(UVideoPlayerWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


