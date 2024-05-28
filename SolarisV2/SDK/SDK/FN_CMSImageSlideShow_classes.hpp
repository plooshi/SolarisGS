#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x250 - 0x228)
// WidgetBlueprintGeneratedClass CMSImageSlideShow.CMSImageSlideShow_C
class UCMSImageSlideShow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonWidgetCarousel*                 Images;                                            // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        ScrollInterview;                                   // 0x238(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C50[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastInlineDelegateProperty_            CarouselIndexChanged;                              // 0x240(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UCMSImageSlideShow_C* GetDefaultObj();

	void SetMediaURLs(TArray<class FString>& MediaURLs);
	void BndEvt__Images_K2Node_ComponentBoundEvent_0_OnCurrentPageIndexChanged__DelegateSignature(class UCommonWidgetCarousel* CarouselWidget, int32 CurrentPageIndex);
	void ExecuteUbergraph_CMSImageSlideShow(int32 EntryPoint, class UCommonWidgetCarousel* K2Node_ComponentBoundEvent_CarouselWidget, int32 K2Node_ComponentBoundEvent_CurrentPageIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCMSImage_C* CallFunc_Create_ReturnValue, TArray<class FString>& K2Node_CustomEvent_MediaUrls, class UPanelSlot* CallFunc_AddChild_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void CarouselIndexChanged__DelegateSignature(int32 CurrentPageIndex);
};

}


