#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C
// (None)

class UClass* UPlayerSurveyPanelAnswerSelectorWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerSurveyPanelAnswerSelectorWidget_C");

	return Clss;
}


// PlayerSurveyPanelAnswerSelectorWidget_C PlayerSurveyPanelAnswerSelectorWidget.Default__PlayerSurveyPanelAnswerSelectorWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerSurveyPanelAnswerSelectorWidget_C* UPlayerSurveyPanelAnswerSelectorWidget_C::GetDefaultObj()
{
	static class UPlayerSurveyPanelAnswerSelectorWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerSurveyPanelAnswerSelectorWidget_C*>(UPlayerSurveyPanelAnswerSelectorWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.GetCurrentQuestion
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UFortPlayerSurveyQuestion*   Question                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerSurveyQuestion*   QuestionValue                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerSurveyQuestion*   CallFunc_GetQuestion_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerSurveyPanelAnswerSelectorWidget_C::GetCurrentQuestion(class UFortPlayerSurveyQuestion** Question, class UFortPlayerSurveyQuestion* QuestionValue, class UFortPlayerSurveyQuestion* CallFunc_GetQuestion_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelAnswerSelectorWidget_C", "GetCurrentQuestion");

	Params::UPlayerSurveyPanelAnswerSelectorWidget_C_GetCurrentQuestion_Params Parms{};

	Parms.QuestionValue = QuestionValue;
	Parms.CallFunc_GetQuestion_ReturnValue = CallFunc_GetQuestion_ReturnValue;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Question != nullptr)
		*Question = Parms.Question;

}


// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.PropagateCurrentQuestion
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlayerSurveyQuestion*   CallFunc_GetCurrentQuestion_Question                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerSurveyPanelAnswerSelectorWidget_C::PropagateCurrentQuestion(class UFortPlayerSurveyQuestion* CallFunc_GetCurrentQuestion_Question, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelAnswerSelectorWidget_C", "PropagateCurrentQuestion");

	Params::UPlayerSurveyPanelAnswerSelectorWidget_C_PropagateCurrentQuestion_Params Parms{};

	Parms.CallFunc_GetCurrentQuestion_Question = CallFunc_GetCurrentQuestion_Question;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.GetSubtitleText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        Text                                                             (Parm, OutParm)
// class FText                        TextValue                                                        (Edit, BlueprintVisible)
// class FText                        CallFunc_GetSubtitleText_ReturnValue                             (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerSurveyPanelAnswerSelectorWidget_C::GetSubtitleText(class FText* Text, class FText TextValue, class FText CallFunc_GetSubtitleText_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelAnswerSelectorWidget_C", "GetSubtitleText");

	Params::UPlayerSurveyPanelAnswerSelectorWidget_C_GetSubtitleText_Params Parms{};

	Parms.TextValue = TextValue;
	Parms.CallFunc_GetSubtitleText_ReturnValue = CallFunc_GetSubtitleText_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.CommitCurrentAnswer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerSurveyPanelAnswerSelectorWidget_C::CommitCurrentAnswer(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelAnswerSelectorWidget_C", "CommitCurrentAnswer");

	Params::UPlayerSurveyPanelAnswerSelectorWidget_C_CommitCurrentAnswer_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.GetDefaultFocusedWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                     Result                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ResultValue                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDefaultFocusedWidget_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerSurveyPanelAnswerSelectorWidget_C::GetDefaultFocusedWidget(class UWidget** Result, class UWidget* ResultValue, class UWidget* CallFunc_GetDefaultFocusedWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelAnswerSelectorWidget_C", "GetDefaultFocusedWidget");

	Params::UPlayerSurveyPanelAnswerSelectorWidget_C_GetDefaultFocusedWidget_Params Parms{};

	Parms.ResultValue = ResultValue;
	Parms.CallFunc_GetDefaultFocusedWidget_ReturnValue = CallFunc_GetDefaultFocusedWidget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.SetCurrentChild
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlayerSurveyAnswerWidgetBase*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForcePropagateQuestion                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerSurveyPanelAnswerSelectorWidget_C::SetCurrentChild(class UFortPlayerSurveyAnswerWidgetBase* Widget, bool ForcePropagateQuestion, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelAnswerSelectorWidget_C", "SetCurrentChild");

	Params::UPlayerSurveyPanelAnswerSelectorWidget_C_SetCurrentChild_Params Parms{};

	Parms.Widget = Widget;
	Parms.ForcePropagateQuestion = ForcePropagateQuestion;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.UpdateCurrentChild
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ForcePropagateQuestion                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPlayerSurveyAnswerWidgetBase*NewChildWidget                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerSurveyQuestion*   Question                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortPlayerSurveyQuestionPresentationStyleCallFunc_GetPresentationStyle_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortPlayerSurveyQuestionTypeCallFunc_GetQuestionType_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetClassForSurvey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerSurveyAnswerWidgetBase*CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPlayerSurveyQuestion*   CallFunc_GetQuestion_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerSurveyPanelAnswerSelectorWidget_C::UpdateCurrentChild(bool ForcePropagateQuestion, class UFortPlayerSurveyAnswerWidgetBase* NewChildWidget, class UFortPlayerSurveyQuestion* Question, enum class EFortPlayerSurveyQuestionPresentationStyle CallFunc_GetPresentationStyle_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EFortPlayerSurveyQuestionType CallFunc_GetQuestionType_ReturnValue, class UClass* CallFunc_GetClassForSurvey_ReturnValue, class UFortPlayerSurveyAnswerWidgetBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UFortPlayerSurveyQuestion* CallFunc_GetQuestion_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelAnswerSelectorWidget_C", "UpdateCurrentChild");

	Params::UPlayerSurveyPanelAnswerSelectorWidget_C_UpdateCurrentChild_Params Parms{};

	Parms.ForcePropagateQuestion = ForcePropagateQuestion;
	Parms.NewChildWidget = NewChildWidget;
	Parms.Question = Question;
	Parms.CallFunc_GetPresentationStyle_ReturnValue = CallFunc_GetPresentationStyle_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetQuestionType_ReturnValue = CallFunc_GetQuestionType_ReturnValue;
	Parms.CallFunc_GetClassForSurvey_ReturnValue = CallFunc_GetClassForSurvey_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetQuestion_ReturnValue = CallFunc_GetQuestion_ReturnValue;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.InitSwitcherChildren
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanelAnswerSelectorWidget_C::InitSwitcherChildren()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelAnswerSelectorWidget_C", "InitSwitcherChildren");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.InitSwitcherChildrenLoop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortPlayerSurveyQuestionTypeQuestionType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortPlayerSurveyQuestionPresentationStylePresentationStyle                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      WidgetClass                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyPanelAnswerSelectorWidget_C::InitSwitcherChildrenLoop(enum class EFortPlayerSurveyQuestionType QuestionType, enum class EFortPlayerSurveyQuestionPresentationStyle PresentationStyle, class UClass* WidgetClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelAnswerSelectorWidget_C", "InitSwitcherChildrenLoop");

	Params::UPlayerSurveyPanelAnswerSelectorWidget_C_InitSwitcherChildrenLoop_Params Parms{};

	Parms.QuestionType = QuestionType;
	Parms.PresentationStyle = PresentationStyle;
	Parms.WidgetClass = WidgetClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanelAnswerSelectorWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelAnswerSelectorWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanelAnswerSelectorWidget_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelAnswerSelectorWidget_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.HandleQuestionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanelAnswerSelectorWidget_C::HandleQuestionChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelAnswerSelectorWidget_C", "HandleQuestionChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.ExecuteUbergraph_PlayerSurveyPanelAnswerSelectorWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortPlayerSurveyQuestionTypeK2Node_CustomEvent_QuestionType                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortPlayerSurveyQuestionPresentationStyleK2Node_CustomEvent_PresentationStyle                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_WidgetClass                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerSurveyAnswerWidgetBase*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerSurveyAnswerWidgetBase*CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UPlayerSurveyPanelAnswerSelectorWidget_C::ExecuteUbergraph_PlayerSurveyPanelAnswerSelectorWidget(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, enum class EFortPlayerSurveyQuestionType K2Node_CustomEvent_QuestionType, enum class EFortPlayerSurveyQuestionPresentationStyle K2Node_CustomEvent_PresentationStyle, class UClass* K2Node_CustomEvent_WidgetClass, class UFortPlayerSurveyAnswerWidgetBase* CallFunc_Create_ReturnValue, class UFortPlayerSurveyAnswerWidgetBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanelAnswerSelectorWidget_C", "ExecuteUbergraph_PlayerSurveyPanelAnswerSelectorWidget");

	Params::UPlayerSurveyPanelAnswerSelectorWidget_C_ExecuteUbergraph_PlayerSurveyPanelAnswerSelectorWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_CustomEvent_QuestionType = K2Node_CustomEvent_QuestionType;
	Parms.K2Node_CustomEvent_PresentationStyle = K2Node_CustomEvent_PresentationStyle;
	Parms.K2Node_CustomEvent_WidgetClass = K2Node_CustomEvent_WidgetClass;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


