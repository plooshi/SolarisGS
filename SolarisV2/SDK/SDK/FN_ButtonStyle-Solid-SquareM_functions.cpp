#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Solid-SquareM.ButtonStyle-Solid-SquareM_C
// (None)

class UClass* UButtonStyleMinusSolidMinusSquareM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Solid-SquareM_C");

	return Clss;
}


// ButtonStyle-Solid-SquareM_C ButtonStyle-Solid-SquareM.Default__ButtonStyle-Solid-SquareM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusSolidMinusSquareM_C* UButtonStyleMinusSolidMinusSquareM_C::GetDefaultObj()
{
	static class UButtonStyleMinusSolidMinusSquareM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusSolidMinusSquareM_C*>(UButtonStyleMinusSolidMinusSquareM_C::StaticClass()->DefaultObject);

	return Default;
}

}


