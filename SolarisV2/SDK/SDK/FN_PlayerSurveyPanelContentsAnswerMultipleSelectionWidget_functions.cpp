#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C
// (None)

class UClass* UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C");

	return Clss;
}


// PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.Default__PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C* UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C::GetDefaultObj()
{
	static class UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C*>(UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.UpdateActionDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bWillSelect                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bCanToggle                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusInfoFocusInfo                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsChoiceSelected_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanToggleChoice_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusInfoCallFunc_GetFocusInfo_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C::UpdateActionDisplay(bool bWillSelect, bool bCanToggle, const struct FFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusInfo& FocusInfo, bool CallFunc_IsChoiceSelected_ReturnValue, bool CallFunc_CanToggleChoice_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Variable, class FText K2Node_Select_Default, bool Temp_bool_Variable_1, const struct FFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusInfo& CallFunc_GetFocusInfo_ReturnValue, class UClass* K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C", "UpdateActionDisplay");

	Params::UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C_UpdateActionDisplay_Params Parms{};

	Parms.bWillSelect = bWillSelect;
	Parms.bCanToggle = bCanToggle;
	Parms.FocusInfo = FocusInfo;
	Parms.CallFunc_IsChoiceSelected_ReturnValue = CallFunc_IsChoiceSelected_ReturnValue;
	Parms.CallFunc_CanToggleChoice_ReturnValue = CallFunc_CanToggleChoice_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetFocusInfo_ReturnValue = CallFunc_GetFocusInfo_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.UpdateQuestionAnswerDisplay
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C::UpdateQuestionAnswerDisplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C", "UpdateQuestionAnswerDisplay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.UpdateValidDisplay
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CurrentAnswerValid                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCurrentAnswerValid_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C::UpdateValidDisplay(bool CurrentAnswerValid, bool Temp_bool_Variable, bool CallFunc_IsCurrentAnswerValid_ReturnValue, class UClass* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C", "UpdateValidDisplay");

	Params::UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C_UpdateValidDisplay_Params Parms{};

	Parms.CurrentAnswerValid = CurrentAnswerValid;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsCurrentAnswerValid_ReturnValue = CallFunc_IsCurrentAnswerValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.UpdateSelectionCountText
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        TextFormatToUse                                                  (Edit, BlueprintVisible)
// int32                              MaxNumAnswers                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MinNumAnswers                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerSurveyQuestionMultipleSelection*CurrentQuestion                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumSelected                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// int32                              CallFunc_TryGetMaxNumAnswers_OutMaxNumAnswers                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetMaxNumAnswers_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPlayerSurveyQuestionMultipleSelection*CallFunc_GetCurrentQuestion_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumChoicesSelected_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C::UpdateSelectionCountText(class FText TextFormatToUse, int32 MaxNumAnswers, int32 MinNumAnswers, class UFortPlayerSurveyQuestionMultipleSelection* CurrentQuestion, int32 NumSelected, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue_1, class FText K2Node_Select_Default, int32 CallFunc_TryGetMaxNumAnswers_OutMaxNumAnswers, bool CallFunc_TryGetMaxNumAnswers_ReturnValue, class UFortPlayerSurveyQuestionMultipleSelection* CallFunc_GetCurrentQuestion_ReturnValue, int32 CallFunc_GetNumChoicesSelected_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C", "UpdateSelectionCountText");

	Params::UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C_UpdateSelectionCountText_Params Parms{};

	Parms.TextFormatToUse = TextFormatToUse;
	Parms.MaxNumAnswers = MaxNumAnswers;
	Parms.MinNumAnswers = MinNumAnswers;
	Parms.CurrentQuestion = CurrentQuestion;
	Parms.NumSelected = NumSelected;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_TryGetMaxNumAnswers_OutMaxNumAnswers = CallFunc_TryGetMaxNumAnswers_OutMaxNumAnswers;
	Parms.CallFunc_TryGetMaxNumAnswers_ReturnValue = CallFunc_TryGetMaxNumAnswers_ReturnValue;
	Parms.CallFunc_GetCurrentQuestion_ReturnValue = CallFunc_GetCurrentQuestion_ReturnValue;
	Parms.CallFunc_GetNumChoicesSelected_ReturnValue = CallFunc_GetNumChoicesSelected_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.HandlePlayerRequestToggleChoice
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsChoiceSelected_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C::HandlePlayerRequestToggleChoice(int32 Index, bool CallFunc_IsChoiceSelected_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C", "HandlePlayerRequestToggleChoice");

	Params::UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C_HandlePlayerRequestToggleChoice_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_IsChoiceSelected_ReturnValue = CallFunc_IsChoiceSelected_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.ScrollSelectedItemIntoView
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FallBackToDefault                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AnimateScroll                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               OverrideScrollDestination                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     WidgetToFocus                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     DefaultFocusedWidget                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDescendantScrollDestinationTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EDescendantScrollDestinationK2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetDefaultFocusedWidget_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDefaultFocusedWidgetPostDummy_Widget                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C::ScrollSelectedItemIntoView(bool FallBackToDefault, bool AnimateScroll, bool OverrideScrollDestination, class UWidget* WidgetToFocus, class UWidget* DefaultFocusedWidget, enum class EDescendantScrollDestination Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_1, enum class EDescendantScrollDestination K2Node_Select_Default, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UWidget* CallFunc_GetDefaultFocusedWidget_ReturnValue, class UWidget* CallFunc_GetDefaultFocusedWidgetPostDummy_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C", "ScrollSelectedItemIntoView");

	Params::UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C_ScrollSelectedItemIntoView_Params Parms{};

	Parms.FallBackToDefault = FallBackToDefault;
	Parms.AnimateScroll = AnimateScroll;
	Parms.OverrideScrollDestination = OverrideScrollDestination;
	Parms.WidgetToFocus = WidgetToFocus;
	Parms.DefaultFocusedWidget = DefaultFocusedWidget;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetDefaultFocusedWidget_ReturnValue = CallFunc_GetDefaultFocusedWidget_ReturnValue;
	Parms.CallFunc_GetDefaultFocusedWidgetPostDummy_Widget = CallFunc_GetDefaultFocusedWidgetPostDummy_Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.UpdateEntryBoxContents
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ChoiceWidget                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerSurveyQuestionMultipleSelection*CurrentQuestion                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IPlayerSurveyMultipleChoiceListItemWidgetInterface_C>K2Node_DynamicCast_AsPlayer_Survey_Multiple_Choice_List_Item_Widget_Interface(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_DynamicCast_AsCommon_Button                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortPlayerSurveyQuestionChoiceCallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerSurveyQuestionMultipleSelection*CallFunc_GetCurrentQuestion_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_BP_CreateEntry_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C::UpdateEntryBoxContents(class UWidget* ChoiceWidget, class UFortPlayerSurveyQuestionMultipleSelection* CurrentQuestion, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IPlayerSurveyMultipleChoiceListItemWidgetInterface_C> K2Node_DynamicCast_AsPlayer_Survey_Multiple_Choice_List_Item_Widget_Interface, bool K2Node_DynamicCast_bSuccess, class UCommonButton* K2Node_DynamicCast_AsCommon_Button, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FFortPlayerSurveyQuestionChoice& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UFortPlayerSurveyQuestionMultipleSelection* CallFunc_GetCurrentQuestion_ReturnValue, class UUserWidget* CallFunc_BP_CreateEntry_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C", "UpdateEntryBoxContents");

	Params::UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C_UpdateEntryBoxContents_Params Parms{};

	Parms.ChoiceWidget = ChoiceWidget;
	Parms.CurrentQuestion = CurrentQuestion;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Survey_Multiple_Choice_List_Item_Widget_Interface = K2Node_DynamicCast_AsPlayer_Survey_Multiple_Choice_List_Item_Widget_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsCommon_Button = K2Node_DynamicCast_AsCommon_Button;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCurrentQuestion_ReturnValue = CallFunc_GetCurrentQuestion_ReturnValue;
	Parms.CallFunc_BP_CreateEntry_ReturnValue = CallFunc_BP_CreateEntry_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.GetDefaultInitialChoiceIndex
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C::GetDefaultInitialChoiceIndex(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C", "GetDefaultInitialChoiceIndex");

	Params::UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C_GetDefaultInitialChoiceIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.GetDefaultFocusedWidgetPostDummy
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDefaultInitialChoiceIndex_Index                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetAllEntries_ReturnValue                               (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C::GetDefaultFocusedWidgetPostDummy(enum class EUINavigation Navigation, class UWidget** Widget, int32 Index, int32 CallFunc_GetDefaultInitialChoiceIndex_Index, TArray<class UUserWidget*>& CallFunc_GetAllEntries_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C", "GetDefaultFocusedWidgetPostDummy");

	Params::UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C_GetDefaultFocusedWidgetPostDummy_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.Index = Index;
	Parms.CallFunc_GetDefaultInitialChoiceIndex_Index = CallFunc_GetDefaultInitialChoiceIndex_Index;
	Parms.CallFunc_GetAllEntries_ReturnValue = CallFunc_GetAllEntries_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.GetSubtitleText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C::GetSubtitleText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C", "GetSubtitleText");

	Params::UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C_GetSubtitleText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.HandlePlayerRequestAnswer
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortPlayerSurveyAnswerMultipleSelectionSingleAnswer>AnswerChoices                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FTimespan                   CallFunc_GetStopwatchTime_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFortPlayerSurveyAnswerMultipleSelectionK2Node_MakeStruct_FortPlayerSurveyAnswerMultipleSelection        (None)

void UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C::HandlePlayerRequestAnswer(TArray<struct FFortPlayerSurveyAnswerMultipleSelectionSingleAnswer>& AnswerChoices, const struct FTimespan& CallFunc_GetStopwatchTime_ReturnValue, const struct FFortPlayerSurveyAnswerMultipleSelection& K2Node_MakeStruct_FortPlayerSurveyAnswerMultipleSelection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C", "HandlePlayerRequestAnswer");

	Params::UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C_HandlePlayerRequestAnswer_Params Parms{};

	Parms.AnswerChoices = AnswerChoices;
	Parms.CallFunc_GetStopwatchTime_ReturnValue = CallFunc_GetStopwatchTime_ReturnValue;
	Parms.K2Node_MakeStruct_FortPlayerSurveyAnswerMultipleSelection = K2Node_MakeStruct_FortPlayerSurveyAnswerMultipleSelection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DefaultIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     TargetWidget                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SelectedIndex                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               CallFunc_GetButtonAtIndex_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCurrentAnswer_bOutIsSet                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortPlayerSurveyAnswerMultipleSelectionCallFunc_GetCurrentAnswer_OutAnswer                              (None)

class UWidget* UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C::GetDefaultFocusedWidget(int32 DefaultIndex, class UWidget* TargetWidget, int32 SelectedIndex, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetCurrentAnswer_bOutIsSet, const struct FFortPlayerSurveyAnswerMultipleSelection& CallFunc_GetCurrentAnswer_OutAnswer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C", "GetDefaultFocusedWidget");

	Params::UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C_GetDefaultFocusedWidget_Params Parms{};

	Parms.DefaultIndex = DefaultIndex;
	Parms.TargetWidget = TargetWidget;
	Parms.SelectedIndex = SelectedIndex;
	Parms.CallFunc_GetButtonAtIndex_ReturnValue = CallFunc_GetButtonAtIndex_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentAnswer_bOutIsSet = CallFunc_GetCurrentAnswer_bOutIsSet;
	Parms.CallFunc_GetCurrentAnswer_OutAnswer = CallFunc_GetCurrentAnswer_OutAnswer;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.HandleCommitCurrentAnswer
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C::HandleCommitCurrentAnswer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C", "HandleCommitCurrentAnswer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.HandleAnswerChanged
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPlayerSurveyAnswerContainerChangeEventInfoEventInfo                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)

void UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C::HandleAnswerChanged(struct FFortPlayerSurveyAnswerContainerChangeEventInfo& EventInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C", "HandleAnswerChanged");

	Params::UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C_HandleAnswerChanged_Params Parms{};

	Parms.EventInfo = EventInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.HandleQuestionChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C::HandleQuestionChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C", "HandleQuestionChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.HandleButtonClicked
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              ButtonIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C::HandleButtonClicked(int32 ButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C", "HandleButtonClicked");

	Params::UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C_HandleButtonClicked_Params Parms{};

	Parms.ButtonIndex = ButtonIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.HandleFocusChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C::HandleFocusChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C", "HandleFocusChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.ExecuteUbergraph_PlayerSurveyPanelContentsAnswerMultipleSelectionWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentAnswer_bOutIsSet                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortPlayerSurveyAnswerMultipleSelectionCallFunc_GetCurrentAnswer_OutAnswer                              (None)
// struct FFortPlayerSurveyAnswerContainerChangeEventInfoK2Node_Event_EventInfo                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_ButtonIndex                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               CallFunc_GetButtonAtIndex_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C::ExecuteUbergraph_PlayerSurveyPanelContentsAnswerMultipleSelectionWidget(int32 EntryPoint, bool CallFunc_GetCurrentAnswer_bOutIsSet, const struct FFortPlayerSurveyAnswerMultipleSelection& CallFunc_GetCurrentAnswer_OutAnswer, const struct FFortPlayerSurveyAnswerContainerChangeEventInfo& K2Node_Event_EventInfo, int32 K2Node_Event_ButtonIndex, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C", "ExecuteUbergraph_PlayerSurveyPanelContentsAnswerMultipleSelectionWidget");

	Params::UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C_ExecuteUbergraph_PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCurrentAnswer_bOutIsSet = CallFunc_GetCurrentAnswer_bOutIsSet;
	Parms.CallFunc_GetCurrentAnswer_OutAnswer = CallFunc_GetCurrentAnswer_OutAnswer;
	Parms.K2Node_Event_EventInfo = K2Node_Event_EventInfo;
	Parms.K2Node_Event_ButtonIndex = K2Node_Event_ButtonIndex;
	Parms.CallFunc_GetButtonAtIndex_ReturnValue = CallFunc_GetButtonAtIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


