#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x948 - 0x940)
// BlueprintGeneratedClass GA_DefaultPlayer_InteractUse.GA_DefaultPlayer_InteractUse_C
class UGA_DefaultPlayer_InteractUse_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x940(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_DefaultPlayer_InteractUse_C* GetDefaultObj();

	void OnCancelled_A513E1E044E129CC612DF5A23589BC9C();
	void OnInterrupted_A513E1E044E129CC612DF5A23589BC9C();
	void OnBlendOut_A513E1E044E129CC612DF5A23589BC9C();
	void OnCompleted_A513E1E044E129CC612DF5A23589BC9C();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_DefaultPlayer_InteractUse(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


