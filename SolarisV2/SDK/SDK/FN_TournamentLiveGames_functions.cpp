#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TournamentLiveGames.TournamentLiveGames_C
// (None)

class UClass* UTournamentLiveGames_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TournamentLiveGames_C");

	return Clss;
}


// TournamentLiveGames_C TournamentLiveGames.Default__TournamentLiveGames_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTournamentLiveGames_C* UTournamentLiveGames_C::GetDefaultObj()
{
	static class UTournamentLiveGames_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTournamentLiveGames_C*>(UTournamentLiveGames_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TournamentLiveGames.TournamentLiveGames_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTournamentLiveGames_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TournamentLiveGames_C", "BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UTournamentLiveGames_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TournamentLiveGames.TournamentLiveGames_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      TournamentId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      EventId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UTournamentLiveGames_C::Init(const class FString& TournamentId, const class FString& EventId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TournamentLiveGames_C", "Init");

	Params::UTournamentLiveGames_C_Init_Params Parms{};

	Parms.TournamentId = TournamentId;
	Parms.EventId = EventId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TournamentLiveGames.TournamentLiveGames_C.EventColorize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTournamentDisplayInfo  TournamentDisplayInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UTournamentLiveGames_C::EventColorize(const struct FFortTournamentDisplayInfo& TournamentDisplayInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TournamentLiveGames_C", "EventColorize");

	Params::UTournamentLiveGames_C_EventColorize_Params Parms{};

	Parms.TournamentDisplayInfo = TournamentDisplayInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TournamentLiveGames.TournamentLiveGames_C.NotifyNoLiveGames
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTournamentLiveGames_C::NotifyNoLiveGames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TournamentLiveGames_C", "NotifyNoLiveGames");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TournamentLiveGames.TournamentLiveGames_C.NotifyLoadingMoreGames
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsLoading                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTournamentLiveGames_C::NotifyLoadingMoreGames(bool bIsLoading)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TournamentLiveGames_C", "NotifyLoadingMoreGames");

	Params::UTournamentLiveGames_C_NotifyLoadingMoreGames_Params Parms{};

	Parms.bIsLoading = bIsLoading;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TournamentLiveGames.TournamentLiveGames_C.HandleViewLiveGames
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTournamentLiveGames_C::HandleViewLiveGames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TournamentLiveGames_C", "HandleViewLiveGames");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TournamentLiveGames.TournamentLiveGames_C.ExecuteUbergraph_TournamentLiveGames
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_TournamentId                                  (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_EventId                                       (ZeroConstructor, HasGetValueTypeHash)
// struct FFortTournamentDisplayInfo  K2Node_CustomEvent_TournamentDisplayInfo                         (None)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsLoading                                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTournamentLiveGames_C::ExecuteUbergraph_TournamentLiveGames(int32 EntryPoint, const class FString& K2Node_CustomEvent_TournamentId, const class FString& K2Node_CustomEvent_EventId, const struct FFortTournamentDisplayInfo& K2Node_CustomEvent_TournamentDisplayInfo, const struct FLinearColor& K2Node_MakeStruct_LinearColor, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_bIsLoading)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TournamentLiveGames_C", "ExecuteUbergraph_TournamentLiveGames");

	Params::UTournamentLiveGames_C_ExecuteUbergraph_TournamentLiveGames_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_TournamentId = K2Node_CustomEvent_TournamentId;
	Parms.K2Node_CustomEvent_EventId = K2Node_CustomEvent_EventId;
	Parms.K2Node_CustomEvent_TournamentDisplayInfo = K2Node_CustomEvent_TournamentDisplayInfo;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Event_bIsLoading = K2Node_Event_bIsLoading;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TournamentLiveGames.TournamentLiveGames_C.CallEventLiveGamesBack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTournamentLiveGames_C::CallEventLiveGamesBack__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TournamentLiveGames_C", "CallEventLiveGamesBack__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


