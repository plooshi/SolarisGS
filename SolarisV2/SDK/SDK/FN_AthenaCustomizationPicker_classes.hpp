#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x3D8 - 0x398)
// WidgetBlueprintGeneratedClass AthenaCustomizationPicker.AthenaCustomizationPicker_C
class UAthenaCustomizationPicker_C : public UAthenaCustomizationPicker
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x398(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      Text_FilterName;                                   // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        TextBlock_NoItemAvailable;                         // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_DisplayItemAvailability;            // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_            OnDisableSaveButton;                               // 0x3B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastInlineDelegateProperty_            OnEnableSaveButton;                                // 0x3C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UAthenaCustomizationPicker_C* GetDefaultObj();

	void HandleDifferentFilterSetBP();
	void OnNoItemsAvailableInFilter(class FText& EmptyDisplayText);
	void OnItemsAvailableInFilter();
	void ExecuteUbergraph_AthenaCustomizationPicker(int32 EntryPoint, class FText CallFunc_GetQualifiedFilterDisplayName_ReturnValue, class FText K2Node_Event_EmptyDisplayText);
	void OnEnableSaveButton__DelegateSignature();
	void OnDisableSaveButton__DelegateSignature();
};

}


