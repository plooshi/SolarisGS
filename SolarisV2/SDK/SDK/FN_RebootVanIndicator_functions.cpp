#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass RebootVanIndicator.RebootVanIndicator_C
// (None)

class UClass* URebootVanIndicator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RebootVanIndicator_C");

	return Clss;
}


// RebootVanIndicator_C RebootVanIndicator.Default__RebootVanIndicator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URebootVanIndicator_C* URebootVanIndicator_C::GetDefaultObj()
{
	static class URebootVanIndicator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URebootVanIndicator_C*>(URebootVanIndicator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RebootVanIndicator.RebootVanIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void URebootVanIndicator_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RebootVanIndicator_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RebootVanIndicator.RebootVanIndicator_C.ExecuteUbergraph_RebootVanIndicator
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URebootVanIndicator_C::ExecuteUbergraph_RebootVanIndicator(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RebootVanIndicator_C", "ExecuteUbergraph_RebootVanIndicator");

	Params::URebootVanIndicator_C_ExecuteUbergraph_RebootVanIndicator_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


