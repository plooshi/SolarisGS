#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionVoteNotification.MissionVoteNotification_C
// (None)

class UClass* UMissionVoteNotification_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionVoteNotification_C");

	return Clss;
}


// MissionVoteNotification_C MissionVoteNotification.Default__MissionVoteNotification_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionVoteNotification_C* UMissionVoteNotification_C::GetDefaultObj()
{
	static class UMissionVoteNotification_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionVoteNotification_C*>(UMissionVoteNotification_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MissionVoteNotification.MissionVoteNotification_C.OnActionTaken
// (Event, Public, BlueprintEvent)
// Parameters:

void UMissionVoteNotification_C::OnActionTaken()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionVoteNotification_C", "OnActionTaken");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionVoteNotification.MissionVoteNotification_C.ExecuteUbergraph_MissionVoteNotification
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMissionActivationWidget_C*  CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionVoteNotification_C::ExecuteUbergraph_MissionVoteNotification(int32 EntryPoint, class UMissionActivationWidget_C* CallFunc_Create_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionVoteNotification_C", "ExecuteUbergraph_MissionVoteNotification");

	Params::UMissionVoteNotification_C_ExecuteUbergraph_MissionVoteNotification_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


