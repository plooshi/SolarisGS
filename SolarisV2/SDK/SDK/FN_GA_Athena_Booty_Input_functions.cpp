#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Athena_Booty_Input.GA_Athena_Booty_Input_C
// (None)

class UClass* UGA_Athena_Booty_Input_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Athena_Booty_Input_C");

	return Clss;
}


// GA_Athena_Booty_Input_C GA_Athena_Booty_Input.Default__GA_Athena_Booty_Input_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Athena_Booty_Input_C* UGA_Athena_Booty_Input_C::GetDefaultObj()
{
	static class UGA_Athena_Booty_Input_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Athena_Booty_Input_C*>(UGA_Athena_Booty_Input_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Athena_Booty_Input.GA_Athena_Booty_Input_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Athena_Booty_Input_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Booty_Input_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_Booty_Input.GA_Athena_Booty_Input_C.ExecuteUbergraph_GA_Athena_Booty_Input
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_Booty_Input_C::ExecuteUbergraph_GA_Athena_Booty_Input(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Booty_Input_C", "ExecuteUbergraph_GA_Athena_Booty_Input");

	Params::UGA_Athena_Booty_Input_C_ExecuteUbergraph_GA_Athena_Booty_Input_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


