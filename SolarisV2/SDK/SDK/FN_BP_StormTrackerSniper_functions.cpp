#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BP_StormTrackerSniper.BP_StormTrackerSniper_C
// (None)

class UClass* UBP_StormTrackerSniper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StormTrackerSniper_C");

	return Clss;
}


// BP_StormTrackerSniper_C BP_StormTrackerSniper.Default__BP_StormTrackerSniper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_StormTrackerSniper_C* UBP_StormTrackerSniper_C::GetDefaultObj()
{
	static class UBP_StormTrackerSniper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_StormTrackerSniper_C*>(UBP_StormTrackerSniper_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StormTrackerSniper.BP_StormTrackerSniper_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBP_StormTrackerSniper_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormTrackerSniper_C", "AnimGraph");

	Params::UBP_StormTrackerSniper_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function BP_StormTrackerSniper.BP_StormTrackerSniper_C.ExecuteUbergraph_BP_StormTrackerSniper
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StormTrackerSniper_C::ExecuteUbergraph_BP_StormTrackerSniper(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormTrackerSniper_C", "ExecuteUbergraph_BP_StormTrackerSniper");

	Params::UBP_StormTrackerSniper_C_ExecuteUbergraph_BP_StormTrackerSniper_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


