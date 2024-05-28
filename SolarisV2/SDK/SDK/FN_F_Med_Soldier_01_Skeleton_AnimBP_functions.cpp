#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass F_Med_Soldier_01_Skeleton_AnimBP.F_Med_Soldier_01_Skeleton_AnimBP_C
// (None)

class UClass* UF_Med_Soldier_01_Skeleton_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("F_Med_Soldier_01_Skeleton_AnimBP_C");

	return Clss;
}


// F_Med_Soldier_01_Skeleton_AnimBP_C F_Med_Soldier_01_Skeleton_AnimBP.Default__F_Med_Soldier_01_Skeleton_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UF_Med_Soldier_01_Skeleton_AnimBP_C* UF_Med_Soldier_01_Skeleton_AnimBP_C::GetDefaultObj()
{
	static class UF_Med_Soldier_01_Skeleton_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UF_Med_Soldier_01_Skeleton_AnimBP_C*>(UF_Med_Soldier_01_Skeleton_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function F_Med_Soldier_01_Skeleton_AnimBP.F_Med_Soldier_01_Skeleton_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UF_Med_Soldier_01_Skeleton_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("F_Med_Soldier_01_Skeleton_AnimBP_C", "AnimGraph");

	Params::UF_Med_Soldier_01_Skeleton_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function F_Med_Soldier_01_Skeleton_AnimBP.F_Med_Soldier_01_Skeleton_AnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UF_Med_Soldier_01_Skeleton_AnimBP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("F_Med_Soldier_01_Skeleton_AnimBP_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function F_Med_Soldier_01_Skeleton_AnimBP.F_Med_Soldier_01_Skeleton_AnimBP_C.ExecuteUbergraph_F_Med_Soldier_01_Skeleton_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UF_Med_Soldier_01_Skeleton_AnimBP_C::ExecuteUbergraph_F_Med_Soldier_01_Skeleton_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("F_Med_Soldier_01_Skeleton_AnimBP_C", "ExecuteUbergraph_F_Med_Soldier_01_Skeleton_AnimBP");

	Params::UF_Med_Soldier_01_Skeleton_AnimBP_C_ExecuteUbergraph_F_Med_Soldier_01_Skeleton_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue = CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


