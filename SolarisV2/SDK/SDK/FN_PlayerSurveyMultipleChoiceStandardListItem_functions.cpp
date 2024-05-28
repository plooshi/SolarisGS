#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C
// (None)

class UClass* UPlayerSurveyMultipleChoiceStandardListItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerSurveyMultipleChoiceStandardListItem_C");

	return Clss;
}


// PlayerSurveyMultipleChoiceStandardListItem_C PlayerSurveyMultipleChoiceStandardListItem.Default__PlayerSurveyMultipleChoiceStandardListItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerSurveyMultipleChoiceStandardListItem_C* UPlayerSurveyMultipleChoiceStandardListItem_C::GetDefaultObj()
{
	static class UPlayerSurveyMultipleChoiceStandardListItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerSurveyMultipleChoiceStandardListItem_C*>(UPlayerSurveyMultipleChoiceStandardListItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.UpdateTextStyle
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      CallFunc_GetCurrentTextStyleClass_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonTextStyle*            CallFunc_GetCurrentTextStyle_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetColor_OutColor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyMultipleChoiceStandardListItem_C::UpdateTextStyle(class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue, class UCommonTextStyle* CallFunc_GetCurrentTextStyle_ReturnValue, const struct FLinearColor& CallFunc_GetColor_OutColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyMultipleChoiceStandardListItem_C", "UpdateTextStyle");

	Params::UPlayerSurveyMultipleChoiceStandardListItem_C_UpdateTextStyle_Params Parms{};

	Parms.CallFunc_GetCurrentTextStyleClass_ReturnValue = CallFunc_GetCurrentTextStyleClass_ReturnValue;
	Parms.CallFunc_GetCurrentTextStyle_ReturnValue = CallFunc_GetCurrentTextStyle_ReturnValue;
	Parms.CallFunc_GetColor_OutColor = CallFunc_GetColor_OutColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.UpdateCheckBox
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetSelected_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerSurveyMultipleChoiceStandardListItem_C::UpdateCheckBox(bool CallFunc_GetSelected_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyMultipleChoiceStandardListItem_C", "UpdateCheckBox");

	Params::UPlayerSurveyMultipleChoiceStandardListItem_C_UpdateCheckBox_Params Parms{};

	Parms.CallFunc_GetSelected_ReturnValue = CallFunc_GetSelected_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.MakeChoiceIndexText
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UPlayerSurveyMultipleChoiceStandardListItem_C::MakeChoiceIndexText(int32 Index, class FText* Text, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyMultipleChoiceStandardListItem_C", "MakeChoiceIndexText");

	Params::UPlayerSurveyMultipleChoiceStandardListItem_C_MakeChoiceIndexText_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.UpdateChoiceIndexText
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_MakeChoiceIndexText_Text                                (None)

void UPlayerSurveyMultipleChoiceStandardListItem_C::UpdateChoiceIndexText(class FText CallFunc_MakeChoiceIndexText_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyMultipleChoiceStandardListItem_C", "UpdateChoiceIndexText");

	Params::UPlayerSurveyMultipleChoiceStandardListItem_C_UpdateChoiceIndexText_Params Parms{};

	Parms.CallFunc_MakeChoiceIndexText_Text = CallFunc_MakeChoiceIndexText_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.UpdateChoiceText
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerSurveyMultipleChoiceStandardListItem_C::UpdateChoiceText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyMultipleChoiceStandardListItem_C", "UpdateChoiceText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerSurveyMultipleChoiceStandardListItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyMultipleChoiceStandardListItem_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerSurveyMultipleChoiceStandardListItem_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyMultipleChoiceStandardListItem_C", "BP_OnSelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerSurveyMultipleChoiceStandardListItem_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyMultipleChoiceStandardListItem_C", "BP_OnDeselected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.SetChoiceData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPlayerSurveyQuestionChoiceValue                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UPlayerSurveyMultipleChoiceStandardListItem_C::SetChoiceData(const struct FFortPlayerSurveyQuestionChoice& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyMultipleChoiceStandardListItem_C", "SetChoiceData");

	Params::UPlayerSurveyMultipleChoiceStandardListItem_C_SetChoiceData_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyMultipleChoiceStandardListItem_C::SetIndex(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyMultipleChoiceStandardListItem_C", "SetIndex");

	Params::UPlayerSurveyMultipleChoiceStandardListItem_C_SetIndex_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerSurveyMultipleChoiceStandardListItem_C::OnCurrentTextStyleChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyMultipleChoiceStandardListItem_C", "OnCurrentTextStyleChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.ExecuteUbergraph_PlayerSurveyMultipleChoiceStandardListItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortPlayerSurveyQuestionChoiceK2Node_Event_Value_1                                             (None)
// int32                              K2Node_Event_Value                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyMultipleChoiceStandardListItem_C::ExecuteUbergraph_PlayerSurveyMultipleChoiceStandardListItem(int32 EntryPoint, const struct FFortPlayerSurveyQuestionChoice& K2Node_Event_Value_1, int32 K2Node_Event_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyMultipleChoiceStandardListItem_C", "ExecuteUbergraph_PlayerSurveyMultipleChoiceStandardListItem");

	Params::UPlayerSurveyMultipleChoiceStandardListItem_C_ExecuteUbergraph_PlayerSurveyMultipleChoiceStandardListItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Value_1 = K2Node_Event_Value_1;
	Parms.K2Node_Event_Value = K2Node_Event_Value;

	UObject::ProcessEvent(Func, &Parms);

}

}


