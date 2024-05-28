#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x308 - 0x268)
// AnimBlueprintGeneratedClass DrumShotGun_SK_AnimBP.DrumShotGun_SK_AnimBP_C
class UDrumShotGun_SK_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_51CA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_B86D730145535107B7503BB7858A1B67; // 0x278(0x30)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_3D25A14C4C8B1F4F18C10B9F2C9A4EF4; // 0x2A8(0x18)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_6E9E0BCA419CD4F42433C282CC789184; // 0x2C0(0x48)(None)

	static class UClass* StaticClass();
	static class UDrumShotGun_SK_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_DrumShotGun_SK_AnimBP(int32 EntryPoint);
};

}


