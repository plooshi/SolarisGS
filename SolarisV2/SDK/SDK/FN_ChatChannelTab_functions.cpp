#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ChatChannelTab.ChatChannelTab_C
// (None)

class UClass* UChatChannelTab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChatChannelTab_C");

	return Clss;
}


// ChatChannelTab_C ChatChannelTab.Default__ChatChannelTab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChatChannelTab_C* UChatChannelTab_C::GetDefaultObj()
{
	static class UChatChannelTab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChatChannelTab_C*>(UChatChannelTab_C::StaticClass()->DefaultObject);

	return Default;
}

}


