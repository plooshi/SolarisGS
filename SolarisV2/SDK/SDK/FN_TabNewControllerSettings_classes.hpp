#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2B8 - 0x2A8)
// WidgetBlueprintGeneratedClass TabNewControllerSettings.TabNewControllerSettings_C
class UTabNewControllerSettings_C : public UFortTabGamepadOptions
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                              SizeBox_0;                                         // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTabNewControllerSettings_C* GetDefaultObj();

	void Construct();
	void UpdateOptionsTab();
	void BndEvt__TabListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget);
	void SettingValueChanged(float Value);
	void CenterOnTab();
	void BndEvt__TabListView_K2Node_ComponentBoundEvent_1_OnListItemScrolledIntoViewDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
	void AdvancedSettingsChanged(bool Enabled);
	void BndEvt__TabListView_K2Node_ComponentBoundEvent_2_OnListEntryReleasedDynamic__DelegateSignature(class UUserWidget* Widget);
	void ExecuteUbergraph_TabNewControllerSettings(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUserWidget* K2Node_ComponentBoundEvent_Widget_2, class UFortOptionsMenuSetting* K2Node_DynamicCast_AsFort_Options_Menu_Setting, bool K2Node_DynamicCast_bSuccess, float K2Node_CustomEvent_Value, class UOptionsMenuRotator_C* K2Node_DynamicCast_AsOptions_Menu_Rotator, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, class UObject* K2Node_ComponentBoundEvent_Item, class UUserWidget* K2Node_ComponentBoundEvent_Widget_1, bool K2Node_CustomEvent_Enabled, class UFortOptionsMenuSetting* K2Node_DynamicCast_AsFort_Options_Menu_Setting_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsAdvancedSettingsEnabled_ReturnValue, int32 Temp_int_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Variable_1, bool Temp_bool_Variable, bool CallFunc_IsAdvancedSettingsEnabled_ReturnValue_1, int32 K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UOptionsMenuRotator_C* K2Node_DynamicCast_AsOptions_Menu_Rotator_1, bool K2Node_DynamicCast_bSuccess_3);
};

}


