#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-Diff-Inc-Right.Border-Diff-Inc-Right_C
// (None)

class UClass* UBorderMinusDiffMinusIncMinusRight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-Diff-Inc-Right_C");

	return Clss;
}


// Border-Diff-Inc-Right_C Border-Diff-Inc-Right.Default__Border-Diff-Inc-Right_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusDiffMinusIncMinusRight_C* UBorderMinusDiffMinusIncMinusRight_C::GetDefaultObj()
{
	static class UBorderMinusDiffMinusIncMinusRight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusDiffMinusIncMinusRight_C*>(UBorderMinusDiffMinusIncMinusRight_C::StaticClass()->DefaultObject);

	return Default;
}

}


