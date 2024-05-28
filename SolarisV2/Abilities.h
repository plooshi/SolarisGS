#pragma once

namespace Abilites
{
    HolderFunc(InternalTryActivateAbility, (bool (*)(UAbilitySystemComponent* AbilitySystemComp, FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey InPredictionKey, UGameplayAbility** OutInstancedAbility, void* OnGameplayAbilityEndedDelegate, const FGameplayEventData* TriggerEventData)) (BaseAddress + 0x910620));
    void InternalServerTryActivateAbilityHook(UFortAbilitySystemComponentAthena* ASC, FGameplayAbilitySpecHandle Handle, bool InputPressed, FPredictionKey& PredictionKey, FGameplayEventData* TriggerEventData)
    {
        auto Spec = ASC->ActivatableAbilities.Items.Search<FGameplayAbilitySpecHandle>([](FGameplayAbilitySpec& item, FGameplayAbilitySpecHandle& Handle) [[msvc::forceinline]] {
            return item.Handle.Handle == Handle.Handle;
        }, Handle);
        if (!Spec)
            return ASC->ClientActivateAbilityFailed(Handle, PredictionKey.Current);

        Spec->InputPressed = true;

        UGameplayAbility* AbilityOut = nullptr;
        if (!InternalTryActivateAbility(ASC, Handle, PredictionKey, &AbilityOut, nullptr, TriggerEventData))
        {
            ASC->ClientActivateAbilityFailed(Handle, PredictionKey.Current);
            Spec->InputPressed = false;
        }
        ASC->ActivatableAbilities.MarkItemDirty(*Spec);
    }
	__forceinline void HookAll()
	{
        HookEvery<UAbilitySystemComponent>(245, InternalServerTryActivateAbilityHook);
	}
}
