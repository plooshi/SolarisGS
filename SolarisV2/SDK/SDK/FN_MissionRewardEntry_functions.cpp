#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MissionRewardEntry.MissionRewardEntry_C
// (None)

class UClass* UMissionRewardEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionRewardEntry_C");

	return Clss;
}


// MissionRewardEntry_C MissionRewardEntry.Default__MissionRewardEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionRewardEntry_C* UMissionRewardEntry_C::GetDefaultObj()
{
	static class UMissionRewardEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionRewardEntry_C*>(UMissionRewardEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MissionRewardEntry.MissionRewardEntry_C.ShowCompletionCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionRewardEntry_C::ShowCompletionCheck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionRewardEntry_C", "ShowCompletionCheck");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionRewardEntry.MissionRewardEntry_C.HideCompletionCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionRewardEntry_C::HideCompletionCheck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionRewardEntry_C", "HideCompletionCheck");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionRewardEntry.MissionRewardEntry_C.HideSelectionBorder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionRewardEntry_C::HideSelectionBorder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionRewardEntry_C", "HideSelectionBorder");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionRewardEntry.MissionRewardEntry_C.ShowSelectionBorder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionRewardEntry_C::ShowSelectionBorder(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionRewardEntry_C", "ShowSelectionBorder");

	Params::UMissionRewardEntry_C_ShowSelectionBorder_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionRewardEntry.MissionRewardEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMissionRewardEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionRewardEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionRewardEntry.MissionRewardEntry_C.ExecuteUbergraph_MissionRewardEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionRewardEntry_C::ExecuteUbergraph_MissionRewardEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionRewardEntry_C", "ExecuteUbergraph_MissionRewardEntry");

	Params::UMissionRewardEntry_C_ExecuteUbergraph_MissionRewardEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


