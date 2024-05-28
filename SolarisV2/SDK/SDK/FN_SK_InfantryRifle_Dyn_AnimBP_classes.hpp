#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x520 (0x788 - 0x268)
// AnimBlueprintGeneratedClass SK_InfantryRifle_Dyn_AnimBP.SK_InfantryRifle_Dyn_AnimBP_C
class USK_InfantryRifle_Dyn_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_5136[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_0FA95B8A4791B0B87C1E30982CD3A00F; // 0x278(0x30)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_7F73F31E49181732275D2C9C7A189F22; // 0x2A8(0x18)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_ABC261A741753443EA4E2888A6100072; // 0x2C0(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_330CB41D48BD49CAED30F3A8B0076C91; // 0x2E0(0x20)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_C527464948342EDD9910C59EFA1250ED; // 0x300(0x440)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_3D21E5FD4F92A0ABF3C298B01952D813; // 0x740(0x48)(None)

	static class UClass* StaticClass();
	static class USK_InfantryRifle_Dyn_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_SK_InfantryRifle_Dyn_AnimBP(int32 EntryPoint);
};

}


