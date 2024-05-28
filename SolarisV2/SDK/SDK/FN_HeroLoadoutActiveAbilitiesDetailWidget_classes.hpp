#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4D (0x2DD - 0x290)
// WidgetBlueprintGeneratedClass HeroLoadoutActiveAbilitiesDetailWidget.HeroLoadoutActiveAbilitiesDetailWidget_C
class UHeroLoadoutActiveAbilitiesDetailWidget_C : public UFortHeroLoadoutAbilitiesDetailPanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        ColumnContainer;                                   // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorderHeading;                               // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalLayoutBox;                               // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       LayoutSwitcher;                                    // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              RootBox;                                           // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          RowContainer;                                      // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxHorizontalLayout;                           // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalLayoutBox;                                 // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EHeroLoadoutActiveAbilitiesDetailLayoutStyle LayoutStyle;                                       // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         ShouldShowAbilityDescriptions;                     // 0x2D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsHeroLoadoutMinusTooltip;                         // 0x2DA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         ShowDescription;                                   // 0x2DB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         UseVerboseDescription;                             // 0x2DC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UHeroLoadoutActiveAbilitiesDetailWidget_C* GetDefaultObj();

	void CreateAbilityTooltips(int32 AbilityIndex, class UFortAbilityKit* AbilityKit, bool Temp_bool_Variable, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, int32 Temp_int_Array_Index_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, TArray<class UFortGadgetItemDefinition*>& CallFunc_BP_GetGadgets_GadgetItemDefinitions, class UFortGadgetItemDefinition* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UFortHero* K2Node_DynamicCast_AsFort_Hero, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, class UFortHeroType* CallFunc_GetHeroTypeBP_ReturnValue, TArray<class UFortAbilityKit*>& CallFunc_GetAbilityKitsForActiveAbilityPerks_ReturnValue, class UFortAbilityKit* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool Temp_bool_Variable_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UFortTooltipContext* CallFunc_SpawnTooltipContextWithSource_ReturnValue, bool Temp_bool_Variable_2, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue, enum class EHeroLoadoutActiveAbilitiesDetailLayoutStyle Temp_byte_Variable, class FText K2Node_Select_Default, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output, bool K2Node_Select_Default_1);
	void UpdateFromItem(class UFortAbilityKit* AbilityKit, class UFortHero* Hero, int32 Index, int32 AbilityCount, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UHeroLoadoutActiveAbilityDetailColumn_C* CallFunc_Create_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UPanelSlot* CallFunc_AddChild_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess, class UHeroLoadoutActiveAbilityDetailRow_C* CallFunc_Create_ReturnValue_1, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class UFortHeroType* CallFunc_GetHeroTypeBP_ReturnValue, class UFortHero* K2Node_DynamicCast_AsFort_Hero, bool K2Node_DynamicCast_bSuccess_1, TArray<class UFortAbilityKit*>& CallFunc_GetAbilityKitsForActiveAbilityPerks_ReturnValue, class UFortAbilityKit* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1);
	void HandlePostDifferentItemToDetailSet();
	void HandleItemToDetailChangedBP();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnPlayerHomebaseChanged();
	void ExecuteUbergraph_HeroLoadoutActiveAbilitiesDetailWidget(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UHeroLoadoutActiveAbilityDetailRow_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UHeroLoadoutActiveAbilityDetailColumn_C* CallFunc_Create_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, bool Temp_bool_Variable, enum class EHeroLoadoutActiveAbilitiesDetailLayoutStyle Temp_byte_Variable_2, enum class ESlateVisibility K2Node_Select_Default, class UWidget* K2Node_Select_Default_1);
};

}


