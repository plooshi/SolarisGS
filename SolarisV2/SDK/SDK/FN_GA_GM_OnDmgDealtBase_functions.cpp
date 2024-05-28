#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_GM_OnDmgDealtBase.GA_GM_OnDmgDealtBase_C
// (None)

class UClass* UGA_GM_OnDmgDealtBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_GM_OnDmgDealtBase_C");

	return Clss;
}


// GA_GM_OnDmgDealtBase_C GA_GM_OnDmgDealtBase.Default__GA_GM_OnDmgDealtBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_GM_OnDmgDealtBase_C* UGA_GM_OnDmgDealtBase_C::GetDefaultObj()
{
	static class UGA_GM_OnDmgDealtBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_GM_OnDmgDealtBase_C*>(UGA_GM_OnDmgDealtBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_GM_OnDmgDealtBase.GA_GM_OnDmgDealtBase_C.DoOnDmgDealtBehavior
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_GM_OnDmgDealtBase_C::DoOnDmgDealtBehavior(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_GM_OnDmgDealtBase_C", "DoOnDmgDealtBehavior");

	Params::UGA_GM_OnDmgDealtBase_C_DoOnDmgDealtBehavior_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_GM_OnDmgDealtBase.GA_GM_OnDmgDealtBase_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_GM_OnDmgDealtBase_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_GM_OnDmgDealtBase_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_GM_OnDmgDealtBase_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_GM_OnDmgDealtBase.GA_GM_OnDmgDealtBase_C.ExecuteUbergraph_GA_GM_OnDmgDealtBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_GM_OnDmgDealtBase_C::ExecuteUbergraph_GA_GM_OnDmgDealtBase(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_K2_CommitAbility_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_GM_OnDmgDealtBase_C", "ExecuteUbergraph_GA_GM_OnDmgDealtBase");

	Params::UGA_GM_OnDmgDealtBase_C_ExecuteUbergraph_GA_GM_OnDmgDealtBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


