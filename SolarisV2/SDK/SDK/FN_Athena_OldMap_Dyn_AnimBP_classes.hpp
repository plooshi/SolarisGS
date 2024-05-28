#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1F8 (0x460 - 0x268)
// AnimBlueprintGeneratedClass Athena_OldMap_Dyn_AnimBP.Athena_OldMap_Dyn_AnimBP_C
class UAthena_OldMap_Dyn_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_1E8E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_C50417FB4CEEC766610D8B8826E6EF4E; // 0x278(0x30)(None)
	struct FAnimNode_SubInput                    AnimGraphNode_SubInput_E20190B541022F1ED36DDD8D005572CE; // 0x2A8(0x70)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_47CB88DE495010F92DE91E86C87BFA3D; // 0x318(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_92D8A6714CBD87BBA9ED8EB290A4AF2C; // 0x420(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_771DA2CD45411A636FA772B1D89F9F05; // 0x440(0x20)(None)

	static class UClass* StaticClass();
	static class UAthena_OldMap_Dyn_AnimBP_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Athena_OldMap_Dyn_AnimBP(int32 EntryPoint);
};

}


