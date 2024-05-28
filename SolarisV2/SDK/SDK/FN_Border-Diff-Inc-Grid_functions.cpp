#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-Diff-Inc-Grid.Border-Diff-Inc-Grid_C
// (None)

class UClass* UBorderMinusDiffMinusIncMinusGrid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-Diff-Inc-Grid_C");

	return Clss;
}


// Border-Diff-Inc-Grid_C Border-Diff-Inc-Grid.Default__Border-Diff-Inc-Grid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusDiffMinusIncMinusGrid_C* UBorderMinusDiffMinusIncMinusGrid_C::GetDefaultObj()
{
	static class UBorderMinusDiffMinusIncMinusGrid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusDiffMinusIncMinusGrid_C*>(UBorderMinusDiffMinusIncMinusGrid_C::StaticClass()->DefaultObject);

	return Default;
}

}


