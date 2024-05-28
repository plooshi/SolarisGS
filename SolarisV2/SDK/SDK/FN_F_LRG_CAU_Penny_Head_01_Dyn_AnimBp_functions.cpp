#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass F_LRG_CAU_Penny_Head_01_Dyn_AnimBp.F_LRG_CAU_Penny_Head_01_Dyn_AnimBp_C
// (None)

class UClass* UF_LRG_CAU_Penny_Head_01_Dyn_AnimBp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("F_LRG_CAU_Penny_Head_01_Dyn_AnimBp_C");

	return Clss;
}


// F_LRG_CAU_Penny_Head_01_Dyn_AnimBp_C F_LRG_CAU_Penny_Head_01_Dyn_AnimBp.Default__F_LRG_CAU_Penny_Head_01_Dyn_AnimBp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UF_LRG_CAU_Penny_Head_01_Dyn_AnimBp_C* UF_LRG_CAU_Penny_Head_01_Dyn_AnimBp_C::GetDefaultObj()
{
	static class UF_LRG_CAU_Penny_Head_01_Dyn_AnimBp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UF_LRG_CAU_Penny_Head_01_Dyn_AnimBp_C*>(UF_LRG_CAU_Penny_Head_01_Dyn_AnimBp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function F_LRG_CAU_Penny_Head_01_Dyn_AnimBp.F_LRG_CAU_Penny_Head_01_Dyn_AnimBp_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UF_LRG_CAU_Penny_Head_01_Dyn_AnimBp_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("F_LRG_CAU_Penny_Head_01_Dyn_AnimBp_C", "AnimGraph");

	Params::UF_LRG_CAU_Penny_Head_01_Dyn_AnimBp_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function F_LRG_CAU_Penny_Head_01_Dyn_AnimBp.F_LRG_CAU_Penny_Head_01_Dyn_AnimBp_C.ExecuteUbergraph_F_LRG_CAU_Penny_Head_01_Dyn_AnimBp
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UF_LRG_CAU_Penny_Head_01_Dyn_AnimBp_C::ExecuteUbergraph_F_LRG_CAU_Penny_Head_01_Dyn_AnimBp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("F_LRG_CAU_Penny_Head_01_Dyn_AnimBp_C", "ExecuteUbergraph_F_LRG_CAU_Penny_Head_01_Dyn_AnimBp");

	Params::UF_LRG_CAU_Penny_Head_01_Dyn_AnimBp_C_ExecuteUbergraph_F_LRG_CAU_Penny_Head_01_Dyn_AnimBp_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


