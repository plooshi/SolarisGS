#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C
// (None)

class UClass* UPlayerSurveyPanelContentsAnswerRatingWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerSurveyPanelContentsAnswerRatingWidget_C");

	return Clss;
}


// PlayerSurveyPanelContentsAnswerRatingWidget_C PlayerSurveyPanelContentsAnswerRatingWidget.Default__PlayerSurveyPanelContentsAnswerRatingWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerSurveyPanelContentsAnswerRatingWidget_C* UPlayerSurveyPanelContentsAnswerRatingWidget_C::GetDefaultObj()
{
	static class UPlayerSurveyPanelContentsAnswerRatingWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerSurveyPanelContentsAnswerRatingWidget_C*>(UPlayerSurveyPanelContentsAnswerRatingWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.GetSubtitleText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UPlayerSurveyPanelContentsAnswerRatingWidget_C::GetSubtitleText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerRatingWidget_C", "GetSubtitleText");

	Params::UPlayerSurveyPanelContentsAnswerRatingWidget_C_GetSubtitleText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandlePlayerRequestAnswer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AnswerIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_GetStopwatchTime_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFortPlayerSurveyAnswerMultipleChoiceK2Node_MakeStruct_FortPlayerSurveyAnswerMultipleChoice           (NoDestructor)

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::HandlePlayerRequestAnswer(int32 AnswerIndex, const struct FTimespan& CallFunc_GetStopwatchTime_ReturnValue, const struct FFortPlayerSurveyAnswerMultipleChoice& K2Node_MakeStruct_FortPlayerSurveyAnswerMultipleChoice)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerRatingWidget_C", "HandlePlayerRequestAnswer");

	Params::UPlayerSurveyPanelContentsAnswerRatingWidget_C_HandlePlayerRequestAnswer_Params Parms{};

	Parms.AnswerIndex = AnswerIndex;
	Parms.CallFunc_GetStopwatchTime_ReturnValue = CallFunc_GetStopwatchTime_ReturnValue;
	Parms.K2Node_MakeStruct_FortPlayerSurveyAnswerMultipleChoice = K2Node_MakeStruct_FortPlayerSurveyAnswerMultipleChoice;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.GetDefaultFocusedWidgetPostDummy
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UPlayerSurveyPanelContentsAnswerRatingWidget_C::GetDefaultFocusedWidgetPostDummy(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerRatingWidget_C", "GetDefaultFocusedWidgetPostDummy");

	Params::UPlayerSurveyPanelContentsAnswerRatingWidget_C_GetDefaultFocusedWidgetPostDummy_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.GetDefaultFocusedWidget
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

class UWidget* UPlayerSurveyPanelContentsAnswerRatingWidget_C::GetDefaultFocusedWidget(int32 DefaultIndex, class UWidget* TargetWidget, int32 SelectedIndex, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetCurrentAnswer_bOutIsSet, const struct FFortPlayerSurveyAnswerMultipleChoice& CallFunc_GetCurrentAnswer_OutAnswer, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerRatingWidget_C", "GetDefaultFocusedWidget");

	Params::UPlayerSurveyPanelContentsAnswerRatingWidget_C_GetDefaultFocusedWidget_Params Parms{};

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


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.UpdateRatingButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlayerSurveyQuestionMultipleChoice*CurrentQuestion                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumRatingButtons                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerSurveyQuestionMultipleChoice*CallFunc_GetCurrentQuestion_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::UpdateRatingButtons(class UFortPlayerSurveyQuestionMultipleChoice* CurrentQuestion, int32 NumRatingButtons, class UFortPlayerSurveyQuestionMultipleChoice* CallFunc_GetCurrentQuestion_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerRatingWidget_C", "UpdateRatingButtons");

	Params::UPlayerSurveyPanelContentsAnswerRatingWidget_C_UpdateRatingButtons_Params Parms{};

	Parms.CurrentQuestion = CurrentQuestion;
	Parms.NumRatingButtons = NumRatingButtons;
	Parms.CallFunc_GetCurrentQuestion_ReturnValue = CallFunc_GetCurrentQuestion_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlayerSurveyQuestionMultipleChoice*CurrentQuestion                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        MaxRatingText                                                    (Edit, BlueprintVisible)
// class FText                        MinRatingText                                                    (Edit, BlueprintVisible)
// class UFortPlayerSurveyQuestionMultipleChoice*CallFunc_GetCurrentQuestion_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::UpdateText(class UFortPlayerSurveyQuestionMultipleChoice* CurrentQuestion, class FText MaxRatingText, class FText MinRatingText, class UFortPlayerSurveyQuestionMultipleChoice* CallFunc_GetCurrentQuestion_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerRatingWidget_C", "UpdateText");

	Params::UPlayerSurveyPanelContentsAnswerRatingWidget_C_UpdateText_Params Parms{};

	Parms.CurrentQuestion = CurrentQuestion;
	Parms.MaxRatingText = MaxRatingText;
	Parms.MinRatingText = MinRatingText;
	Parms.CallFunc_GetCurrentQuestion_ReturnValue = CallFunc_GetCurrentQuestion_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerRatingWidget_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleButtonClicked
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              ButtonIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::HandleButtonClicked(int32 ButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerRatingWidget_C", "HandleButtonClicked");

	Params::UPlayerSurveyPanelContentsAnswerRatingWidget_C_HandleButtonClicked_Params Parms{};

	Parms.ButtonIndex = ButtonIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerRatingWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleButtonFocused
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              ButtonIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::HandleButtonFocused(int32 ButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerRatingWidget_C", "HandleButtonFocused");

	Params::UPlayerSurveyPanelContentsAnswerRatingWidget_C_HandleButtonFocused_Params Parms{};

	Parms.ButtonIndex = ButtonIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleCommitCurrentAnswer
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::HandleCommitCurrentAnswer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerRatingWidget_C", "HandleCommitCurrentAnswer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleQuestionChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::HandleQuestionChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerRatingWidget_C", "HandleQuestionChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.ExecuteUbergraph_PlayerSurveyPanelContentsAnswerRatingWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_ButtonIndex_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCommonButton*>       K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// int32                              K2Node_Event_ButtonIndex                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentAnswer_bOutIsSet                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortPlayerSurveyAnswerMultipleChoiceCallFunc_GetCurrentAnswer_OutAnswer                              (NoDestructor)

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::ExecuteUbergraph_PlayerSurveyPanelContentsAnswerRatingWidget(int32 EntryPoint, int32 K2Node_Event_ButtonIndex_1, TArray<class UCommonButton*>& K2Node_MakeArray_Array, int32 K2Node_Event_ButtonIndex, bool CallFunc_GetCurrentAnswer_bOutIsSet, const struct FFortPlayerSurveyAnswerMultipleChoice& CallFunc_GetCurrentAnswer_OutAnswer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerRatingWidget_C", "ExecuteUbergraph_PlayerSurveyPanelContentsAnswerRatingWidget");

	Params::UPlayerSurveyPanelContentsAnswerRatingWidget_C_ExecuteUbergraph_PlayerSurveyPanelContentsAnswerRatingWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ButtonIndex_1 = K2Node_Event_ButtonIndex_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_Event_ButtonIndex = K2Node_Event_ButtonIndex;
	Parms.CallFunc_GetCurrentAnswer_bOutIsSet = CallFunc_GetCurrentAnswer_bOutIsSet;
	Parms.CallFunc_GetCurrentAnswer_OutAnswer = CallFunc_GetCurrentAnswer_OutAnswer;

	UObject::ProcessEvent(Func, &Parms);

}

}


