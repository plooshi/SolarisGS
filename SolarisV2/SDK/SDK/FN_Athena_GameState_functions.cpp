#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_GameState.Athena_GameState_C
// (Actor)

class UClass* AAthena_GameState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_GameState_C");

	return Clss;
}


// Athena_GameState_C Athena_GameState.Default__Athena_GameState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAthena_GameState_C* AAthena_GameState_C::GetDefaultObj()
{
	static class AAthena_GameState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAthena_GameState_C*>(AAthena_GameState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Athena_GameState.Athena_GameState_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AAthena_GameState_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_GameState_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Athena_GameState.Athena_GameState_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AAthena_GameState_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_GameState_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Athena_GameState.Athena_GameState_C.OnWinnerAnnounced
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAthena_GameState_C::OnWinnerAnnounced()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_GameState_C", "OnWinnerAnnounced");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Athena_GameState.Athena_GameState_C.ExecuteUbergraph_Athena_GameState
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSlowMotionOnVictory_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAthena_GameState_C::ExecuteUbergraph_Athena_GameState(int32 EntryPoint, bool CallFunc_CanUseSlowMotionOnVictory_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_GameState_C", "ExecuteUbergraph_Athena_GameState");

	Params::AAthena_GameState_C_ExecuteUbergraph_Athena_GameState_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CanUseSlowMotionOnVictory_ReturnValue = CallFunc_CanUseSlowMotionOnVictory_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


