#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x25C - 0x238)
// WidgetBlueprintGeneratedClass CreativeLobbyAdSpace.CreativeLobbyAdSpace_C
class UCreativeLobbyAdSpace_C : public UFortCreativeAdsView
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCreativeLobbyAd_C*                    Ad1;                                               // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCreativeLobbyAd_C*                    Ad2;                                               // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              CreativeAdContent;                                 // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        NumCreativeAds;                                    // 0x258(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCreativeLobbyAdSpace_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_CreativeLobbyAdSpace(int32 EntryPoint, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue);
};

}


