#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0xA40 - 0x940)
// BlueprintGeneratedClass GA_OstrichDash.GA_OstrichDash_C
class UGA_OstrichDash_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x940(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ATestMechVehicle_C*                    Mech;                                              // 0x948(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask*                          MoveTask;                                          // 0x950(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DashDirection;                                     // 0x958(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17FC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                DashCameraMode;                                    // 0x968(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                 NewVar_0;                                          // 0x970(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        DashLaunchSpeedInAir;                              // 0x978(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        DashLaunchZInAir;                                  // 0x998(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        DashGroundStrength;                                // 0x9B8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        DashGroundDuration;                                // 0x9D8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        DashCooldownResetsCamera;                          // 0x9F8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        DashCameraDuration;                                // 0xA18(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UForceFeedbackEffect*                  DashRumble;                                        // 0xA38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_OstrichDash_C* GetDefaultObj();

	void OnFinish_72E13DD14E115C89101CC78972A55E4F();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void MovementModeChangedDelegate(class ACharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void ExecuteUbergraph_GA_OstrichDash(int32 EntryPoint, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_GetEffectDirection_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class AFortCharacterVehicle_Ostrich* K2Node_DynamicCast_AsFort_Character_Vehicle_Ostrich, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_bWasCancelled, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class ATestMechVehicle_C* K2Node_DynamicCast_AsTest_Mech_Vehicle, bool K2Node_DynamicCast_bSuccess_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_2, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TScriptInterface<class IFortVehicleInterface> CallFunc_VehicleIsInAir_self_CastInput, bool CallFunc_VehicleIsInAir_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_GetIsChargingJump_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue_3, class UAbilityTask_ApplyRootMotionConstantForce* CallFunc_ApplyRootMotionConstantForce_ReturnValue, class ACharacter* K2Node_CustomEvent_Character, enum class EMovementMode K2Node_CustomEvent_PrevMovementMode, uint8 K2Node_CustomEvent_PreviousCustomMode, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_4, float CallFunc_GetValueAtLevel_ReturnValue_5, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1);
};

}


