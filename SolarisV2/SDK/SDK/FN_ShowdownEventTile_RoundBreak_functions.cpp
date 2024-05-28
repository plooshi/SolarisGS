#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ShowdownEventTile_RoundBreak.ShowdownEventTile_RoundBreak_C
// (None)

class UClass* UShowdownEventTile_RoundBreak_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShowdownEventTile_RoundBreak_C");

	return Clss;
}


// ShowdownEventTile_RoundBreak_C ShowdownEventTile_RoundBreak.Default__ShowdownEventTile_RoundBreak_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShowdownEventTile_RoundBreak_C* UShowdownEventTile_RoundBreak_C::GetDefaultObj()
{
	static class UShowdownEventTile_RoundBreak_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShowdownEventTile_RoundBreak_C*>(UShowdownEventTile_RoundBreak_C::StaticClass()->DefaultObject);

	return Default;
}

}


