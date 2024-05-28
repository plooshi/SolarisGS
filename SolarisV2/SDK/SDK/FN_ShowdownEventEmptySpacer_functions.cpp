#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ShowdownEventEmptySpacer.ShowdownEventEmptySpacer_C
// (None)

class UClass* UShowdownEventEmptySpacer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShowdownEventEmptySpacer_C");

	return Clss;
}


// ShowdownEventEmptySpacer_C ShowdownEventEmptySpacer.Default__ShowdownEventEmptySpacer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShowdownEventEmptySpacer_C* UShowdownEventEmptySpacer_C::GetDefaultObj()
{
	static class UShowdownEventEmptySpacer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShowdownEventEmptySpacer_C*>(UShowdownEventEmptySpacer_C::StaticClass()->DefaultObject);

	return Default;
}

}


