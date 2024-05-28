#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x260 - 0x250)
// WidgetBlueprintGeneratedClass ItemInfoWidget.ItemInfoWidget_C
class UItemInfoWidget_C : public UFortItemInfoWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                RarityGlow;                                        // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UItemInfoWidget_C* GetDefaultObj();

	void SetRarityMaterialValues(class UFortItemDefinition* ItemDefinition);
	void ExecuteUbergraph_ItemInfoWidget(int32 EntryPoint, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, class UFortItemDefinition* K2Node_Event_ItemDefinition, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_2);
};

}


