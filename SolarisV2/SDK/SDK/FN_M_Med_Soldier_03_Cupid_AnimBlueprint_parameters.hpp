#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function M_Med_Soldier_03_Cupid_AnimBlueprint.M_Med_Soldier_03_Cupid_AnimBlueprint_C.AnimGraph
struct UM_Med_Soldier_03_Cupid_AnimBlueprint_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function M_Med_Soldier_03_Cupid_AnimBlueprint.M_Med_Soldier_03_Cupid_AnimBlueprint_C.ExecuteUbergraph_M_Med_Soldier_03_Cupid_AnimBlueprint
struct UM_Med_Soldier_03_Cupid_AnimBlueprint_C_ExecuteUbergraph_M_Med_Soldier_03_Cupid_AnimBlueprint_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_64B6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue; // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


