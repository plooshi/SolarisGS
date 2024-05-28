#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x308 - 0x268)
// AnimBlueprintGeneratedClass Bush_Prop_AnimBP.Bush_Prop_AnimBP_C
class UBush_Prop_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_4226[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_EE5ED2D945FD5514B88BF98B77E08C6A; // 0x278(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_E53F6986413B8C68DCEE24B2C89E608D; // 0x2A8(0x48)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_5381A7F34597C5AABF71E1A171C0D63C; // 0x2F0(0x18)(None)

	static class UClass* StaticClass();
	static class UBush_Prop_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Bush_Prop_AnimBP(int32 EntryPoint);
};

}


