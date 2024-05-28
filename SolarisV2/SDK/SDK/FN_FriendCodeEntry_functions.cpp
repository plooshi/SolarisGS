#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FriendCodeEntry.FriendCodeEntry_C
// (None)

class UClass* UFriendCodeEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FriendCodeEntry_C");

	return Clss;
}


// FriendCodeEntry_C FriendCodeEntry.Default__FriendCodeEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFriendCodeEntry_C* UFriendCodeEntry_C::GetDefaultObj()
{
	static class UFriendCodeEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFriendCodeEntry_C*>(UFriendCodeEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FriendCodeEntry.FriendCodeEntry_C.SetupMIDs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFriendCodeEntry_C::SetupMIDs(bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendCodeEntry_C", "SetupMIDs");

	Params::UFriendCodeEntry_C_SetupMIDs_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FriendCodeEntry.FriendCodeEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFriendCodeEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendCodeEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FriendCodeEntry.FriendCodeEntry_C.SetUsedDisplayState
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFriendCodeEntry_C::SetUsedDisplayState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendCodeEntry_C", "SetUsedDisplayState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FriendCodeEntry.FriendCodeEntry_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFriendCodeEntry_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendCodeEntry_C", "BP_OnClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FriendCodeEntry.FriendCodeEntry_C.ExecuteUbergraph_FriendCodeEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFriendCodeEntry_C::ExecuteUbergraph_FriendCodeEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendCodeEntry_C", "ExecuteUbergraph_FriendCodeEntry");

	Params::UFriendCodeEntry_C_ExecuteUbergraph_FriendCodeEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


