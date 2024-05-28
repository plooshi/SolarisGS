#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD8 (0x2F0 - 0x218)
// ControlRigBlueprintGeneratedClass Mech_Veh_AmmoFeed_ControlRig.Mech_Veh_AmmoFeed_ControlRig_C
class UMech_Veh_AmmoFeed_ControlRig_C : public UControlRig
{
public:
	struct FRigUnit_BeginExecution               BeginExecution;                                    // 0x218(0x38)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        ChainSlide;                                        // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D62[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_SlideChain                   SlideChain;                                        // 0x258(0x98)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UMech_Veh_AmmoFeed_ControlRig_C* GetDefaultObj();

};

}


