#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Com-TileItemNameWhite.TextStyle-Com-TileItemNameWhite_C
// (None)

class UClass* UTextStyleMinusComMinusTileItemNameWhite_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Com-TileItemNameWhite_C");

	return Clss;
}


// TextStyle-Com-TileItemNameWhite_C TextStyle-Com-TileItemNameWhite.Default__TextStyle-Com-TileItemNameWhite_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusComMinusTileItemNameWhite_C* UTextStyleMinusComMinusTileItemNameWhite_C::GetDefaultObj()
{
	static class UTextStyleMinusComMinusTileItemNameWhite_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusComMinusTileItemNameWhite_C*>(UTextStyleMinusComMinusTileItemNameWhite_C::StaticClass()->DefaultObject);

	return Default;
}

}


