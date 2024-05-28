#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7D2 (0xA3A - 0x268)
// AnimBlueprintGeneratedClass CowboyPistol_AnimBP.CowboyPistol_AnimBP_C
class UCowboyPistol_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_51C9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_442E6B9D435AE8995A390EB7E8F3C581; // 0x278(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_3ED598E0460076589068709A8B67886F; // 0x2A8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7263B320484139E8E8AEE681524D2915; // 0x2F0(0x78)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_2F6FBC31412496F7A84CA088C79E45E5; // 0x368(0xC8)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_ADF14F354FC283207EA8EAADFE15105D; // 0x430(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_FD0EAE864F3471C855E9B280A42E92F9; // 0x458(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_DF2336604D6803012122B4878C5D8393; // 0x480(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1000B18F4202289D2CAE59BE965C93D3; // 0x4A8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_EFF414694ECE3CB3FC0617AF218EFB1D; // 0x4D0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_27C94DCF4E9CA702B64B778A5F360593; // 0x4F8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_91F106DE49491495C4B4A182F401CF49; // 0x520(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4595911243E88B402643B0B8404BF73E; // 0x548(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2CB40C09401B5E93F8D884834E9E68E5; // 0x5C0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_0E4B92E04C71FBA7612306B313CBD0A8; // 0x5F0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_EBEB96034A0E0A8AD6951D8CC3924E80; // 0x668(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_C1B3E375486AA11B282A6892F3073CFE; // 0x698(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_73771CD347CA78F9FCF00BB394E78E3E; // 0x710(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_A1BDA177449286213C03CB95FE124AC3; // 0x740(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1E54201D44888361B87A89B66B0D08C3; // 0x7B8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_31D6BFEF41AC9219BC11C9B1EC988910; // 0x7E8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6D6620BA467C5297112E64A55DD33F3A; // 0x860(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_061BCCBC4B58400CEB7CB7B88B7D9DEC; // 0x890(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6838A9C349D4D11B0ED2D28CA863AC31; // 0x908(0x30)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_933AA3FD4059406AE023909CF3DF3046; // 0x938(0x18)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_E5E3080E424CC9CA67EDD1B343B030C3; // 0x950(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_73B093474CE4B196755BD5AACA808B91; // 0x980(0xB0)(None)
	int32                                        ChamberRotationCounter;                            // 0xA30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ChamberPosition_1;                                 // 0xA34(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ChamberPosition_6;                                 // 0xA35(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ChamberPosition_2;                                 // 0xA36(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ChamberPosition_3;                                 // 0xA37(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ChamberPosition_4;                                 // 0xA38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ChamberPosition_5;                                 // 0xA39(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UCowboyPistol_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void AnimNotify_ChamberRotation();
	void ExecuteUbergraph_CowboyPistol_AnimBP(int32 EntryPoint, int32 Temp_int_Variable, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


