#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5B4 (0x81C - 0x268)
// AnimBlueprintGeneratedClass Mech_Emote_AnimBP.Mech_Emote_AnimBP_C
class UMech_Emote_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_4DC3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_160CFD834BBBC445461E158F45AF9661; // 0x278(0x30)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_F4139A244A3B924A205B62A114B7DB08; // 0x2A8(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_FC3CFBE443F8299004FF53A5F532DAEE; // 0x3B0(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_690CC1A84EFE5B5C968CC7A5E6F48475; // 0x3D0(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_78BF31C64D7DD039121591A2AA31C9AC; // 0x3F0(0x108)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_8C32AAD64711C3204BB9A8B3CA057F2D; // 0x4F8(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_4F5711C4438FF37EC537DD98A6648AEC; // 0x540(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_A1E5A1604BE0304098F2D7A3566F1379; // 0x588(0x78)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2F3AC9E649C86B64DAFD418322CC169A; // 0x600(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_591211BF4F5888686CFDBFB7D45DBF6D; // 0x708(0x108)(None)
	struct FVector                               PropScale;                                         // 0x810(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMech_Emote_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Mech_Emote_AnimBP(int32 EntryPoint);
};

}


