#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class NetUI.BadNetworkIndicator
// (None)

class UClass* UBadNetworkIndicator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BadNetworkIndicator");

	return Clss;
}


// BadNetworkIndicator NetUI.Default__BadNetworkIndicator
// (Public, ClassDefaultObject, ArchetypeObject)

class UBadNetworkIndicator* UBadNetworkIndicator::GetDefaultObj()
{
	static class UBadNetworkIndicator* Default = nullptr;

	if (!Default)
		Default = static_cast<UBadNetworkIndicator*>(UBadNetworkIndicator::StaticClass()->DefaultObject);

	return Default;
}


// Function NetUI.BadNetworkIndicator.UpdateDisplay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBadNetworkIndicator::UpdateDisplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BadNetworkIndicator", "UpdateDisplay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NetUI.BadNetworkIndicator.ShouldDisplay
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBadNetworkIndicator::ShouldDisplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BadNetworkIndicator", "ShouldDisplay");

	Params::UBadNetworkIndicator_ShouldDisplay_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NetUI.BadNetworkIndicator.HasSeverePing
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBadNetworkIndicator::HasSeverePing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BadNetworkIndicator", "HasSeverePing");

	Params::UBadNetworkIndicator_HasSeverePing_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NetUI.BadNetworkIndicator.HasSeverePacketLoss
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBadNetworkIndicator::HasSeverePacketLoss()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BadNetworkIndicator", "HasSeverePacketLoss");

	Params::UBadNetworkIndicator_HasSeverePacketLoss_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NetUI.BadNetworkIndicator.HasBadPing
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBadNetworkIndicator::HasBadPing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BadNetworkIndicator", "HasBadPing");

	Params::UBadNetworkIndicator_HasBadPing_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NetUI.BadNetworkIndicator.HasBadPacketLoss
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBadNetworkIndicator::HasBadPacketLoss()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BadNetworkIndicator", "HasBadPacketLoss");

	Params::UBadNetworkIndicator_HasBadPacketLoss_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NetUI.BadNetworkIndicator.GetPing
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UBadNetworkIndicator::GetPing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BadNetworkIndicator", "GetPing");

	Params::UBadNetworkIndicator_GetPing_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NetUI.BadNetworkIndicator.GetPacketLoss
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UBadNetworkIndicator::GetPacketLoss()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BadNetworkIndicator", "GetPacketLoss");

	Params::UBadNetworkIndicator_GetPacketLoss_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class NetUI.NetDebugWidget
// (None)

class UClass* UNetDebugWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetDebugWidget");

	return Clss;
}


// NetDebugWidget NetUI.Default__NetDebugWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetDebugWidget* UNetDebugWidget::GetDefaultObj()
{
	static class UNetDebugWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetDebugWidget*>(UNetDebugWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function NetUI.NetDebugWidget.StopTimer
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UNetDebugWidget::StopTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NetDebugWidget", "StopTimer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NetUI.NetDebugWidget.StartTimer
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UNetDebugWidget::StartTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NetDebugWidget", "StartTimer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class NetUI.NetGraph
// (None)

class UClass* UNetGraph::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetGraph");

	return Clss;
}


// NetGraph NetUI.Default__NetGraph
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetGraph* UNetGraph::GetDefaultObj()
{
	static class UNetGraph* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetGraph*>(UNetGraph::StaticClass()->DefaultObject);

	return Default;
}

}


