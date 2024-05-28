#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Deployable_Storm_AnimBP.Deployable_Storm_AnimBP_C
// (None)

class UClass* UDeployable_Storm_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Deployable_Storm_AnimBP_C");

	return Clss;
}


// Deployable_Storm_AnimBP_C Deployable_Storm_AnimBP.Default__Deployable_Storm_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDeployable_Storm_AnimBP_C* UDeployable_Storm_AnimBP_C::GetDefaultObj()
{
	static class UDeployable_Storm_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDeployable_Storm_AnimBP_C*>(UDeployable_Storm_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Deployable_Storm_AnimBP.Deployable_Storm_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UDeployable_Storm_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Deployable_Storm_AnimBP_C", "AnimGraph");

	Params::UDeployable_Storm_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Deployable_Storm_AnimBP.Deployable_Storm_AnimBP_C.ExecuteUbergraph_Deployable_Storm_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDeployable_Storm_AnimBP_C::ExecuteUbergraph_Deployable_Storm_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Deployable_Storm_AnimBP_C", "ExecuteUbergraph_Deployable_Storm_AnimBP");

	Params::UDeployable_Storm_AnimBP_C_ExecuteUbergraph_Deployable_Storm_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


