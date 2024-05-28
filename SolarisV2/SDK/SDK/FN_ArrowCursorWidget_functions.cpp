#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ArrowCursorWidget.ArrowCursorWidget_C
// (None)

class UClass* UArrowCursorWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArrowCursorWidget_C");

	return Clss;
}


// ArrowCursorWidget_C ArrowCursorWidget.Default__ArrowCursorWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UArrowCursorWidget_C* UArrowCursorWidget_C::GetDefaultObj()
{
	static class UArrowCursorWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UArrowCursorWidget_C*>(UArrowCursorWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ArrowCursorWidget.ArrowCursorWidget_C.GetBackground_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm)

struct FSlateBrush UArrowCursorWidget_C::GetBackground_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArrowCursorWidget_C", "GetBackground_0");

	Params::UArrowCursorWidget_C_GetBackground_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


