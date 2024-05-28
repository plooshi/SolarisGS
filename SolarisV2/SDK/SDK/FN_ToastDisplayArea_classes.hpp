#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x278 - 0x268)
// WidgetBlueprintGeneratedClass ToastDisplayArea.ToastDisplayArea_C
class UToastDisplayArea_C : public UFortToastDisplayArea
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USafeZone*                             SafeZone_0;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UToastDisplayArea_C* GetDefaultObj();

	void AttemptDisplayNextToast();
	void Construct();
	void BndEvt__ToastWidget_New_K2Node_ComponentBoundEvent_9_OnFinishedToast__DelegateSignature();
	void BndEvt__ToastWidget_MinorError_K2Node_ComponentBoundEvent_3_OnFinishedToast__DelegateSignature();
	void BndEvt__PowerToastWidget_K2Node_ComponentBoundEvent_0_OnToastFinished__DelegateSignature();
	void BndEvt__VoiceChannelChangePopup_K2Node_ComponentBoundEvent_1_OnToastDisplayFinished__DelegateSignature();
	void OnDisplayToast(class UFortUINotification* NewToast);
	void ExecuteUbergraph_ToastDisplayArea(int32 EntryPoint, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, class UFortUINotification* K2Node_Event_NewToast, class UToastWidget_New_C* K2Node_DynamicCast_AsToast_Widget_New, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class UToastWidget_MinorError_C* K2Node_DynamicCast_AsToast_Widget_Minor_Error, bool K2Node_DynamicCast_bSuccess_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, class UFortPlayerPowerRatingToast* K2Node_DynamicCast_AsFort_Player_Power_Rating_Toast, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_LessEqual_ByteByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_LessEqual_ByteByte_ReturnValue_1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}


