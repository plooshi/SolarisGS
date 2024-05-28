#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CommonUI_XboxBrushData.CommonUI_XboxBrushData_C
// (None)

class UClass* UCommonUI_XboxBrushData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonUI_XboxBrushData_C");

	return Clss;
}


// CommonUI_XboxBrushData_C CommonUI_XboxBrushData.Default__CommonUI_XboxBrushData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCommonUI_XboxBrushData_C* UCommonUI_XboxBrushData_C::GetDefaultObj()
{
	static class UCommonUI_XboxBrushData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonUI_XboxBrushData_C*>(UCommonUI_XboxBrushData_C::StaticClass()->DefaultObject);

	return Default;
}

}


