#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BP_Shotgun_BreakAction.BP_Shotgun_BreakAction_C
// (None)

class UClass* UBP_Shotgun_BreakAction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Shotgun_BreakAction_C");

	return Clss;
}


// BP_Shotgun_BreakAction_C BP_Shotgun_BreakAction.Default__BP_Shotgun_BreakAction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Shotgun_BreakAction_C* UBP_Shotgun_BreakAction_C::GetDefaultObj()
{
	static class UBP_Shotgun_BreakAction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Shotgun_BreakAction_C*>(UBP_Shotgun_BreakAction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Shotgun_BreakAction.BP_Shotgun_BreakAction_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBP_Shotgun_BreakAction_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Shotgun_BreakAction_C", "AnimGraph");

	Params::UBP_Shotgun_BreakAction_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function BP_Shotgun_BreakAction.BP_Shotgun_BreakAction_C.ExecuteUbergraph_BP_Shotgun_BreakAction
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Shotgun_BreakAction_C::ExecuteUbergraph_BP_Shotgun_BreakAction(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Shotgun_BreakAction_C", "ExecuteUbergraph_BP_Shotgun_BreakAction");

	Params::UBP_Shotgun_BreakAction_C_ExecuteUbergraph_BP_Shotgun_BreakAction_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


