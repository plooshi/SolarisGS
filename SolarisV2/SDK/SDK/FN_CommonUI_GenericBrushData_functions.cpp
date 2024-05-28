#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CommonUI_GenericBrushData.CommonUI_GenericBrushData_C
// (None)

class UClass* UCommonUI_GenericBrushData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonUI_GenericBrushData_C");

	return Clss;
}


// CommonUI_GenericBrushData_C CommonUI_GenericBrushData.Default__CommonUI_GenericBrushData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCommonUI_GenericBrushData_C* UCommonUI_GenericBrushData_C::GetDefaultObj()
{
	static class UCommonUI_GenericBrushData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonUI_GenericBrushData_C*>(UCommonUI_GenericBrushData_C::StaticClass()->DefaultObject);

	return Default;
}

}


