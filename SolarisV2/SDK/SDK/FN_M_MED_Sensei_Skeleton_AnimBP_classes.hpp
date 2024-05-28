#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x728 (0x990 - 0x268)
// AnimBlueprintGeneratedClass M_MED_Sensei_Skeleton_AnimBP.M_MED_Sensei_Skeleton_AnimBP_C
class UM_MED_Sensei_Skeleton_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_6377[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_5E084898416371838CA1089A5E1B1CEA; // 0x278(0x30)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_E3FD8AF948BEB1EAD305D2A116E07CA1; // 0x2A8(0x140)(ContainsInstancedReference)
	uint8                                        Pad_6378[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_8E692366460EAE1338EDA4A0A4384C19; // 0x3F0(0x560)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_CD383559480255357BB3A2A3FF5B5D11; // 0x950(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_BF12781348363226E1060A876B332CB5; // 0x970(0x20)(None)

	static class UClass* StaticClass();
	static class UM_MED_Sensei_Skeleton_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_M_MED_Sensei_Skeleton_AnimBP(int32 EntryPoint);
};

}


