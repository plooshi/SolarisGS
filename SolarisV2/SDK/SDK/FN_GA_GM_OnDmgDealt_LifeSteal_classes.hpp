#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x980 - 0x978)
// BlueprintGeneratedClass GA_GM_OnDmgDealt_LifeSteal.GA_GM_OnDmgDealt_LifeSteal_C
class UGA_GM_OnDmgDealt_LifeSteal_C : public UGA_GM_OnDmgDealt_SelfHeal_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x978(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_GM_OnDmgDealt_LifeSteal_C* GetDefaultObj();

	void DoOnDmgDealtBehavior(const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_GM_OnDmgDealt_LifeSteal(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData);
};

}


