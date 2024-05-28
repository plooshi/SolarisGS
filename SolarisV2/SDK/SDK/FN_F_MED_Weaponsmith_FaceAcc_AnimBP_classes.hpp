#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x728 (0xB00 - 0x3D8)
// AnimBlueprintGeneratedClass F_MED_Weaponsmith_FaceAcc_AnimBP.F_MED_Weaponsmith_FaceAcc_AnimBP_C
class UF_MED_Weaponsmith_FaceAcc_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	uint8                                        Pad_5D6B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_6ADB1E924A69A9B47261728A57C90322; // 0x3E8(0x30)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_B668EC764724C9E704DB9882F844B344; // 0x418(0x140)(ContainsInstancedReference)
	uint8                                        Pad_5D6C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_00F0BAAF4611AD82C8B7BCBF6571CD1D; // 0x560(0x560)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_88458D474A312ACB930E6A9E91A193D7; // 0xAC0(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_39E082974576B23B2FC63890B520AFA1; // 0xAE0(0x20)(None)

	static class UClass* StaticClass();
	static class UF_MED_Weaponsmith_FaceAcc_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_F_MED_Weaponsmith_FaceAcc_AnimBP(int32 EntryPoint);
};

}


