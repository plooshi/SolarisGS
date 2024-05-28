#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x834 (0x67D4 - 0x5FA0)
// AnimBlueprintGeneratedClass MountedTurret_Gunner_AnimBP.MountedTurret_Gunner_AnimBP_C
class UMountedTurret_Gunner_AnimBP_C : public UFortPlayerAnimInstance_MountedTurret
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5FA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK_EA99B7B8421846838D4B2EA9E3E1CF69; // 0x5FA8(0xF8)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_AB5E7EE04FD942996FFE84801A0C0FFF; // 0x60A0(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_490B730C4D3612B56BF047918267E18F; // 0x60C0(0x20)(None)
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK_48C11BA2470BF641C7E0C8B70AEF7F40; // 0x60E0(0xF8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2B80D546472B689BD0B5ABB23390F217; // 0x61D8(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_221FD1B34567A8B8784CB4AB81D1E5B5; // 0x6208(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_41B2C0ED4B73B9B6492BEE9541D99135; // 0x6250(0xB0)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_D906DC2D4CCAB5B10A19AAB7140D34C9; // 0x6300(0xC8)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_E6B2D7944E459199A162B78A736662D2; // 0x63C8(0x18)(None)
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_B42B4CC64E43087EE5F75AAA3AC31B87; // 0x63E0(0x188)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_E12A1B75416454F164AF9C8FFBC99FCD; // 0x6568(0x18)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_FFEC5A2C451F8B6DE9C3D0BF63D47EDB; // 0x6580(0x78)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_307F98F94ACED67B0AC1628B3827E568; // 0x65F8(0xC8)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_D604CC9941458E8F6D56F5AC018805FB; // 0x66C0(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_202C876C4609006B94125DA140FCE5F2; // 0x6708(0x48)(None)
	struct FVector                               LocalLeftOffset;                                   // 0x6750(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               WorldPosLeft;                                      // 0x675C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              LocalRotLeftOffset;                                // 0x6768(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DA1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortMountedTurret*                    MountedTurret;                                     // 0x6778(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              WorldRotLeft;                                      // 0x6780(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               LocalRightOffset;                                  // 0x678C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              LocalRotRightOffset;                               // 0x6798(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              WorldRotRight;                                     // 0x67A4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               WorldPosRight;                                     // 0x67B0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Speed;                                             // 0x67BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTurning;                                         // 0x67C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DA2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TurnRate;                                          // 0x67C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AimingPitchLastTick;                               // 0x67C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PitchRate;                                         // 0x67CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PedalScaler;                                       // 0x67D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMountedTurret_Gunner_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MountedTurret_Gunner_AnimBP_AnimGraphNode_RotationOffsetBlendSpace_B42B4CC64E43087EE5F75AAA3AC31B87();
	void ExecuteUbergraph_MountedTurret_Gunner_AnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAnimBP_MountedTurret_C* K2Node_DynamicCast_AsAnim_BP_Mounted_Turret, bool K2Node_DynamicCast_bSuccess, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetVehicleActor_ReturnValue, class AFortMountedTurret* K2Node_DynamicCast_AsFort_Mounted_Turret, bool K2Node_DynamicCast_bSuccess_2);
};

}


