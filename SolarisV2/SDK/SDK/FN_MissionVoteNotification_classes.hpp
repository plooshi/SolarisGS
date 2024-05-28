#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB8 - 0xB0)
// BlueprintGeneratedClass MissionVoteNotification.MissionVoteNotification_C
class UMissionVoteNotification_C : public UFortMissionVoteUINotification
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UMissionVoteNotification_C* GetDefaultObj();

	void OnActionTaken();
	void ExecuteUbergraph_MissionVoteNotification(int32 EntryPoint, class UMissionActivationWidget_C* CallFunc_Create_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
};

}


