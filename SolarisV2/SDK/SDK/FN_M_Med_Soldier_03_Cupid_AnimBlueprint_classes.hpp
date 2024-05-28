#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE90 (0x1268 - 0x3D8)
// AnimBlueprintGeneratedClass M_Med_Soldier_03_Cupid_AnimBlueprint.M_Med_Soldier_03_Cupid_AnimBlueprint_C
class UM_Med_Soldier_03_Cupid_AnimBlueprint_C : public UCustomCharacterPartAnimInstance
{
public:
	uint8                                        Pad_64B7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_1AE2FEE843862DB0926247ABCDEDD974; // 0x3E8(0x140)(ContainsInstancedReference)
	struct FAnimNode_Root                        AnimGraphNode_Root_91EDDABE45FF40660C7C398C88D576B7; // 0x528(0x30)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_C02AB20348B2B54CFA0C50803C42321A; // 0x558(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_308ADA1248ABA3187DFA7ABFC12BC130; // 0x578(0x20)(None)
	uint8                                        Pad_64B8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_02B303FA4DDA5584C595D48F2A2D11D1; // 0x5A0(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_B17F58154A349B54BB143CBE152F66E8; // 0x9E0(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_4ABFB15A48A29BF94F74F6BBBF5874AF; // 0xE20(0x440)(None)
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0x1260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UM_Med_Soldier_03_Cupid_AnimBlueprint_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_M_Med_Soldier_03_Cupid_AnimBlueprint(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue);
};

}


