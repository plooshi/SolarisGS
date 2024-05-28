#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CommonUI_PS4BrushData.CommonUI_PS4BrushData_C
// (None)

class UClass* UCommonUI_PS4BrushData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonUI_PS4BrushData_C");

	return Clss;
}


// CommonUI_PS4BrushData_C CommonUI_PS4BrushData.Default__CommonUI_PS4BrushData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCommonUI_PS4BrushData_C* UCommonUI_PS4BrushData_C::GetDefaultObj()
{
	static class UCommonUI_PS4BrushData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonUI_PS4BrushData_C*>(UCommonUI_PS4BrushData_C::StaticClass()->DefaultObject);

	return Default;
}

}


