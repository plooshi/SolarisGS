#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x290 - 0x248)
// WidgetBlueprintGeneratedClass PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C
class UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C : public UFortPlayerSurveyFreeFormTextAnswerWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UMultiLineEditableTextBox*             EntryTextBox;                                      // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      LimitsTextBlock;                                   // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bIgnoreAnswerChange;                               // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5ABE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Text_Subtitle;                                     // 0x268(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                LimitsStyle_Normal;                                // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                LimitsStyle_Overflow;                              // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C* GetDefaultObj();

	class FText GetSubtitleText();
	void UpdateLimitsText(int32 AnswerLength, bool IsOverflowing, class UFortPlayerSurveyQuestionFreeFormText* CurrentQuestion, bool ShouldShowLimits, int32 MaxAnswerLength, class FText LimitsText, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_Greater_IntInt_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable_1, class UClass* K2Node_Select_Default_1, bool CallFunc_GetCurrentAnswer_bOutIsSet, const struct FFortPlayerSurveyAnswerFreeFormText& CallFunc_GetCurrentAnswer_OutAnswer, class UFortPlayerSurveyQuestionFreeFormText* CallFunc_GetCurrentQuestion_ReturnValue, int32 CallFunc_Len_ReturnValue);
	class UWidget* GetDefaultFocusedWidget();
	void HandlePlayerEnterAnswer(const class FString& AnswerString, bool Temp_bool_Variable, const struct FTimespan& CallFunc_GetStopwatchTime_ReturnValue, const struct FFortPlayerSurveyAnswerFreeFormText& K2Node_MakeStruct_FortPlayerSurveyAnswerFreeFormText);
	void UpdateHintText(class FText HintText, class UFortPlayerSurveyQuestionFreeFormText* Question, bool CallFunc_IsValid_ReturnValue, class UFortPlayerSurveyQuestionFreeFormText* CallFunc_GetCurrentQuestion_ReturnValue);
	void UpdateEntryText(bool CallFunc_GetCurrentAnswer_bOutIsSet, const struct FFortPlayerSurveyAnswerFreeFormText& CallFunc_GetCurrentAnswer_OutAnswer, class FText CallFunc_Conv_StringToText_ReturnValue);
	void Construct();
	void BndEvt__EntryTextBox_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void BndEvt__EntryTextBox_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void HandleAnswerChanged(struct FFortPlayerSurveyAnswerContainerChangeEventInfo& EventInfo);
	void HandleCommitCurrentAnswer();
	void HandleQuestionChanged();
	void ExecuteUbergraph_PlayerSurveyPanelContentsAnswerFreeFormTextWidget(int32 EntryPoint, class FText K2Node_ComponentBoundEvent_Text_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, const struct FFortPlayerSurveyAnswerContainerChangeEventInfo& K2Node_Event_EventInfo, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_2);
};

}


