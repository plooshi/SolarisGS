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

// 0xB0 (0xB0 - 0x0)
// Function GA_GM_OnDmgDealtBase.GA_GM_OnDmgDealtBase_C.DoOnDmgDealtBehavior
struct UGA_GM_OnDmgDealtBase_C_DoOnDmgDealtBehavior_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xB0 (0xB0 - 0x0)
// Function GA_GM_OnDmgDealtBase.GA_GM_OnDmgDealtBase_C.K2_ActivateAbilityFromEvent
struct UGA_GM_OnDmgDealtBase_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xB9 (0xB9 - 0x0)
// Function GA_GM_OnDmgDealtBase.GA_GM_OnDmgDealtBase_C.ExecuteUbergraph_GA_GM_OnDmgDealtBase
struct UGA_GM_OnDmgDealtBase_C_ExecuteUbergraph_GA_GM_OnDmgDealtBase_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_45FE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x8(0xB0)(ConstParm)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue;             // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


