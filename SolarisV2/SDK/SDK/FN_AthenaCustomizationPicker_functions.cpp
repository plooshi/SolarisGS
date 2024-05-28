#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaCustomizationPicker.AthenaCustomizationPicker_C
// (None)

class UClass* UAthenaCustomizationPicker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaCustomizationPicker_C");

	return Clss;
}


// AthenaCustomizationPicker_C AthenaCustomizationPicker.Default__AthenaCustomizationPicker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaCustomizationPicker_C* UAthenaCustomizationPicker_C::GetDefaultObj()
{
	static class UAthenaCustomizationPicker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaCustomizationPicker_C*>(UAthenaCustomizationPicker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.HandleDifferentFilterSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaCustomizationPicker_C::HandleDifferentFilterSetBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaCustomizationPicker_C", "HandleDifferentFilterSetBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnNoItemsAvailableInFilter
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        EmptyDisplayText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaCustomizationPicker_C::OnNoItemsAvailableInFilter(class FText& EmptyDisplayText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaCustomizationPicker_C", "OnNoItemsAvailableInFilter");

	Params::UAthenaCustomizationPicker_C_OnNoItemsAvailableInFilter_Params Parms{};

	Parms.EmptyDisplayText = EmptyDisplayText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnItemsAvailableInFilter
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaCustomizationPicker_C::OnItemsAvailableInFilter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaCustomizationPicker_C", "OnItemsAvailableInFilter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.ExecuteUbergraph_AthenaCustomizationPicker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetQualifiedFilterDisplayName_ReturnValue               (None)
// class FText                        K2Node_Event_EmptyDisplayText                                    (ConstParm)

void UAthenaCustomizationPicker_C::ExecuteUbergraph_AthenaCustomizationPicker(int32 EntryPoint, class FText CallFunc_GetQualifiedFilterDisplayName_ReturnValue, class FText K2Node_Event_EmptyDisplayText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaCustomizationPicker_C", "ExecuteUbergraph_AthenaCustomizationPicker");

	Params::UAthenaCustomizationPicker_C_ExecuteUbergraph_AthenaCustomizationPicker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetQualifiedFilterDisplayName_ReturnValue = CallFunc_GetQualifiedFilterDisplayName_ReturnValue;
	Parms.K2Node_Event_EmptyDisplayText = K2Node_Event_EmptyDisplayText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnEnableSaveButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaCustomizationPicker_C::OnEnableSaveButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaCustomizationPicker_C", "OnEnableSaveButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnDisableSaveButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaCustomizationPicker_C::OnDisableSaveButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaCustomizationPicker_C", "OnDisableSaveButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


