#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x368 - 0x268)
// AnimBlueprintGeneratedClass Pistol_Revolver_SideAction_AnimBP.Pistol_Revolver_SideAction_AnimBP_C
class UPistol_Revolver_SideAction_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_51C8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_4B9C316E43FA08653813BBBCA2D3C1CC; // 0x278(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_7B68B15D437D89F24C3E878507F22BD7; // 0x2A8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_13AC6DBF4FB71657F72EF3BFDFE4EBE8; // 0x2F0(0x78)(None)

	static class UClass* StaticClass();
	static class UPistol_Revolver_SideAction_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Pistol_Revolver_SideAction_AnimBP(int32 EntryPoint);
};

}


