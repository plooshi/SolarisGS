#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x300 - 0x298)
// WidgetBlueprintGeneratedClass ChallengeRewardTrackEntry.ChallengeRewardTrackEntry_C
class UChallengeRewardTrackEntry_C : public UAthenaChallengeRewardTrackEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      NextObjective;                                     // 0x2A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Completed_CurrentNode_Last;                        // 0x2A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Completed_NextNode;                                // 0x2B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Completed_CurrentNode;                             // 0x2B8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                FinishGlow;                                        // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Pip;                                         // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortLazyImage*                        LazyImage_Reward;                                  // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                NextRewardIndicator;                               // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                TriBurst_1;                                        // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                TriBurst_2;                                        // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                TriBurst_3;                                        // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    NewVar_0;                                          // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UChallengeRewardTrackEntry_C* GetDefaultObj();

	void SetIsInactive(class UImage* MaterialBrush, bool IsInactive, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_Select_Default);
	void SetIsPrestige(class UImage* MaterialBrush, bool ViewingPrestige, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_Select_Default);
	void Construct();
	void NextRewardToEarn(bool bNext);
	void CompletedNextNode(bool bAnimate);
	void SetToDefaultState();
	void CompletedCurrentNode(bool bAnimate, bool LastReward);
	void SetAsCurrentPreviewItem();
	void ClearPreviewSelection();
	void StyleChange(bool bViewingPrestige);
	void ExecuteUbergraph_ChallengeRewardTrackEntry(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool K2Node_Event_bNext, bool K2Node_Event_bAnimate_1, bool K2Node_Event_bAnimate, bool K2Node_Event_LastReward, float K2Node_Select_Default, bool K2Node_Event_bViewingPrestige, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default_1, class UMissionRewardEntry_C* K2Node_DynamicCast_AsMission_Reward_Entry, bool K2Node_DynamicCast_bSuccess, class UMissionRewardEntry_C* K2Node_DynamicCast_AsMission_Reward_Entry_1, bool K2Node_DynamicCast_bSuccess_1, class UMissionRewardEntry_C* K2Node_DynamicCast_AsMission_Reward_Entry_2, bool K2Node_DynamicCast_bSuccess_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UMissionRewardEntry_C* K2Node_DynamicCast_AsMission_Reward_Entry_3, bool K2Node_DynamicCast_bSuccess_3, class UMissionRewardEntry_C* K2Node_DynamicCast_AsMission_Reward_Entry_4, bool K2Node_DynamicCast_bSuccess_4);
};

}


