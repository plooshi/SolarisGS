#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x308 - 0x268)
// AnimBlueprintGeneratedClass BP_Shotgun_RG_BFPA.BP_Shotgun_RG_BFPA_C
class UBP_Shotgun_RG_BFPA_C : public UAnimInstance
{
public:
	uint8                                        Pad_51CC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_447289EE478D0375649725A287B7BD4C; // 0x278(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_76185EE8467A3505F3E23E89565E7CB8; // 0x2A8(0x48)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_BE887AC24A08313E787615BA25555A93; // 0x2F0(0x18)(None)

	static class UClass* StaticClass();
	static class UBP_Shotgun_RG_BFPA_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_BP_Shotgun_RG_BFPA(int32 EntryPoint);
};

}


