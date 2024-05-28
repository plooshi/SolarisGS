#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C
// (None)

class UClass* UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C");

	return Clss;
}


// PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.Default__PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C* UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C::GetDefaultObj()
{
	static class UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C*>(UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.ScrollSelectedItemIntoView
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

void UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C::ScrollSelectedItemIntoView(bool FallBackToDefault, bool AnimateScroll, bool OverrideScrollDestination, class UWidget* WidgetToFocus, class UWidget* DefaultFocusedWidget, enum class EDescendantScrollDestination Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_1, enum class EDescendantScrollDestination K2Node_Select_Default, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UWidget* CallFunc_GetDefaultFocusedWidget_ReturnValue, class UWidget* CallFunc_GetDefaultFocusedWidgetPostDummy_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C", "ScrollSelectedItemIntoView");

	Params::UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C_ScrollSelectedItemIntoView_Params Parms{};

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


// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.UpdateEntryBoxContents
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ChoiceWidget                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerSurveyQuestionMultipleChoice*CurrentQuestion                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IPlayerSurveyMultipleChoiceListItemWidgetInterface_C>K2Node_DynamicCast_AsPlayer_Survey_Multiple_Choice_List_Item_Widget_Interface(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_DynamicCast_AsCommon_Button                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortPlayerSurveyQuestionChoiceCallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerSurveyQuestionMultipleChoice*CallFunc_GetCurrentQuestion_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_BP_CreateEntry_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C::UpdateEntryBoxContents(class UWidget* ChoiceWidget, class UFortPlayerSurveyQuestionMultipleChoice* CurrentQuestion, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IPlayerSurveyMultipleChoiceListItemWidgetInterface_C> K2Node_DynamicCast_AsPlayer_Survey_Multiple_Choice_List_Item_Widget_Interface, bool K2Node_DynamicCast_bSuccess, class UCommonButton* K2Node_DynamicCast_AsCommon_Button, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FFortPlayerSurveyQuestionChoice& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UFortPlayerSurveyQuestionMultipleChoice* CallFunc_GetCurrentQuestion_ReturnValue, class UUserWidget* CallFunc_BP_CreateEntry_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C", "UpdateEntryBoxContents");

	Params::UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C_UpdateEntryBoxContents_Params Parms{};

	Parms.ChoiceWidget = ChoiceWidget;
	Parms.CurrentQuestion = CurrentQuestion;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Survey_Multiple_Choice_List_Item_Widget_Interface = K2Node_DynamicCast_AsPlayer_Survey_Multiple_Choice_List_Item_Widget_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsCommon_Button = K2Node_DynamicCast_AsCommon_Button;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCurrentQuestion_ReturnValue = CallFunc_GetCurrentQuestion_ReturnValue;
	Parms.CallFunc_BP_CreateEntry_ReturnValue = CallFunc_BP_CreateEntry_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.GetDefaultInitialChoiceIndex
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C::GetDefaultInitialChoiceIndex(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C", "GetDefaultInitialChoiceIndex");

	Params::UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C_GetDefaultInitialChoiceIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.GetDefaultFocusedWidgetPostDummy
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDefaultInitialChoiceIndex_Index                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetAllEntries_ReturnValue                               (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C::GetDefaultFocusedWidgetPostDummy(enum class EUINavigation Navigation, class UWidget** Widget, int32 Index, int32 CallFunc_GetDefaultInitialChoiceIndex_Index, TArray<class UUserWidget*>& CallFunc_GetAllEntries_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C", "GetDefaultFocusedWidgetPostDummy");

	Params::UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C_GetDefaultFocusedWidgetPostDummy_Params Parms{};

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


// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.GetSubtitleText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C::GetSubtitleText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C", "GetSubtitleText");

	Params::UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C_GetSubtitleText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.HandlePlayerRequestAnswer
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AnswerIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_GetStopwatchTime_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFortPlayerSurveyAnswerMultipleChoiceK2Node_MakeStruct_FortPlayerSurveyAnswerMultipleChoice           (NoDestructor)

void UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C::HandlePlayerRequestAnswer(int32 AnswerIndex, const struct FTimespan& CallFunc_GetStopwatchTime_ReturnValue, const struct FFortPlayerSurveyAnswerMultipleChoice& K2Node_MakeStruct_FortPlayerSurveyAnswerMultipleChoice)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C", "HandlePlayerRequestAnswer");

	Params::UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C_HandlePlayerRequestAnswer_Params Parms{};

	Parms.AnswerIndex = AnswerIndex;
	Parms.CallFunc_GetStopwatchTime_ReturnValue = CallFunc_GetStopwatchTime_ReturnValue;
	Parms.K2Node_MakeStruct_FortPlayerSurveyAnswerMultipleChoice = K2Node_MakeStruct_FortPlayerSurveyAnswerMultipleChoice;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DefaultIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     TargetWidget                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SelectedIndex                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCurrentAnswer_bOutIsSet                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortPlayerSurveyAnswerMultipleChoiceCallFunc_GetCurrentAnswer_OutAnswer                              (NoDestructor)
// class UCommonButton*               CallFunc_GetButtonAtIndex_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C::GetDefaultFocusedWidget(int32 DefaultIndex, class UWidget* TargetWidget, int32 SelectedIndex, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetCurrentAnswer_bOutIsSet, const struct FFortPlayerSurveyAnswerMultipleChoice& CallFunc_GetCurrentAnswer_OutAnswer, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C", "GetDefaultFocusedWidget");

	Params::UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C_GetDefaultFocusedWidget_Params Parms{};

	Parms.DefaultIndex = DefaultIndex;
	Parms.TargetWidget = TargetWidget;
	Parms.SelectedIndex = SelectedIndex;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentAnswer_bOutIsSet = CallFunc_GetCurrentAnswer_bOutIsSet;
	Parms.CallFunc_GetCurrentAnswer_OutAnswer = CallFunc_GetCurrentAnswer_OutAnswer;
	Parms.CallFunc_GetButtonAtIndex_ReturnValue = CallFunc_GetButtonAtIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.HandleCommitCurrentAnswer
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C::HandleCommitCurrentAnswer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C", "HandleCommitCurrentAnswer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.HandleAnswerChanged
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPlayerSurveyAnswerContainerChangeEventInfoEventInfo                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)

void UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C::HandleAnswerChanged(struct FFortPlayerSurveyAnswerContainerChangeEventInfo& EventInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C", "HandleAnswerChanged");

	Params::UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C_HandleAnswerChanged_Params Parms{};

	Parms.EventInfo = EventInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.HandleQuestionChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C::HandleQuestionChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C", "HandleQuestionChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.HandleButtonClicked
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              ButtonIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C::HandleButtonClicked(int32 ButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C", "HandleButtonClicked");

	Params::UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C_HandleButtonClicked_Params Parms{};

	Parms.ButtonIndex = ButtonIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.HandleButtonFocused
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              ButtonIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C::HandleButtonFocused(int32 ButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C", "HandleButtonFocused");

	Params::UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C_HandleButtonFocused_Params Parms{};

	Parms.ButtonIndex = ButtonIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.ExecuteUbergraph_PlayerSurveyPanelContentsAnswerMultipleChoiceWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentAnswer_bOutIsSet                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortPlayerSurveyAnswerMultipleChoiceCallFunc_GetCurrentAnswer_OutAnswer                              (NoDestructor)
// struct FFortPlayerSurveyAnswerContainerChangeEventInfoK2Node_Event_EventInfo                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_ButtonIndex_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_ButtonIndex                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C::ExecuteUbergraph_PlayerSurveyPanelContentsAnswerMultipleChoiceWidget(int32 EntryPoint, bool CallFunc_GetCurrentAnswer_bOutIsSet, const struct FFortPlayerSurveyAnswerMultipleChoice& CallFunc_GetCurrentAnswer_OutAnswer, const struct FFortPlayerSurveyAnswerContainerChangeEventInfo& K2Node_Event_EventInfo, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 K2Node_Event_ButtonIndex_1, int32 K2Node_Event_ButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C", "ExecuteUbergraph_PlayerSurveyPanelContentsAnswerMultipleChoiceWidget");

	Params::UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C_ExecuteUbergraph_PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCurrentAnswer_bOutIsSet = CallFunc_GetCurrentAnswer_bOutIsSet;
	Parms.CallFunc_GetCurrentAnswer_OutAnswer = CallFunc_GetCurrentAnswer_OutAnswer;
	Parms.K2Node_Event_EventInfo = K2Node_Event_EventInfo;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_ButtonIndex_1 = K2Node_Event_ButtonIndex_1;
	Parms.K2Node_Event_ButtonIndex = K2Node_Event_ButtonIndex;

	UObject::ProcessEvent(Func, &Parms);

}

}


