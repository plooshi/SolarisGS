#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE88 (0x1218 - 0x390)
// AnimBlueprintGeneratedClass MenuScreen_Constructor.MenuScreen_Constructor_C
class UMenuScreen_Constructor_C : public UFrontendAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_51136A9E446592F9DA802D8316553F4A; // 0x398(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_72E3A5084877E826D78190958B50B30E; // 0x3B8(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_F64C467C442A6D34A1666EA1BF342A2B; // 0x3D8(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_D9B684254003641AE72DD489B091046B; // 0x408(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_07E146734FAAC10EDA1AA99B23C1DCC3; // 0x450(0x78)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_39B34F994D4009B88DDC4CBFB15815AD; // 0x4C8(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_FE38F79D451A9AF748C98B81F3662628; // 0x578(0x78)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_C5561120498D2F0E23E19DB15CEF0EF7; // 0x5F0(0x108)(None)
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK_7F12935546863898C514C7B95077FAFF; // 0x6F8(0xF8)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_FEA73A264834B9BA4ED5069D0C3E29A5; // 0x7F0(0xF0)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_EE19BC2C471BE8434232C5866C0E53BF; // 0x8E0(0xF0)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_0D23822C4E0AE7492CD6C1B434EB0EA1; // 0x9D0(0xF0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_C0AEBDD14F228CA8678B13A5197E02B2; // 0xAC0(0xB8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5B2F575F45E8C2622A80B8953B13457C; // 0xB78(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_26FEEA65421C75CDE901D0B92E36601D; // 0xBA0(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_EF11363942072F570B012789CA1E2E1F; // 0xBC8(0xC0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_32856C254083AA857A4B58B0F9AAFAEC; // 0xC88(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1B7BE350443EEE53FE906CA3D49EBA06; // 0xCD0(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_4107494E47349032DF21F8B72174FC55; // 0xD18(0x48)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_7CA8B728462D2557DF02C9A348221E67; // 0xD60(0x108)(None)
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK_9EFF602B487354BF50FC408103D28456; // 0xE68(0xF8)(None)
	struct FAnimNode_HandIKRetargeting           AnimGraphNode_HandIKRetargeting_6D22EF77491CD577D7626A9506E3D62E; // 0xF60(0x120)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_6211B94041F1D90965A68695335C4FAF; // 0x1080(0x48)(None)
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK_1122FAF54BD3C1483DDFF6A4B0E13E68; // 0x10C8(0xF8)(None)
	UMulticastInlineDelegateProperty_            MenuScreenDispatcher;                              // 0x11C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector                               Offset;                                            // 0x11D0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              OffsetRotate;                                      // 0x11DC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class USkeletalMesh*>                 FrontendNPCMeshes;                                 // 0x11E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                        IKAlpha;                                           // 0x11F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6379[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerPawn_Generic_C*                 PawnOwnerGeneric;                                  // 0x1200(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAnimMontage*>                  NPCMontageList;                                    // 0x1208(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UMenuScreen_Constructor_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void AnimNotify_playFacialAnim();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Constructor_AnimGraphNode_LayeredBoneBlend_EF11363942072F570B012789CA1E2E1F();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_MenuScreen_Constructor(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerPawn_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Generic, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Has_Been_Initd_Variable, float K2Node_Event_DeltaTimeX, class USkeletalMesh* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UAnimMontage* CallFunc_Array_Get_Item_1, bool Temp_bool_IsClosed_Variable, float CallFunc_Montage_Play_ReturnValue, float CallFunc_GetCurveValue_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetCurveValue_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void MenuScreenDispatcher__DelegateSignature();
};

}


