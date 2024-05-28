#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WM_Lights.WM_Lights_C
// (Actor)

class UClass* AWM_Lights_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WM_Lights_C");

	return Clss;
}


// WM_Lights_C WM_Lights.Default__WM_Lights_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWM_Lights_C* AWM_Lights_C::GetDefaultObj()
{
	static class AWM_Lights_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWM_Lights_C*>(AWM_Lights_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WM_Lights.WM_Lights_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWM_Lights_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WM_Lights_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WM_Lights.WM_Lights_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AWM_Lights_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WM_Lights_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WM_Lights.WM_Lights_C.WM-Lightcontrol
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TurnOn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWM_Lights_C::WMMinusLightcontrol(bool TurnOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WM_Lights_C", "WM-Lightcontrol");

	Params::AWM_Lights_C_WMMinusLightcontrol_Params Parms{};

	Parms.TurnOn = TurnOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WM_Lights.WM_Lights_C.ExecuteUbergraph_WM_Lights
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_TurnOn                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWM_Lights_C::ExecuteUbergraph_WM_Lights(int32 EntryPoint, bool K2Node_CustomEvent_TurnOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WM_Lights_C", "ExecuteUbergraph_WM_Lights");

	Params::AWM_Lights_C_ExecuteUbergraph_WM_Lights_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_TurnOn = K2Node_CustomEvent_TurnOn;

	UObject::ProcessEvent(Func, &Parms);

}

}


