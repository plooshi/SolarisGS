#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Solid-SquareM-Selectable.ButtonStyle-Solid-SquareM-Selectable_C
// (None)

class UClass* UButtonStyleMinusSolidMinusSquareMMinusSelectable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Solid-SquareM-Selectable_C");

	return Clss;
}


// ButtonStyle-Solid-SquareM-Selectable_C ButtonStyle-Solid-SquareM-Selectable.Default__ButtonStyle-Solid-SquareM-Selectable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusSolidMinusSquareMMinusSelectable_C* UButtonStyleMinusSolidMinusSquareMMinusSelectable_C::GetDefaultObj()
{
	static class UButtonStyleMinusSolidMinusSquareMMinusSelectable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusSolidMinusSquareMMinusSelectable_C*>(UButtonStyleMinusSolidMinusSquareMMinusSelectable_C::StaticClass()->DefaultObject);

	return Default;
}

}


