#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x240 - 0x228)
// WidgetBlueprintGeneratedClass Creative_Background_Widget.Creative_Background_Widget_C
class UCreative_Background_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_0;                                          // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            UserText;                                          // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCreative_Background_Widget_C* GetDefaultObj();

	void SetTextFont(int32 TextFont, const struct FSlateFontInfo& NewLocalVar_0, int32 Temp_int_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, int32 Temp_int_Variable_1, class FName K2Node_Select_Default, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, class UObject* Temp_object_Variable_2, class UObject* K2Node_Select_Default_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo);
	void SetTextColor(const struct FLinearColor& TextColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void SetTextAlignment(enum class ETextJustify Alignment);
	void SetTextScale(int32 FontSize, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo);
	void SetBackgroundColor(const struct FLinearColor& Color);
	void SetText(const class FString& Text, class FText CallFunc_Conv_StringToText_ReturnValue);
	void ExecuteUbergraph_Creative_Background_Widget(int32 EntryPoint);
};

}


