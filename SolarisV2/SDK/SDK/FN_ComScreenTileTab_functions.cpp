#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ComScreenTileTab.ComScreenTileTab_C
// (None)

class UClass* UComScreenTileTab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComScreenTileTab_C");

	return Clss;
}


// ComScreenTileTab_C ComScreenTileTab.Default__ComScreenTileTab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UComScreenTileTab_C* UComScreenTileTab_C::GetDefaultObj()
{
	static class UComScreenTileTab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UComScreenTileTab_C*>(UComScreenTileTab_C::StaticClass()->DefaultObject);

	return Default;
}

}


