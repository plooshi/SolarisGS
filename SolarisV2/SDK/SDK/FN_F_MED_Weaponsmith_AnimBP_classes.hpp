#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x25D0 (0x29A8 - 0x3D8)
// AnimBlueprintGeneratedClass F_MED_Weaponsmith_AnimBP.F_MED_Weaponsmith_AnimBP_C
class UF_MED_Weaponsmith_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	uint8                                        Pad_637A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_14BF90864FBD80E965BB7788A1AF09C7; // 0x3E8(0x30)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_3D9FF6D54CD2B225E53AFC8882C3D6E8; // 0x418(0x140)(ContainsInstancedReference)
	uint8                                        Pad_637B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_F0040B4B46F19203691A7AA9F956DB68; // 0x560(0x440)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2ECA994D4B450C87B856848923ACE343; // 0x9A0(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_13DA76F24234D3BEDD38A6815A816E19; // 0x9C0(0x20)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_5A6F101144E08CF3AD9D05B651820F59; // 0x9E0(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_3F2A0581448788405863109DA2F21FF7; // 0xE20(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_D2EBBAB845D230CA94B24681586E0D42; // 0x1260(0x440)(None)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_29D98F394C4D2BD8F7DFE598E4217A08; // 0x16A0(0x560)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_6416AB9C4748F27759882FBDEA9FF7F0; // 0x1C00(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2B60A7CF4B17CA867CBE97AA2E9A0522; // 0x1D08(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_10205F824E6E1387A82208A317A59982; // 0x1E10(0x108)(None)
	struct FFortAnimNode_Flap                    FortAnimGraphNode_Flap_670BF2A347FC9EF1B90177A8197ECDD9; // 0x1F18(0xF8)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_5D13A0974A8B275CDC755FA16233B806; // 0x2010(0x440)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_184B91834FBB4AD317008589E985C56D; // 0x2450(0x108)(None)
	uint8                                        Pad_637C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_AB5AFCB24DD6F4A804EFDDA3832A559A; // 0x2560(0x440)(None)
	float                                        Crouch_float;                                      // 0x29A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Dyn_alpha;                                         // 0x29A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UF_MED_Weaponsmith_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_F_MED_Weaponsmith_AnimBP(int32 EntryPoint, float CallFunc_MapRangeClamped_ReturnValue, float K2Node_Event_DeltaTimeX, float CallFunc_Conv_BoolToFloat_ReturnValue);
};

}


