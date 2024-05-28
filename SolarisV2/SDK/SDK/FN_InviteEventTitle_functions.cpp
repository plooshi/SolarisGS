#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass InviteEventTitle.InviteEventTitle_C
// (None)

class UClass* UInviteEventTitle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InviteEventTitle_C");

	return Clss;
}


// InviteEventTitle_C InviteEventTitle.Default__InviteEventTitle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInviteEventTitle_C* UInviteEventTitle_C::GetDefaultObj()
{
	static class UInviteEventTitle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInviteEventTitle_C*>(UInviteEventTitle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InviteEventTitle.InviteEventTitle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UInviteEventTitle_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InviteEventTitle_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InviteEventTitle.InviteEventTitle_C.ExecuteUbergraph_InviteEventTitle
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInviteUIDisabled_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInviteEventTitle_C::ExecuteUbergraph_InviteEventTitle(int32 EntryPoint, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_IsInviteUIDisabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InviteEventTitle_C", "ExecuteUbergraph_InviteEventTitle");

	Params::UInviteEventTitle_C_ExecuteUbergraph_InviteEventTitle_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.CallFunc_IsInviteUIDisabled_ReturnValue = CallFunc_IsInviteUIDisabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


