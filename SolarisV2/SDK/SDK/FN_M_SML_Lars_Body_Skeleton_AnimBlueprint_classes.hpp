#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C68 (0x2040 - 0x3D8)
// AnimBlueprintGeneratedClass M_SML_Lars_Body_Skeleton_AnimBlueprint.M_SML_Lars_Body_Skeleton_AnimBlueprint_C
class UM_SML_Lars_Body_Skeleton_AnimBlueprint_C : public UCustomCharacterPartAnimInstance
{
public:
	uint8                                        Pad_4FD1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	uint8                                        Pad_4FD2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_ABBE7B9049051BD35FC06396913867D3; // 0x3F0(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_96AE5B8B43500293DE894ABD15A077A7; // 0x830(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_57F8580A48FCF2889D11D5AD38EDBBB0; // 0xC70(0x440)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_F22264944E0128E1663A8D955C57F1C0; // 0x10B0(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_B94146E6410326AE160256996285439C; // 0x10D0(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_30648CCA4031F2B867F3A7880FF97EEE; // 0x10F0(0x30)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_A0D3A35D4FDDEF364F7C0CB2BC636E9D; // 0x1120(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_FB6CDDC24FAA9996085270BB888E9329; // 0x1560(0x440)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_5F5AF45E4DCAF8F4BB882B97DC5046C4; // 0x19A0(0x140)(ContainsInstancedReference)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_500B74434F51B316795CD7B933386919; // 0x1AE0(0x560)(None)

	static class UClass* StaticClass();
	static class UM_SML_Lars_Body_Skeleton_AnimBlueprint_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_M_SML_Lars_Body_Skeleton_AnimBlueprint(int32 EntryPoint);
};

}


