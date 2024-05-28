#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x948 - 0x940)
// BlueprintGeneratedClass GA_DefaultPlayer_PetOtherPet.GA_DefaultPlayer_PetOtherPet_C
class UGA_DefaultPlayer_PetOtherPet_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x940(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_DefaultPlayer_PetOtherPet_C* GetDefaultObj();

	void OnCancelled_FB7AFE5D4FF547CAEB1ECA8264EE1330();
	void OnInterrupted_FB7AFE5D4FF547CAEB1ECA8264EE1330();
	void OnBlendOut_FB7AFE5D4FF547CAEB1ECA8264EE1330();
	void OnCompleted_FB7AFE5D4FF547CAEB1ECA8264EE1330();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_DefaultPlayer_PetOtherPet(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


