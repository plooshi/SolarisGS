#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_GM_OnDmgDealt_LifeSteal.GA_GM_OnDmgDealt_LifeSteal_C
// (None)

class UClass* UGA_GM_OnDmgDealt_LifeSteal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_GM_OnDmgDealt_LifeSteal_C");

	return Clss;
}


// GA_GM_OnDmgDealt_LifeSteal_C GA_GM_OnDmgDealt_LifeSteal.Default__GA_GM_OnDmgDealt_LifeSteal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_GM_OnDmgDealt_LifeSteal_C* UGA_GM_OnDmgDealt_LifeSteal_C::GetDefaultObj()
{
	static class UGA_GM_OnDmgDealt_LifeSteal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_GM_OnDmgDealt_LifeSteal_C*>(UGA_GM_OnDmgDealt_LifeSteal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_GM_OnDmgDealt_LifeSteal.GA_GM_OnDmgDealt_LifeSteal_C.DoOnDmgDealtBehavior
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_GM_OnDmgDealt_LifeSteal_C::DoOnDmgDealtBehavior(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_GM_OnDmgDealt_LifeSteal_C", "DoOnDmgDealtBehavior");

	Params::UGA_GM_OnDmgDealt_LifeSteal_C_DoOnDmgDealtBehavior_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_GM_OnDmgDealt_LifeSteal.GA_GM_OnDmgDealt_LifeSteal_C.ExecuteUbergraph_GA_GM_OnDmgDealt_LifeSteal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (None)

void UGA_GM_OnDmgDealt_LifeSteal_C::ExecuteUbergraph_GA_GM_OnDmgDealt_LifeSteal(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_GM_OnDmgDealt_LifeSteal_C", "ExecuteUbergraph_GA_GM_OnDmgDealt_LifeSteal");

	Params::UGA_GM_OnDmgDealt_LifeSteal_C_ExecuteUbergraph_GA_GM_OnDmgDealt_LifeSteal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;

	UObject::ProcessEvent(Func, &Parms);

}

}


