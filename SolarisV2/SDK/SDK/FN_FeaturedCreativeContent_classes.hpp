#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x268 - 0x228)
// WidgetBlueprintGeneratedClass FeaturedCreativeContent.FeaturedCreativeContent_C
class UFeaturedCreativeContent_C : public UFeaturedCreativeContent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Base;                                              // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCMSImageSlideShow_C*                  CMSImageSlideShow;                                 // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      IslandCreator;                                     // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      IslandDetails;                                     // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      IslandName;                                        // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FCreativeAdData>               CurrentAds;                                        // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UFeaturedCreativeContent_C* GetDefaultObj();

	void SetFeaturedContentDetails(int32 Index, const struct FCreativeAdData& CurrentAd, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void OnSetupAds(TArray<class FString>& MediaURLs, TArray<struct FCreativeAdData>& AdMetadata);
	void BndEvt__CMSImageSlideShow_K2Node_ComponentBoundEvent_0_CarouselIndexChanged__DelegateSignature(int32 CurrentPageIndex);
	void ExecuteUbergraph_FeaturedCreativeContent(int32 EntryPoint, TArray<class FString>& K2Node_Event_MediaURLs, TArray<struct FCreativeAdData>& K2Node_Event_AdMetadata, int32 K2Node_ComponentBoundEvent_CurrentPageIndex);
};

}


