#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Athena_OldMap_Dyn_AnimBP.Athena_OldMap_Dyn_AnimBP_C
// (None)

class UClass* UAthena_OldMap_Dyn_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_OldMap_Dyn_AnimBP_C");

	return Clss;
}


// Athena_OldMap_Dyn_AnimBP_C Athena_OldMap_Dyn_AnimBP.Default__Athena_OldMap_Dyn_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_OldMap_Dyn_AnimBP_C* UAthena_OldMap_Dyn_AnimBP_C::GetDefaultObj()
{
	static class UAthena_OldMap_Dyn_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_OldMap_Dyn_AnimBP_C*>(UAthena_OldMap_Dyn_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Athena_OldMap_Dyn_AnimBP.Athena_OldMap_Dyn_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAthena_OldMap_Dyn_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_OldMap_Dyn_AnimBP_C", "AnimGraph");

	Params::UAthena_OldMap_Dyn_AnimBP_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Athena_OldMap_Dyn_AnimBP.Athena_OldMap_Dyn_AnimBP_C.ExecuteUbergraph_Athena_OldMap_Dyn_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthena_OldMap_Dyn_AnimBP_C::ExecuteUbergraph_Athena_OldMap_Dyn_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_OldMap_Dyn_AnimBP_C", "ExecuteUbergraph_Athena_OldMap_Dyn_AnimBP");

	Params::UAthena_OldMap_Dyn_AnimBP_C_ExecuteUbergraph_Athena_OldMap_Dyn_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


