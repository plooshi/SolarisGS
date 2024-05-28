#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FlagTile.FlagTile_C
// (None)

class UClass* UFlagTile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FlagTile_C");

	return Clss;
}


// FlagTile_C FlagTile.Default__FlagTile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFlagTile_C* UFlagTile_C::GetDefaultObj()
{
	static class UFlagTile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFlagTile_C*>(UFlagTile_C::StaticClass()->DefaultObject);

	return Default;
}

}


