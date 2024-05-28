#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2F8 (0x568 - 0x270)
// AnimBlueprintGeneratedClass WrapBandages_Prop_AnimBP.WrapBandages_Prop_AnimBP_C
class UWrapBandages_Prop_AnimBP_C : public UFortItemAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_5542383742DA5238F8A178848A7C8FD7; // 0x278(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8B69A99142C5520097614183EAC7D467; // 0x2A8(0x78)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_9B269E1E4E036D2064B0DE9B141A5FA7; // 0x320(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_ECF34B08453D54989318B1AA42733840; // 0x368(0xB0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_0011D2534D31C2D5F2559C9C9E1174F5; // 0x418(0xB8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_C3A0993548249B24D187929033166E8F; // 0x4D0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_F17D123C4EB3DE0C42DC5ABC4130E5DE; // 0x4F8(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_F32F7F1D429948AD568109AEBA7E7315; // 0x520(0x48)(None)

	static class UClass* StaticClass();
	static class UWrapBandages_Prop_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_WrapBandages_Prop_AnimBP(int32 EntryPoint);
};

}


