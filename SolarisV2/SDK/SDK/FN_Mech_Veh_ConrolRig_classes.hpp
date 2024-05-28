#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1758 (0x1970 - 0x218)
// ControlRigBlueprintGeneratedClass Mech_Veh_ConrolRig.Mech_Veh_ConrolRig_C
class UMech_Veh_ConrolRig_C : public UControlRig
{
public:
	struct FRigUnit_BeginExecution               BeginExecution_0;                                  // 0x218(0x38)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_Control                      Leg_IK_L;                                          // 0x250(0xF0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SpringIK                     SpringIK_0;                                        // 0x340(0x190)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SetBoneTransform             SetBoneTransform_0;                                // 0x4D0(0x80)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_Control                      Knee_Pole_Vector_L;                                // 0x550(0xF0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformMul             MathTransformMul_0;                                // 0x640(0xB0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_0;                                // 0x6F0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_1;                                // 0x760(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_Control                      Leg_IK_R;                                          // 0x7D0(0xF0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SpringIK                     SpringIK_1;                                        // 0x8C0(0x190)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SetBoneTransform             SetBoneTransform_1;                                // 0xA50(0x80)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_Control                      Knee_Pole_Vector_R;                                // 0xAD0(0xF0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformMul             MathTransformMul_1;                                // 0xBC0(0xB0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_2;                                // 0xC70(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_3;                                // 0xCE0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetInitialBoneTransform      GetInitialBoneTransform_0;                         // 0xD50(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetInitialBoneTransform      GetInitialBoneTransform_1;                         // 0xDC0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformMakeRelative    MathTransformMakeRelative_0;                       // 0xE30(0xB0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformMul             MathTransformMul_2;                                // 0xEE0(0xB0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetInitialBoneTransform      GetInitialBoneTransform_2;                         // 0xF90(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetInitialBoneTransform      GetInitialBoneTransform_3;                         // 0x1000(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformMakeRelative    MathTransformMakeRelative_1;                       // 0x1070(0xB0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformMul             MathTransformMul_3;                                // 0x1120(0xB0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_FABRIK                       FABRIK_0;                                          // 0x11D0(0xC0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_FABRIK                       FABRIK_1;                                          // 0x1290(0xC0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SetBoneRotation              SetBoneRotation_3;                                 // 0x1350(0x60)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_1_0;                              // 0x13B0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetInitialBoneTransform      GetInitialBoneTransform_3_0;                       // 0x1420(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetInitialBoneTransform      GetInitialBoneTransform_4;                         // 0x1490(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformMakeRelative    MathTransformMakeRelative_0_0;                     // 0x1500(0xB0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformMul             MathTransformMul_0_0;                              // 0x15B0(0xB0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SetBoneRotation              SetBoneRotation_5;                                 // 0x1660(0x60)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_0_0;                              // 0x16C0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetInitialBoneTransform      GetInitialBoneTransform_6;                         // 0x1730(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetInitialBoneTransform      GetInitialBoneTransform_7;                         // 0x17A0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformMakeRelative    MathTransformMakeRelative_1_0;                     // 0x1810(0xB0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformMul             MathTransformMul_1_0;                              // 0x18C0(0xB0)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UMech_Veh_ConrolRig_C* GetDefaultObj();

};

}


