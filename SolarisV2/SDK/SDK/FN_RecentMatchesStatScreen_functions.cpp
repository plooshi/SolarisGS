#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass RecentMatchesStatScreen.RecentMatchesStatScreen_C
// (None)

class UClass* URecentMatchesStatScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RecentMatchesStatScreen_C");

	return Clss;
}


// RecentMatchesStatScreen_C RecentMatchesStatScreen.Default__RecentMatchesStatScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URecentMatchesStatScreen_C* URecentMatchesStatScreen_C::GetDefaultObj()
{
	static class URecentMatchesStatScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URecentMatchesStatScreen_C*>(URecentMatchesStatScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URecentMatchesStatScreen_C::HandleBack(bool* PassThrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RecentMatchesStatScreen_C", "HandleBack");

	Params::URecentMatchesStatScreen_C_HandleBack_Params Parms{};

	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void URecentMatchesStatScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RecentMatchesStatScreen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void URecentMatchesStatScreen_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RecentMatchesStatScreen_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void URecentMatchesStatScreen_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RecentMatchesStatScreen_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.OnStartFetchingData
// (Event, Public, BlueprintEvent)
// Parameters:

void URecentMatchesStatScreen_C::OnStartFetchingData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RecentMatchesStatScreen_C", "OnStartFetchingData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.OnNoData
// (Event, Public, BlueprintEvent)
// Parameters:

void URecentMatchesStatScreen_C::OnNoData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RecentMatchesStatScreen_C", "OnNoData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.OnDataRecieved
// (Event, Public, BlueprintEvent)
// Parameters:

void URecentMatchesStatScreen_C::OnDataRecieved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RecentMatchesStatScreen_C", "OnDataRecieved");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.OnRecentMatcheChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void URecentMatchesStatScreen_C::OnRecentMatcheChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RecentMatchesStatScreen_C", "OnRecentMatcheChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.ExecuteUbergraph_RecentMatchesStatScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAthenaMatchStatView*>CallFunc_GetRecentMatches_ReturnValue                            (ZeroConstructor, ReferenceParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void URecentMatchesStatScreen_C::ExecuteUbergraph_RecentMatchesStatScreen(int32 EntryPoint, TArray<class UAthenaMatchStatView*>& CallFunc_GetRecentMatches_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RecentMatchesStatScreen_C", "ExecuteUbergraph_RecentMatchesStatScreen");

	Params::URecentMatchesStatScreen_C_ExecuteUbergraph_RecentMatchesStatScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetRecentMatches_ReturnValue = CallFunc_GetRecentMatches_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


