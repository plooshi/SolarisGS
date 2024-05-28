#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ApplyMedkit_Athena_AnimBP.ApplyMedkit_Athena_AnimBP_C
// (None)

class UClass* UApplyMedkit_Athena_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ApplyMedkit_Athena_AnimBP_C");

	return Clss;
}


// ApplyMedkit_Athena_AnimBP_C ApplyMedkit_Athena_AnimBP.Default__ApplyMedkit_Athena_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UApplyMedkit_Athena_AnimBP_C* UApplyMedkit_Athena_AnimBP_C::GetDefaultObj()
{
	static class UApplyMedkit_Athena_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UApplyMedkit_Athena_AnimBP_C*>(UApplyMedkit_Athena_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ApplyMedkit_Athena_AnimBP.ApplyMedkit_Athena_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UApplyMedkit_Athena_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ApplyMedkit_Athena_AnimBP_C", "AnimGraph");

	Params::UApplyMedkit_Athena_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ApplyMedkit_Athena_AnimBP.ApplyMedkit_Athena_AnimBP_C.ExecuteUbergraph_ApplyMedkit_Athena_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UApplyMedkit_Athena_AnimBP_C::ExecuteUbergraph_ApplyMedkit_Athena_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ApplyMedkit_Athena_AnimBP_C", "ExecuteUbergraph_ApplyMedkit_Athena_AnimBP");

	Params::UApplyMedkit_Athena_AnimBP_C_ExecuteUbergraph_ApplyMedkit_Athena_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


