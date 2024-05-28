#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass AnimNotifyState_MechStopMontagePlayEarlyInMotion.AnimNotifyState_MechStopMontagePlayEarlyInMotion_C
class UAnimNotifyState_MechStopMontagePlayEarlyInMotion_C : public UAnimNotifyState
{
public:

	static class UClass* StaticClass();
	static class UAnimNotifyState_MechStopMontagePlayEarlyInMotion_C* GetDefaultObj();

	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage, bool K2Node_DynamicCast_bSuccess, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UMech_Veh_AnimBP_C* K2Node_DynamicCast_AsMech_Veh_Anim_BP, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetOwningActor_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_InverseTransformDirection_ReturnValue, float CallFunc_VSizeXYSquared_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
};

}


