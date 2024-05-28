#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7D2 (0xA3A - 0x268)
// AnimBlueprintGeneratedClass Pistol_Revolver_SideAction_AnimBP1.Pistol_Revolver_SideAction_AnimBP1_C
class UPistol_Revolver_SideAction_AnimBP1_C : public UAnimInstance
{
public:
	uint8                                        Pad_1355[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_CDDFF76A4896153EE4A1F89D027B3A81; // 0x278(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_ECC95F6741DA3B90EFE754B4020E142F; // 0x2A8(0x48)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_5F067A87494E3F5CA0FD35BE6D823899; // 0x2F0(0xC8)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_22B493C84E2826898F39A3BE2BDE4592; // 0x3B8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8461A45D4BD1364A51FED481EA992512; // 0x3E0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_A9383C4B4E08EA21D593A7813CB73765; // 0x408(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6589BAFF47EDBA94394D7384A7337675; // 0x430(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_93A44DE846435EB02304578E39F0170D; // 0x458(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1EB88F604BDE635D97A524BB426B0089; // 0x480(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1EF390EA4EC30B00D12AF681BE6E7978; // 0x4A8(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_E1DC4C1A42B317E86DF3008DC446867D; // 0x4D0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_B8EFB3CE4C88361F9F266AACDC047A46; // 0x548(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_484F09224D8B8EC86E728786A4071496; // 0x578(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2A5822084DDC6C7C00AD8691B1DB431E; // 0x5F0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_0D4DD44F4BC8A40EAA3F6BAD22959723; // 0x620(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_78BAC54C45BE971048FD22B904773E31; // 0x698(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_A98EA20C4932D0827D500792CE250873; // 0x6C8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2B44584E4EC6E751153196B0C357029D; // 0x740(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_0C4CC7E341EF2EE86A85FB9B477CB100; // 0x770(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_A4D028704BACF073C64E4FA45D681FC2; // 0x7E8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4E6337AA41097662F07206B98054C2A6; // 0x818(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_11E879B84C7A29FCE58E41A584217F19; // 0x890(0x30)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_6DF28DCC49C4DF9C2E8EEBA32AD620AA; // 0x8C0(0x18)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_DD2F6765469B797183B0629B47EA0E8A; // 0x8D8(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_840FFAE24DD44FA1297C869A7DE741E9; // 0x908(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3381CE494ED9270A1F73BD9D0613021B; // 0x9B8(0x78)(None)
	int32                                        DrumPositionCount;                                 // 0xA30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldRotateToPos1;                                // 0xA34(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShouldRotateToPos2;                                // 0xA35(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShouldRotateToPos3;                                // 0xA36(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShouldRotateToPos4;                                // 0xA37(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShouldRotateToPos5;                                // 0xA38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShouldRotateToPos6;                                // 0xA39(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UPistol_Revolver_SideAction_AnimBP1_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void AnimNotify_Revolver_RotChamber();
	void ExecuteUbergraph_Pistol_Revolver_SideAction_AnimBP1(int32 EntryPoint, int32 Temp_int_Variable, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


