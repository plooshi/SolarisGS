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

// 0x18 (0x18 - 0x0)
// Function LiveStreamVoice.LiveStreamVoiceSubsystem.SetVoiceSettings
struct ULiveStreamVoiceSubsystem_SetVoiceSettings_Params
{
public:
	struct FVoiceSettings                        InSettings;                                        // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function LiveStreamVoice.LiveStreamVoiceSubsystem.EnableLocalVoiceProcessing
struct ULiveStreamVoiceSubsystem_EnableLocalVoiceProcessing_Params
{
public:
	uint8                                        LocalUserNum;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnable;                                           // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


