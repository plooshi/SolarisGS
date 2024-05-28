#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E78 (0x2268 - 0x3F0)
// AnimBlueprintGeneratedClass SK_M_Med_Soldier_04_Skeleton_AnimBP.SK_M_Med_Soldier_04_Skeleton_AnimBP_C
class USK_M_Med_Soldier_04_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance_Soldier
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_78EB935A430054ADF5E2E89005D9D000; // 0x3F8(0x30)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_D3F10A774DCEBBC7CF6FACA843FAA56D; // 0x428(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_F50D097B4AF8FD409EBDB7A56995EB71; // 0x448(0x20)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_5984D2B3487D5E3495C1419E61FA91AE; // 0x468(0x140)(ContainsInstancedReference)
	uint8                                        Pad_4E46[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_49D024DD4CCCDA28D4E6A4B218DA8C95; // 0x5B0(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_1252AA6E4C48E209E99F5A858FD09EF0; // 0x9F0(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_5645113E4C1291E8D49232A713F4ACB6; // 0xE30(0x440)(None)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_7025D9B24B8BA7A8E064D7B07EC6034E; // 0x1270(0x560)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_AACA95D84AFEC4086FC1A294A265E59E; // 0x17D0(0x108)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_3B7EFFCF4949BFB2B690A2B232DA2BD0; // 0x18D8(0x108)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_DE441F9C4EAE45FE6F0458939F735DCA; // 0x19E0(0x108)(None)
	uint8                                        Pad_4E49[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_60A9D728443B8E8A1C2F5384040F6558; // 0x1AF0(0x560)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_48ED4F1E49CCF0DEC16791B6E89B3DD1; // 0x2050(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_E37B2EA54DA6F595A76726885D479DC1; // 0x2158(0x108)(None)
	float                                        Crouching_alpha;                                   // 0x2260(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Jump_alpha;                                        // 0x2264(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USK_M_Med_Soldier_04_Skeleton_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void OnBeginCrouching();
	void OnEndCrouching();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_SK_M_Med_Soldier_04_Skeleton_AnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX);
};

}


