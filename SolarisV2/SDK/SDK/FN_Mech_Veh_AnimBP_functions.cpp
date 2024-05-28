#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Mech_Veh_AnimBP.Mech_Veh_AnimBP_C
// (None)

class UClass* UMech_Veh_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Mech_Veh_AnimBP_C");

	return Clss;
}


// Mech_Veh_AnimBP_C Mech_Veh_AnimBP.Default__Mech_Veh_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMech_Veh_AnimBP_C* UMech_Veh_AnimBP_C::GetDefaultObj()
{
	static class UMech_Veh_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMech_Veh_AnimBP_C*>(UMech_Veh_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Mech_Veh_AnimBP.Mech_Veh_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UMech_Veh_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mech_Veh_AnimBP_C", "AnimGraph");

	Params::UMech_Veh_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Mech_Veh_AnimBP.Mech_Veh_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Mech_Veh_AnimBP_AnimGraphNode_ControlRig_3068211A4D983495BCC1E7BABE4149E1
// (BlueprintEvent)
// Parameters:

void UMech_Veh_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Mech_Veh_AnimBP_AnimGraphNode_ControlRig_3068211A4D983495BCC1E7BABE4149E1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mech_Veh_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Mech_Veh_AnimBP_AnimGraphNode_ControlRig_3068211A4D983495BCC1E7BABE4149E1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mech_Veh_AnimBP.Mech_Veh_AnimBP_C.StartSeatTransition_DriverEnter
// (Event, Public, BlueprintEvent)
// Parameters:

void UMech_Veh_AnimBP_C::StartSeatTransition_DriverEnter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mech_Veh_AnimBP_C", "StartSeatTransition_DriverEnter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mech_Veh_AnimBP.Mech_Veh_AnimBP_C.StopSeatTransition_DriverEnter
// (Event, Public, BlueprintEvent)
// Parameters:

void UMech_Veh_AnimBP_C::StopSeatTransition_DriverEnter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mech_Veh_AnimBP_C", "StopSeatTransition_DriverEnter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mech_Veh_AnimBP.Mech_Veh_AnimBP_C.StartSeatTransition_PassengerEnter
// (Event, Public, BlueprintEvent)
// Parameters:

void UMech_Veh_AnimBP_C::StartSeatTransition_PassengerEnter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mech_Veh_AnimBP_C", "StartSeatTransition_PassengerEnter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mech_Veh_AnimBP.Mech_Veh_AnimBP_C.StopSeatTransition_PassengerEnter
// (Event, Public, BlueprintEvent)
// Parameters:

void UMech_Veh_AnimBP_C::StopSeatTransition_PassengerEnter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mech_Veh_AnimBP_C", "StopSeatTransition_PassengerEnter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mech_Veh_AnimBP.Mech_Veh_AnimBP_C.ExecuteUbergraph_Mech_Veh_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMech_Veh_AnimBP_C::ExecuteUbergraph_Mech_Veh_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mech_Veh_AnimBP_C", "ExecuteUbergraph_Mech_Veh_AnimBP");

	Params::UMech_Veh_AnimBP_C_ExecuteUbergraph_Mech_Veh_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


