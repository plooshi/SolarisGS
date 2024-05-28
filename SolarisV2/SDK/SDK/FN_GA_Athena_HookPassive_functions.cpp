#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Athena_HookPassive.GA_Athena_HookPassive_C
// (None)

class UClass* UGA_Athena_HookPassive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Athena_HookPassive_C");

	return Clss;
}


// GA_Athena_HookPassive_C GA_Athena_HookPassive.Default__GA_Athena_HookPassive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Athena_HookPassive_C* UGA_Athena_HookPassive_C::GetDefaultObj()
{
	static class UGA_Athena_HookPassive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Athena_HookPassive_C*>(UGA_Athena_HookPassive_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Athena_HookPassive.GA_Athena_HookPassive_C.OnRep_AmmoReserves
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_HookPassive_C::OnRep_AmmoReserves()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_HookPassive_C", "OnRep_AmmoReserves");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_HookPassive.GA_Athena_HookPassive_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Athena_HookPassive_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_HookPassive_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_HookPassive.GA_Athena_HookPassive_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_HookPassive_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_HookPassive_C", "K2_OnEndAbility");

	Params::UGA_Athena_HookPassive_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_HookPassive.GA_Athena_HookPassive_C.ExecuteUbergraph_GA_Athena_HookPassive
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HookPassive_C::ExecuteUbergraph_GA_Athena_HookPassive(int32 EntryPoint, bool K2Node_Event_bWasCancelled, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_HookPassive_C", "ExecuteUbergraph_GA_Athena_HookPassive");

	Params::UGA_Athena_HookPassive_C_ExecuteUbergraph_GA_Athena_HookPassive_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


