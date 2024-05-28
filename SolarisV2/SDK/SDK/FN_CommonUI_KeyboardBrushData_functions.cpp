#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CommonUI_KeyboardBrushData.CommonUI_KeyboardBrushData_C
// (None)

class UClass* UCommonUI_KeyboardBrushData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonUI_KeyboardBrushData_C");

	return Clss;
}


// CommonUI_KeyboardBrushData_C CommonUI_KeyboardBrushData.Default__CommonUI_KeyboardBrushData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCommonUI_KeyboardBrushData_C* UCommonUI_KeyboardBrushData_C::GetDefaultObj()
{
	static class UCommonUI_KeyboardBrushData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonUI_KeyboardBrushData_C*>(UCommonUI_KeyboardBrushData_C::StaticClass()->DefaultObject);

	return Default;
}

}


