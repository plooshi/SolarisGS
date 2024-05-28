#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0xB80 - 0xB40)
// WidgetBlueprintGeneratedClass PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C
class UPlayerSurveyMultipleChoiceStandardListItem_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB40(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortCheckbox_C*                       CheckBox;                                          // 0xB48(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_Choice;                                       // 0xB50(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_Number;                                       // 0xB58(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        ChoiceIndex;                                       // 0xB60(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4AD5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortPlayerSurveyQuestionChoice       ChoiceData;                                        // 0xB68(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UPlayerSurveyMultipleChoiceStandardListItem_C* GetDefaultObj();

	void UpdateTextStyle(class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue, class UCommonTextStyle* CallFunc_GetCurrentTextStyle_ReturnValue, const struct FLinearColor& CallFunc_GetColor_OutColor);
	void UpdateCheckBox(bool CallFunc_GetSelected_ReturnValue);
	void MakeChoiceIndexText(int32 Index, class FText* Text, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void UpdateChoiceIndexText(class FText CallFunc_MakeChoiceIndexText_Text);
	void UpdateChoiceText();
	void Construct();
	void BP_OnSelected();
	void BP_OnDeselected();
	void SetChoiceData(const struct FFortPlayerSurveyQuestionChoice& Value);
	void SetIndex(int32 Value);
	void OnCurrentTextStyleChanged();
	void ExecuteUbergraph_PlayerSurveyMultipleChoiceStandardListItem(int32 EntryPoint, const struct FFortPlayerSurveyQuestionChoice& K2Node_Event_Value_1, int32 K2Node_Event_Value);
};

}


