#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x368 - 0x268)
// AnimBlueprintGeneratedClass ProxGrenadeLauncher_Sk_AnimBP.ProxGrenadeLauncher_Sk_AnimBP_C
class UProxGrenadeLauncher_Sk_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_496E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_F9BC58EF4033A519DE3CAA8DDA2BB760; // 0x278(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_8B27DB514CE6CDF30157EABCD3F83551; // 0x2A8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_B7BEC5FE444CD79EF0E18FB90AAF9A6E; // 0x2F0(0x78)(None)

	static class UClass* StaticClass();
	static class UProxGrenadeLauncher_Sk_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ProxGrenadeLauncher_Sk_AnimBP(int32 EntryPoint);
};

}


