#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2F8 (0x568 - 0x270)
// AnimBlueprintGeneratedClass ApplyMedkit_Athena_AnimBP.ApplyMedkit_Athena_AnimBP_C
class UApplyMedkit_Athena_AnimBP_C : public UFortItemAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_5FAA15A34682216510D589A50487471A; // 0x278(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_F9A34A2B463D37243970C4B4C478BEEC; // 0x2A8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_0A922DF04C01828D0F5A42838F0C626E; // 0x2F0(0x78)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_BF6BBA2D4BFA8438C4D6609C33CA86C9; // 0x368(0xB0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_FD3F608B440246E77EBEB1B065FCF60A; // 0x418(0xB8)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_216D9F694D96C1FCFF7C009A530AF1DA; // 0x4D0(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_24AD787544D7B979140370BE70006301; // 0x518(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5DEB5D87408BBFCCBE4CAE8EB3BDFC0F; // 0x540(0x28)(None)

	static class UClass* StaticClass();
	static class UApplyMedkit_Athena_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ApplyMedkit_Athena_AnimBP(int32 EntryPoint);
};

}


