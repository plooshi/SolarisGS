#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x2C0 - 0x278)
// WidgetBlueprintGeneratedClass PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C
class UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C : public UFortPlayerSurveyButtonGroupMultipleChoiceAnswerWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UDynamicEntryBox*                      ChoicesEntryBox;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonHierarchicalScrollBox*          ChoicesScrollBox;                                  // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               DummyButton;                                       // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UCommonButton*>                 ChoiceButtons;                                     // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FText                                  Text_Subtitle;                                     // 0x2A8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C* GetDefaultObj();

	void ScrollSelectedItemIntoView(bool FallBackToDefault, bool AnimateScroll, bool OverrideScrollDestination, class UWidget* WidgetToFocus, class UWidget* DefaultFocusedWidget, enum class EDescendantScrollDestination Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_1, enum class EDescendantScrollDestination K2Node_Select_Default, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UWidget* CallFunc_GetDefaultFocusedWidget_ReturnValue, class UWidget* CallFunc_GetDefaultFocusedWidgetPostDummy_Widget);
	void UpdateEntryBoxContents(class UWidget* ChoiceWidget, class UFortPlayerSurveyQuestionMultipleChoice* CurrentQuestion, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IPlayerSurveyMultipleChoiceListItemWidgetInterface_C> K2Node_DynamicCast_AsPlayer_Survey_Multiple_Choice_List_Item_Widget_Interface, bool K2Node_DynamicCast_bSuccess, class UCommonButton* K2Node_DynamicCast_AsCommon_Button, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FFortPlayerSurveyQuestionChoice& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UFortPlayerSurveyQuestionMultipleChoice* CallFunc_GetCurrentQuestion_ReturnValue, class UUserWidget* CallFunc_BP_CreateEntry_ReturnValue);
	void GetDefaultInitialChoiceIndex(int32* Index);
	void GetDefaultFocusedWidgetPostDummy(enum class EUINavigation Navigation, class UWidget** Widget, int32 Index, int32 CallFunc_GetDefaultInitialChoiceIndex_Index, TArray<class UUserWidget*>& CallFunc_GetAllEntries_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item);
	class FText GetSubtitleText();
	void HandlePlayerRequestAnswer(int32 AnswerIndex, const struct FTimespan& CallFunc_GetStopwatchTime_ReturnValue, const struct FFortPlayerSurveyAnswerMultipleChoice& K2Node_MakeStruct_FortPlayerSurveyAnswerMultipleChoice);
	class UWidget* GetDefaultFocusedWidget(int32 DefaultIndex, class UWidget* TargetWidget, int32 SelectedIndex, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetCurrentAnswer_bOutIsSet, const struct FFortPlayerSurveyAnswerMultipleChoice& CallFunc_GetCurrentAnswer_OutAnswer, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue);
	void Construct();
	void HandleCommitCurrentAnswer();
	void HandleAnswerChanged(struct FFortPlayerSurveyAnswerContainerChangeEventInfo& EventInfo);
	void HandleQuestionChanged();
	void HandleButtonClicked(int32 ButtonIndex);
	void HandleButtonFocused(int32 ButtonIndex);
	void ExecuteUbergraph_PlayerSurveyPanelContentsAnswerMultipleChoiceWidget(int32 EntryPoint, bool CallFunc_GetCurrentAnswer_bOutIsSet, const struct FFortPlayerSurveyAnswerMultipleChoice& CallFunc_GetCurrentAnswer_OutAnswer, const struct FFortPlayerSurveyAnswerContainerChangeEventInfo& K2Node_Event_EventInfo, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 K2Node_Event_ButtonIndex_1, int32 K2Node_Event_ButtonIndex);
};

}


