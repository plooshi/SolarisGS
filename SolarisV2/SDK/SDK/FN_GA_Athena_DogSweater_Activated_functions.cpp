#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Athena_DogSweater_Activated.GA_Athena_DogSweater_Activated_C
// (None)

class UClass* UGA_Athena_DogSweater_Activated_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Athena_DogSweater_Activated_C");

	return Clss;
}


// GA_Athena_DogSweater_Activated_C GA_Athena_DogSweater_Activated.Default__GA_Athena_DogSweater_Activated_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Athena_DogSweater_Activated_C* UGA_Athena_DogSweater_Activated_C::GetDefaultObj()
{
	static class UGA_Athena_DogSweater_Activated_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Athena_DogSweater_Activated_C*>(UGA_Athena_DogSweater_Activated_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Athena_DogSweater_Activated.GA_Athena_DogSweater_Activated_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_DogSweater_Activated_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_DogSweater_Activated_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_Athena_DogSweater_Activated_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_DogSweater_Activated.GA_Athena_DogSweater_Activated_C.ExecuteUbergraph_GA_Athena_DogSweater_Activated
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// class AB_BGA_Athena_DogSweater_C*  K2Node_DynamicCast_AsB_BGA_Athena_Dog_Sweater                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_DogSweater_Activated_C::ExecuteUbergraph_GA_Athena_DogSweater_Activated(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, class AB_BGA_Athena_DogSweater_C* K2Node_DynamicCast_AsB_BGA_Athena_Dog_Sweater, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_DogSweater_Activated_C", "ExecuteUbergraph_GA_Athena_DogSweater_Activated");

	Params::UGA_Athena_DogSweater_Activated_C_ExecuteUbergraph_GA_Athena_DogSweater_Activated_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.K2Node_DynamicCast_AsB_BGA_Athena_Dog_Sweater = K2Node_DynamicCast_AsB_BGA_Athena_Dog_Sweater;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


