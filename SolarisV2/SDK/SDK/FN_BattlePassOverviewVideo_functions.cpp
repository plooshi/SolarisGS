#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BattlePassOverviewVideo.BattlePassOverviewVideo_C
// (None)

class UClass* UBattlePassOverviewVideo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassOverviewVideo_C");

	return Clss;
}


// BattlePassOverviewVideo_C BattlePassOverviewVideo.Default__BattlePassOverviewVideo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattlePassOverviewVideo_C* UBattlePassOverviewVideo_C::GetDefaultObj()
{
	static class UBattlePassOverviewVideo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassOverviewVideo_C*>(UBattlePassOverviewVideo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePassOverviewVideo.BattlePassOverviewVideo_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassOverviewVideo_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassOverviewVideo_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassOverviewVideo.BattlePassOverviewVideo_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassOverviewVideo_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassOverviewVideo_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassOverviewVideo.BattlePassOverviewVideo_C.MediaOpened
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassOverviewVideo_C::MediaOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassOverviewVideo_C", "MediaOpened");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassOverviewVideo.BattlePassOverviewVideo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePassOverviewVideo_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassOverviewVideo_C", "PreConstruct");

	Params::UBattlePassOverviewVideo_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassOverviewVideo.BattlePassOverviewVideo_C.ExecuteUbergraph_BattlePassOverviewVideo
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassOverviewVideo_C::ExecuteUbergraph_BattlePassOverviewVideo(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassOverviewVideo_C", "ExecuteUbergraph_BattlePassOverviewVideo");

	Params::UBattlePassOverviewVideo_C_ExecuteUbergraph_BattlePassOverviewVideo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


