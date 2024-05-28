#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0x380 - 0x288)
// WidgetBlueprintGeneratedClass PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C
class UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C : public UFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonActionWidget*                   Action_ActionDisplay;                              // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDynamicEntryBox*                      ChoicesEntryBox;                                   // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonHierarchicalScrollBox*          ChoicesScrollBox;                                  // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               DummyButton;                                       // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SelectionCountTextBlock;                           // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_ActionDisplay;                                // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UCommonButton*>                 ChoiceButtons;                                     // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FText                                  Text_Subtitle;                                     // 0x2D0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Text_SelectionCount_NoLimit;                       // 0x2E8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Text_SelectionCount_MinLimit;                      // 0x300(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Text_SelectionCount_MaxLimit;                      // 0x318(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                SelectionCountStyle_Valid;                         // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                SelectionCountStyle_Invalid;                       // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Text_ActionDisplay_ToggleOff;                      // 0x340(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Text_ActionDisplay_ToggleOn;                       // 0x358(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                ActionDisplayStyle_CannotToggle;                   // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ActionDisplayStyle_CanToggle;                      // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C* GetDefaultObj();

	void UpdateActionDisplay(bool bWillSelect, bool bCanToggle, const struct FFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusInfo& FocusInfo, bool CallFunc_IsChoiceSelected_ReturnValue, bool CallFunc_CanToggleChoice_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Variable, class FText K2Node_Select_Default, bool Temp_bool_Variable_1, const struct FFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusInfo& CallFunc_GetFocusInfo_ReturnValue, class UClass* K2Node_Select_Default_1);
	void UpdateQuestionAnswerDisplay();
	void UpdateValidDisplay(bool CurrentAnswerValid, bool Temp_bool_Variable, bool CallFunc_IsCurrentAnswerValid_ReturnValue, class UClass* K2Node_Select_Default);
	void UpdateSelectionCountText(class FText TextFormatToUse, int32 MaxNumAnswers, int32 MinNumAnswers, class UFortPlayerSurveyQuestionMultipleSelection* CurrentQuestion, int32 NumSelected, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue_1, class FText K2Node_Select_Default, int32 CallFunc_TryGetMaxNumAnswers_OutMaxNumAnswers, bool CallFunc_TryGetMaxNumAnswers_ReturnValue, class UFortPlayerSurveyQuestionMultipleSelection* CallFunc_GetCurrentQuestion_ReturnValue, int32 CallFunc_GetNumChoicesSelected_ReturnValue);
	void HandlePlayerRequestToggleChoice(int32 Index, bool CallFunc_IsChoiceSelected_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void ScrollSelectedItemIntoView(bool FallBackToDefault, bool AnimateScroll, bool OverrideScrollDestination, class UWidget* WidgetToFocus, class UWidget* DefaultFocusedWidget, enum class EDescendantScrollDestination Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_1, enum class EDescendantScrollDestination K2Node_Select_Default, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UWidget* CallFunc_GetDefaultFocusedWidget_ReturnValue, class UWidget* CallFunc_GetDefaultFocusedWidgetPostDummy_Widget);
	void UpdateEntryBoxContents(class UWidget* ChoiceWidget, class UFortPlayerSurveyQuestionMultipleSelection* CurrentQuestion, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IPlayerSurveyMultipleChoiceListItemWidgetInterface_C> K2Node_DynamicCast_AsPlayer_Survey_Multiple_Choice_List_Item_Widget_Interface, bool K2Node_DynamicCast_bSuccess, class UCommonButton* K2Node_DynamicCast_AsCommon_Button, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FFortPlayerSurveyQuestionChoice& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UFortPlayerSurveyQuestionMultipleSelection* CallFunc_GetCurrentQuestion_ReturnValue, class UUserWidget* CallFunc_BP_CreateEntry_ReturnValue);
	void GetDefaultInitialChoiceIndex(int32* Index);
	void GetDefaultFocusedWidgetPostDummy(enum class EUINavigation Navigation, class UWidget** Widget, int32 Index, int32 CallFunc_GetDefaultInitialChoiceIndex_Index, TArray<class UUserWidget*>& CallFunc_GetAllEntries_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item);
	class FText GetSubtitleText();
	void HandlePlayerRequestAnswer(TArray<struct FFortPlayerSurveyAnswerMultipleSelectionSingleAnswer>& AnswerChoices, const struct FTimespan& CallFunc_GetStopwatchTime_ReturnValue, const struct FFortPlayerSurveyAnswerMultipleSelection& K2Node_MakeStruct_FortPlayerSurveyAnswerMultipleSelection);
	class UWidget* GetDefaultFocusedWidget(int32 DefaultIndex, class UWidget* TargetWidget, int32 SelectedIndex, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetCurrentAnswer_bOutIsSet, const struct FFortPlayerSurveyAnswerMultipleSelection& CallFunc_GetCurrentAnswer_OutAnswer);
	void Construct();
	void HandleCommitCurrentAnswer();
	void HandleAnswerChanged(struct FFortPlayerSurveyAnswerContainerChangeEventInfo& EventInfo);
	void HandleQuestionChanged();
	void HandleButtonClicked(int32 ButtonIndex);
	void HandleFocusChanged();
	void ExecuteUbergraph_PlayerSurveyPanelContentsAnswerMultipleSelectionWidget(int32 EntryPoint, bool CallFunc_GetCurrentAnswer_bOutIsSet, const struct FFortPlayerSurveyAnswerMultipleSelection& CallFunc_GetCurrentAnswer_OutAnswer, const struct FFortPlayerSurveyAnswerContainerChangeEventInfo& K2Node_Event_EventInfo, int32 K2Node_Event_ButtonIndex, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue);
};

}


