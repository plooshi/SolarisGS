#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x308 - 0x268)
// AnimBlueprintGeneratedClass BP_Shotgun_BreakAction.BP_Shotgun_BreakAction_C
class UBP_Shotgun_BreakAction_C : public UAnimInstance
{
public:
	uint8                                        Pad_51CB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_BA976D5D4DB7967075F7CDB8A77EDD8C; // 0x278(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_40047C1541B43E34DADF6696EC1EDEBE; // 0x2A8(0x48)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_EADE6A484AF7A66F69258C8F614628BF; // 0x2F0(0x18)(None)

	static class UClass* StaticClass();
	static class UBP_Shotgun_BreakAction_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_BP_Shotgun_BreakAction(int32 EntryPoint);
};

}


