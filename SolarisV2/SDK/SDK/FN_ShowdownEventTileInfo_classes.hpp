#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x6D8 - 0x5D8)
// WidgetBlueprintGeneratedClass ShowdownEventTileInfo.ShowdownEventTileInfo_C
class UShowdownEventTileInfo_C : public UFortShowdownDetailView
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FocusPin;                                          // 0x5E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      HideSocketShadow_Past;                             // 0x5E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      HideSocketShadow;                                  // 0x5F0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Focus;                                             // 0x5F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Focus_Ended;                                       // 0x600(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      TransitionSize;                                    // 0x608(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorder_Date;                                 // 0x610(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorder_Score;                                // 0x618(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_pts;                               // 0x620(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_EventPinState;                // 0x628(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_TimeFormat;                   // 0x630(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_TimeFormatTitle;              // 0x638(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Content_Score;                                     // 0x640(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      DateText;                                          // 0x648(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Lock;                                        // 0x650(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Socket;                                      // 0x658(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBoxPin;                                       // 0x660(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ScoreValue;                                        // 0x668(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownPin_C*                        ShowdownPin;                                       // 0x670(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 Switcher_EventWindowUnlockState;                   // 0x678(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TimeDescriptionText;                               // 0x680(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TimeDescriptionTextRelative;                       // 0x688(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_            SetEventState;                                     // 0x690(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsEnded;                                           // 0x6A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsPin;                                             // 0x6A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5922[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastInlineDelegateProperty_            SetDisplayInfo;                                    // 0x6A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UMaterialInstanceDynamic*              TextFontMaterial;                                  // 0x6B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              PointFontMaterial;                                 // 0x6C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_            MultiRoundSession;                                 // 0x6C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UShowdownEventTileInfo_C* GetDefaultObj();

	void RefreshDataBP();
	void EventAnimFocus(bool In);
	void EventStyleSocket();
	void EventAnimHover(bool In);
	void Construct();
	void EventColorize();
	void ExecuteUbergraph_ShowdownEventTileInfo(int32 EntryPoint, enum class EFortShowdownEventState CallFunc_GetEventPlayerParticipationState_ReturnValue, float Temp_float_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, enum class EFortShowdownEventState Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, enum class EFortEventWindowEligibility Temp_byte_Variable_1, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, enum class EFortEventWindowEligibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, enum class EFortEventWindowEligibility Temp_byte_Variable_7, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* Temp_object_Variable_2, class UMaterialInterface* Temp_object_Variable_3, float Temp_float_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_8, enum class ESlateVisibility Temp_byte_Variable_9, bool Temp_bool_Variable_1, class FText Temp_text_Variable_7, enum class ESlateVisibility K2Node_Select_Default, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, class FText Temp_text_Variable_12, float Temp_float_Variable_2, class FText Temp_text_Variable_13, class FText Temp_text_Variable_14, class FText Temp_text_Variable_15, class FText Temp_text_Variable_16, class FText Temp_text_Variable_17, bool Temp_bool_Variable_2, enum class EFortShowdownEventState Temp_byte_Variable_10, int32 Temp_int_Variable_4, class FText K2Node_Select_Default_1, int32 Temp_int_Variable_5, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, float Temp_float_Variable_3, bool Temp_bool_Variable_5, float Temp_float_Variable_4, bool Temp_bool_Variable_6, float K2Node_Select_Default_2, enum class ESlateVisibility Temp_byte_Variable_11, enum class ESlateVisibility Temp_byte_Variable_12, enum class ESlateVisibility Temp_byte_Variable_13, enum class ESlateVisibility Temp_byte_Variable_14, enum class ESlateVisibility Temp_byte_Variable_15, enum class ESlateVisibility Temp_byte_Variable_16, enum class ESlateVisibility Temp_byte_Variable_17, bool Temp_bool_Variable_7, enum class ESlateVisibility Temp_byte_Variable_18, enum class ESlateVisibility Temp_byte_Variable_19, enum class ESlateVisibility Temp_byte_Variable_20, enum class ESlateVisibility Temp_byte_Variable_21, enum class EFortShowdownEventState Temp_byte_Variable_22, class FText Temp_text_Variable_18, enum class ESlateVisibility K2Node_Select_Default_3, class FText Temp_text_Variable_19, bool K2Node_CustomEvent_In_1, int32 K2Node_Select_Default_4, class FText Temp_text_Variable_20, class UWidgetAnimation* K2Node_Select_Default_5, float CallFunc_PauseAnimation_ReturnValue, float CallFunc_GetStartTime_ReturnValue, float CallFunc_PauseAnimation_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetEndTime_ReturnValue, float CallFunc_PauseAnimation_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetStartTime_ReturnValue_1, float K2Node_Select_Default_6, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_PauseAnimation_ReturnValue_3, float CallFunc_GetEndTime_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, float K2Node_Select_Default_7, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class FText Temp_text_Variable_21, class UWidgetAnimation* K2Node_Select_Default_8, float CallFunc_GetStartTime_ReturnValue_2, float CallFunc_PauseAnimation_ReturnValue_4, float CallFunc_PauseAnimation_ReturnValue_5, float CallFunc_PauseAnimation_ReturnValue_6, float CallFunc_PauseAnimation_ReturnValue_7, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_GetEndTime_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_GetStartTime_ReturnValue_3, float CallFunc_GetEndTime_ReturnValue_3, bool CallFunc_LessEqual_FloatFloat_ReturnValue_3, float CallFunc_Subtract_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5, class FText Temp_text_Variable_22, float CallFunc_PauseAnimation_ReturnValue_8, float CallFunc_GetStartTime_ReturnValue_4, float CallFunc_PauseAnimation_ReturnValue_9, bool CallFunc_LessEqual_FloatFloat_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_6, float CallFunc_GetEndTime_ReturnValue_4, float CallFunc_PauseAnimation_ReturnValue_10, float CallFunc_Subtract_FloatFloat_ReturnValue_4, float CallFunc_GetStartTime_ReturnValue_5, float K2Node_Select_Default_9, bool CallFunc_LessEqual_FloatFloat_ReturnValue_5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_7, float CallFunc_PauseAnimation_ReturnValue_11, float CallFunc_GetEndTime_ReturnValue_5, float CallFunc_Add_FloatFloat_ReturnValue_5, float CallFunc_Subtract_FloatFloat_ReturnValue_5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_8, const class FString& CallFunc_GetEventId_ReturnValue, enum class EFortShowdownPinState CallFunc_GetEventPinState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, float CallFunc_PauseAnimation_ReturnValue_12, float CallFunc_GetStartTime_ReturnValue_6, float CallFunc_PauseAnimation_ReturnValue_13, bool CallFunc_LessEqual_FloatFloat_ReturnValue_6, float CallFunc_Add_FloatFloat_ReturnValue_6, float CallFunc_GetEndTime_ReturnValue_6, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_9, float CallFunc_Subtract_FloatFloat_ReturnValue_6, float CallFunc_PauseAnimation_ReturnValue_14, float CallFunc_GetStartTime_ReturnValue_7, float CallFunc_PauseAnimation_ReturnValue_15, bool CallFunc_LessEqual_FloatFloat_ReturnValue_7, float CallFunc_Add_FloatFloat_ReturnValue_7, float CallFunc_GetEndTime_ReturnValue_7, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_10, float CallFunc_Subtract_FloatFloat_ReturnValue_7, bool K2Node_CustomEvent_In, class FText Temp_text_Variable_23, const struct FDateTime& CallFunc_GetEventBeginTime_ReturnValue, int32 CallFunc_GetCurrentEventScore_ReturnValue, class FText CallFunc_GetEventDateAsText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_GetBestEventScore_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, class FText Temp_text_Variable_24, float CallFunc_RGBToHSV_H, float CallFunc_RGBToHSV_S, float CallFunc_RGBToHSV_V, float CallFunc_RGBToHSV_A, float CallFunc_RGBToHSV_H_1, float CallFunc_RGBToHSV_S_1, float CallFunc_RGBToHSV_V_1, float CallFunc_RGBToHSV_A_1, float CallFunc_Add_FloatFloat_ReturnValue_8, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FLinearColor& CallFunc_HSVToRGB_ReturnValue, const struct FLinearColor& CallFunc_HSVToRGB_ReturnValue_1, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, class FText Temp_text_Variable_25, float CallFunc_Add_FloatFloat_ReturnValue_9, float CallFunc_Add_FloatFloat_ReturnValue_10, float CallFunc_Add_FloatFloat_ReturnValue_11, enum class EFortShowdownEventState Temp_byte_Variable_23, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, class FText K2Node_Select_Default_10, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, class FText Temp_text_Variable_26, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_1, class FText Temp_text_Variable_27, class FText Temp_text_Variable_28, class FText Temp_text_Variable_29, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class FText Temp_text_Variable_30, class FText Temp_text_Variable_31, class FText Temp_text_Variable_32, class FText Temp_text_Variable_33, class FText Temp_text_Variable_34, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_2, class FText Temp_text_Variable_35, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_3, class FText Temp_text_Variable_36, enum class EFortShowdownEventState Temp_byte_Variable_24, float Temp_float_Variable_5, class FText K2Node_Select_Default_11, bool Temp_bool_Variable_8, float Temp_float_Variable_6, float K2Node_Select_Default_12, bool Temp_bool_Variable_9, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_11, float K2Node_Select_Default_13, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_12, const struct FDateTime& CallFunc_GetEventEndTime_ReturnValue, class FText CallFunc_GetEventDateAsText_ReturnValue_1, float Temp_float_Variable_7, bool Temp_bool_Variable_10, int32 CallFunc_GetEventWindowRoundNumber_ReturnValue, float K2Node_Select_Default_14, bool CallFunc_Greater_IntInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_13, int32 CallFunc_GetEventWindowSessionNumber_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float Temp_float_Variable_8, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable_11, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, float K2Node_Select_Default_15, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_14, float Temp_float_Variable_9, bool Temp_bool_Variable_12, enum class EFortEventWindowEligibility CallFunc_GetEventWindowEligibility_ReturnValue, float K2Node_Select_Default_16, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_15, int32 K2Node_Select_Default_17, enum class ESlateVisibility K2Node_Select_Default_18, enum class EFortEventWindowEligibility CallFunc_GetEventWindowEligibility_ReturnValue_1, enum class EFortShowdownEventState CallFunc_GetEventTimeState_ReturnValue, class UMaterialInterface* K2Node_Select_Default_19, class FText K2Node_Select_Default_20);
	void MultiRoundSession__DelegateSignature();
	void SetDisplayInfo__DelegateSignature(const struct FFortTournamentDisplayInfo& DisplayInfo);
	void SetEventState__DelegateSignature(enum class EFortShowdownEventState EventState);
};

}


