#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FlameCounter.FlameCounter_C
// (None)

class UClass* UFlameCounter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FlameCounter_C");

	return Clss;
}


// FlameCounter_C FlameCounter.Default__FlameCounter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFlameCounter_C* UFlameCounter_C::GetDefaultObj()
{
	static class UFlameCounter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFlameCounter_C*>(UFlameCounter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FlameCounter.FlameCounter_C.PlayIncreaseVote
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFlameCounter_C::PlayIncreaseVote()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlameCounter_C", "PlayIncreaseVote");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FlameCounter.FlameCounter_C.PlayIdle
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFlameCounter_C::PlayIdle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlameCounter_C", "PlayIdle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FlameCounter.FlameCounter_C.ExecuteUbergraph_FlameCounter
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlameCounter_C::ExecuteUbergraph_FlameCounter(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlameCounter_C", "ExecuteUbergraph_FlameCounter");

	Params::UFlameCounter_C_ExecuteUbergraph_FlameCounter_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


