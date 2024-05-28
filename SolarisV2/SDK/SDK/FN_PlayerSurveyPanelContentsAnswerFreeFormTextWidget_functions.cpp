#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C
// (None)

class UClass* UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C");

	return Clss;
}


// PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C PlayerSurveyPanelContentsAnswerFreeFormTextWidget.Default__PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C* UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::GetDefaultObj()
{
	static class UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C*>(UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.GetSubtitleText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::GetSubtitleText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C", "GetSubtitleText");

	Params::UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C_GetSubtitleText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.UpdateLimitsText
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AnswerLength                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsOverflowing                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPlayerSurveyQuestionFreeFormText*CurrentQuestion                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShouldShowLimits                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              MaxAnswerLength                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        LimitsText                                                       (Edit, BlueprintVisible)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentAnswer_bOutIsSet                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortPlayerSurveyAnswerFreeFormTextCallFunc_GetCurrentAnswer_OutAnswer                              (None)
// class UFortPlayerSurveyQuestionFreeFormText*CallFunc_GetCurrentQuestion_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::UpdateLimitsText(int32 AnswerLength, bool IsOverflowing, class UFortPlayerSurveyQuestionFreeFormText* CurrentQuestion, bool ShouldShowLimits, int32 MaxAnswerLength, class FText LimitsText, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_Greater_IntInt_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable_1, class UClass* K2Node_Select_Default_1, bool CallFunc_GetCurrentAnswer_bOutIsSet, const struct FFortPlayerSurveyAnswerFreeFormText& CallFunc_GetCurrentAnswer_OutAnswer, class UFortPlayerSurveyQuestionFreeFormText* CallFunc_GetCurrentQuestion_ReturnValue, int32 CallFunc_Len_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C", "UpdateLimitsText");

	Params::UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C_UpdateLimitsText_Params Parms{};

	Parms.AnswerLength = AnswerLength;
	Parms.IsOverflowing = IsOverflowing;
	Parms.CurrentQuestion = CurrentQuestion;
	Parms.ShouldShowLimits = ShouldShowLimits;
	Parms.MaxAnswerLength = MaxAnswerLength;
	Parms.LimitsText = LimitsText;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetCurrentAnswer_bOutIsSet = CallFunc_GetCurrentAnswer_bOutIsSet;
	Parms.CallFunc_GetCurrentAnswer_OutAnswer = CallFunc_GetCurrentAnswer_OutAnswer;
	Parms.CallFunc_GetCurrentQuestion_ReturnValue = CallFunc_GetCurrentQuestion_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::GetDefaultFocusedWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C", "GetDefaultFocusedWidget");

	Params::UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C_GetDefaultFocusedWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.HandlePlayerEnterAnswer
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      AnswerString                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimespan                   CallFunc_GetStopwatchTime_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFortPlayerSurveyAnswerFreeFormTextK2Node_MakeStruct_FortPlayerSurveyAnswerFreeFormText             (None)

void UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::HandlePlayerEnterAnswer(const class FString& AnswerString, bool Temp_bool_Variable, const struct FTimespan& CallFunc_GetStopwatchTime_ReturnValue, const struct FFortPlayerSurveyAnswerFreeFormText& K2Node_MakeStruct_FortPlayerSurveyAnswerFreeFormText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C", "HandlePlayerEnterAnswer");

	Params::UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C_HandlePlayerEnterAnswer_Params Parms{};

	Parms.AnswerString = AnswerString;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetStopwatchTime_ReturnValue = CallFunc_GetStopwatchTime_ReturnValue;
	Parms.K2Node_MakeStruct_FortPlayerSurveyAnswerFreeFormText = K2Node_MakeStruct_FortPlayerSurveyAnswerFreeFormText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.UpdateHintText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        HintText                                                         (Edit, BlueprintVisible)
// class UFortPlayerSurveyQuestionFreeFormText*Question                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPlayerSurveyQuestionFreeFormText*CallFunc_GetCurrentQuestion_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::UpdateHintText(class FText HintText, class UFortPlayerSurveyQuestionFreeFormText* Question, bool CallFunc_IsValid_ReturnValue, class UFortPlayerSurveyQuestionFreeFormText* CallFunc_GetCurrentQuestion_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C", "UpdateHintText");

	Params::UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C_UpdateHintText_Params Parms{};

	Parms.HintText = HintText;
	Parms.Question = Question;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentQuestion_ReturnValue = CallFunc_GetCurrentQuestion_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.UpdateEntryText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetCurrentAnswer_bOutIsSet                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortPlayerSurveyAnswerFreeFormTextCallFunc_GetCurrentAnswer_OutAnswer                              (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::UpdateEntryText(bool CallFunc_GetCurrentAnswer_bOutIsSet, const struct FFortPlayerSurveyAnswerFreeFormText& CallFunc_GetCurrentAnswer_OutAnswer, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C", "UpdateEntryText");

	Params::UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C_UpdateEntryText_Params Parms{};

	Parms.CallFunc_GetCurrentAnswer_bOutIsSet = CallFunc_GetCurrentAnswer_bOutIsSet;
	Parms.CallFunc_GetCurrentAnswer_OutAnswer = CallFunc_GetCurrentAnswer_OutAnswer;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.BndEvt__EntryTextBox_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::BndEvt__EntryTextBox_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C", "BndEvt__EntryTextBox_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");

	Params::UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C_BndEvt__EntryTextBox_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.BndEvt__EntryTextBox_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::BndEvt__EntryTextBox_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C", "BndEvt__EntryTextBox_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C_BndEvt__EntryTextBox_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.HandleAnswerChanged
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPlayerSurveyAnswerContainerChangeEventInfoEventInfo                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)

void UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::HandleAnswerChanged(struct FFortPlayerSurveyAnswerContainerChangeEventInfo& EventInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C", "HandleAnswerChanged");

	Params::UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C_HandleAnswerChanged_Params Parms{};

	Parms.EventInfo = EventInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.HandleCommitCurrentAnswer
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::HandleCommitCurrentAnswer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C", "HandleCommitCurrentAnswer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.HandleQuestionChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::HandleQuestionChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C", "HandleQuestionChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.ExecuteUbergraph_PlayerSurveyPanelContentsAnswerFreeFormTextWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text_1                                (ConstParm)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortPlayerSurveyAnswerContainerChangeEventInfoK2Node_Event_EventInfo                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)

void UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::ExecuteUbergraph_PlayerSurveyPanelContentsAnswerFreeFormTextWidget(int32 EntryPoint, class FText K2Node_ComponentBoundEvent_Text_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, const struct FFortPlayerSurveyAnswerContainerChangeEventInfo& K2Node_Event_EventInfo, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C", "ExecuteUbergraph_PlayerSurveyPanelContentsAnswerFreeFormTextWidget");

	Params::UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C_ExecuteUbergraph_PlayerSurveyPanelContentsAnswerFreeFormTextWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Text_1 = K2Node_ComponentBoundEvent_Text_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.K2Node_Event_EventInfo = K2Node_Event_EventInfo;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


