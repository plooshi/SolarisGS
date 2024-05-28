#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Ostrich_Gunner_AnimBP.Ostrich_Gunner_AnimBP_C
// (None)

class UClass* UOstrich_Gunner_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ostrich_Gunner_AnimBP_C");

	return Clss;
}


// Ostrich_Gunner_AnimBP_C Ostrich_Gunner_AnimBP.Default__Ostrich_Gunner_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOstrich_Gunner_AnimBP_C* UOstrich_Gunner_AnimBP_C::GetDefaultObj()
{
	static class UOstrich_Gunner_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOstrich_Gunner_AnimBP_C*>(UOstrich_Gunner_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ostrich_Gunner_AnimBP.Ostrich_Gunner_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UOstrich_Gunner_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ostrich_Gunner_AnimBP_C", "AnimGraph");

	Params::UOstrich_Gunner_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Ostrich_Gunner_AnimBP.Ostrich_Gunner_AnimBP_C.ExecuteUbergraph_Ostrich_Gunner_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOstrich_Gunner_AnimBP_C::ExecuteUbergraph_Ostrich_Gunner_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ostrich_Gunner_AnimBP_C", "ExecuteUbergraph_Ostrich_Gunner_AnimBP");

	Params::UOstrich_Gunner_AnimBP_C_ExecuteUbergraph_Ostrich_Gunner_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


