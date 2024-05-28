#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass JoinVoiceChannelButton.JoinVoiceChannelButton_C
// (None)

class UClass* UJoinVoiceChannelButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JoinVoiceChannelButton_C");

	return Clss;
}


// JoinVoiceChannelButton_C JoinVoiceChannelButton.Default__JoinVoiceChannelButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UJoinVoiceChannelButton_C* UJoinVoiceChannelButton_C::GetDefaultObj()
{
	static class UJoinVoiceChannelButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UJoinVoiceChannelButton_C*>(UJoinVoiceChannelButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function JoinVoiceChannelButton.JoinVoiceChannelButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UJoinVoiceChannelButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JoinVoiceChannelButton_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JoinVoiceChannelButton.JoinVoiceChannelButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UJoinVoiceChannelButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JoinVoiceChannelButton_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JoinVoiceChannelButton.JoinVoiceChannelButton_C.ExecuteUbergraph_JoinVoiceChannelButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJoinVoiceChannelButton_C::ExecuteUbergraph_JoinVoiceChannelButton(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JoinVoiceChannelButton_C", "ExecuteUbergraph_JoinVoiceChannelButton");

	Params::UJoinVoiceChannelButton_C_ExecuteUbergraph_JoinVoiceChannelButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


