#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x2B8 - 0x238)
// WidgetBlueprintGeneratedClass PlayerSurveyPanelContents.PlayerSurveyPanelContents_C
class UPlayerSurveyPanelContents_C : public UFortPlayerSurveyWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UIconTextButton_C*                     CancelButton;                                      // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     FinishButton;                                      // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       NextButtonSwitcher;                                // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     NextQuestionButton;                                // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerSurveyPanelAnswerSelectorWidget_C* PlayerSurveyPanelAnswerSelectorWidget;             // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      QuestionNumberTextBlock;                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        QuestionTextBlock;                                 // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            SubtitleTextBlock;                                 // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        SurveyTitleTextBlock;                              // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortPlayerSurveyQuestionSelector*     QuestionSelectorObj;                               // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Text_QuestionLabel;                                // 0x290(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	UMulticastInlineDelegateProperty_            OnSurveyEnded;                                     // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UPlayerSurveyPanelContents_C* GetDefaultObj();

	void UpdateSubtitleText(class FText CallFunc_GetSubtitleText_Text);
	void FocusDefaultWidgetForCurrentQuestion(class UWidget* CallFunc_GetDefaultFocusedWidget_Result, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void ShouldShowConfirmCancelDialog(bool* Result, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, const struct FFortPlayerSurveyDescription& CallFunc_GetDescription_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void ResetSurvey(TScriptInterface<class ISingleIndexSelectionModel> CallFunc_SetSelectedIndex_self_CastInput);
	void GetDefaultFocusedWidget(class UWidget** Result, class UWidget* CallFunc_GetDefaultFocusedWidget_Result);
	void HandleQuestionChanged(class UObject* Source);
	void UpdateQuestionText(class FText QuestionText, TScriptInterface<class IFortPlayerSurveyAnswerableQuestion> CallFunc_GetQuestion_self_CastInput, class UFortPlayerSurveyQuestion* CallFunc_GetQuestion_ReturnValue, class UFortPlayerSurveyQuestionStandardBase* K2Node_DynamicCast_AsFort_Player_Survey_Question_Standard_Base, bool K2Node_DynamicCast_bSuccess);
	void HandleAnswerChanged(class UObject* Source, struct FFortPlayerSurveyAnswerContainerChangeEventInfo& EventInfo);
	void UpdateNextButtonState(class UCommonButton* ActiveNextButton, bool HasMoreQuestions, bool HasAnsweredCurrentQuestion, bool Temp_bool_Variable, TScriptInterface<class IFortPlayerSurveyAnswerContainer> CallFunc_IsAnswerValid_self_CastInput, bool CallFunc_IsAnswerValid_ReturnValue, TScriptInterface<class ISingleIndexSelectionModel> CallFunc_CanMoveDelta_self_CastInput, enum class EIndexNavigationResult CallFunc_CanMoveDelta_ReturnValue, class UCommonButton* K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void HandleNumQuestionsChanged(class UObject* Source);
	void HandleNavigationStateChanged(class UObject* Source);
	void HandleIndexChanged(class UObject* Source);
	void FinishSurvey(enum class EFortPlayerSurveyFinishReason Reason, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UpdateSurveyDescription(class FText SurveyTitleText, const struct FFortPlayerSurveyDescription& CallFunc_GetDescription_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UpdateQuestionNumberLabel(class FText FormattedText, int32 NumQuestions, int32 QuestionIndex, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_BooleanAND_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, TScriptInterface<class ISingleIndexSelectionModel> CallFunc_GetNumItems_self_CastInput, int32 CallFunc_GetNumItems_ReturnValue, TScriptInterface<class ISingleIndexSelectionModel> CallFunc_GetSelectedIndex_self_CastInput, int32 CallFunc_GetSelectedIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void DialogResult_1F2955434D7A098B1B9CC2A074F61086(enum class EFortDialogResult Result, class FName ResultName);
	void Construct();
	void HandleSurveyChanged();
	void HandleQuestionsChanged(int32 Index);
	void OnInitialized();
	void BndEvt__NextQuestionButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__FinishButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void HandleDescriptionChanged();
	void ExecuteUbergraph_PlayerSurveyPanelContents(int32 EntryPoint, int32 K2Node_Event_Index, class UFortPlayerSurveyQuestionSelector* CallFunc_SpawnObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class ISingleIndexSelectionModel> CallFunc_TryMoveDelta_self_CastInput, enum class EIndexNavigationResult CallFunc_TryMoveDelta_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EFortDialogResult Temp_byte_Variable, TScriptInterface<class ISingleIndexSelectionModel> CallFunc_AddOnSelectedIndexChangedDelegate_self_CastInput, bool K2Node_SwitchEnum_CmpSuccess_1, class FName Temp_name_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TScriptInterface<class ISingleIndexSelectionModel> CallFunc_AddOnNavigationChangedDelegate_self_CastInput, TScriptInterface<class ISingleIndexSelectionModel> CallFunc_AddOnNumItemsChangedDelegate_self_CastInput, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, TScriptInterface<class IFortPlayerSurveyAnswerableQuestion> CallFunc_SetQA_Value_CastInput, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, TScriptInterface<class IFortPlayerSurveyAnswerContainer> CallFunc_AddOnAnswerChangedDelegate_self_CastInput, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, TScriptInterface<class IFortPlayerSurveyAnswerableQuestion> CallFunc_AddOnQuestionChangedDelegate_self_CastInput, bool CallFunc_ShouldShowConfirmCancelDialog_Result, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FFortPlayerSurveyDescription& CallFunc_GetDescription_ReturnValue, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void OnSurveyEnded__DelegateSignature();
};

}


