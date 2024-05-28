#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x600 (0x65B0 - 0x5FB0)
// AnimBlueprintGeneratedClass Ostrich_Driver_AnimBP.Ostrich_Driver_AnimBP_C
class UOstrich_Driver_AnimBP_C : public UFortPlayerAnimInstance_OstrichDriver
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5FB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_164FDF614BB71730DFEBDE9633BBBA80; // 0x5FB8(0x30)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_E5D121B74B489326A4DAF49C8618A563; // 0x5FE8(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_CA7FB92B43D2CA635DA9959FC734DEDF; // 0x60B0(0x78)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_61B5C72E42EA7F4DDDAA84B87975929B; // 0x6128(0xB8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_D6788D4947DE142F09A98EAAFAF1879C; // 0x61E0(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_077090084F233625AE22F89E77008F82; // 0x6208(0xA0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_14FE49CA40283C0591A9EDA2EFFFFD06; // 0x62A8(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_063238B348273163810CF5937DDB4FFF; // 0x62D0(0x78)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_AED8F18D4B1C95CB4F6A278AA2FEF55C; // 0x6348(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_0A03C9AC408CD49455C78598CEB8307A; // 0x6410(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_95E0F86F46FBD8F60BCB3E897B319CDA; // 0x6488(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_D9B52F9C4B9B99DA3DCD6084EBC1E5DA; // 0x64B8(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_89DB43FC45EC8F33380422BBF0F3958D; // 0x6568(0x48)(None)

	static class UClass* StaticClass();
	static class UOstrich_Driver_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Ostrich_Driver_AnimBP(int32 EntryPoint);
};

}


