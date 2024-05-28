#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass M_Med_Soldier_03_Cupid_AnimBlueprint.M_Med_Soldier_03_Cupid_AnimBlueprint_C
// (None)

class UClass* UM_Med_Soldier_03_Cupid_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("M_Med_Soldier_03_Cupid_AnimBlueprint_C");

	return Clss;
}


// M_Med_Soldier_03_Cupid_AnimBlueprint_C M_Med_Soldier_03_Cupid_AnimBlueprint.Default__M_Med_Soldier_03_Cupid_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UM_Med_Soldier_03_Cupid_AnimBlueprint_C* UM_Med_Soldier_03_Cupid_AnimBlueprint_C::GetDefaultObj()
{
	static class UM_Med_Soldier_03_Cupid_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UM_Med_Soldier_03_Cupid_AnimBlueprint_C*>(UM_Med_Soldier_03_Cupid_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function M_Med_Soldier_03_Cupid_AnimBlueprint.M_Med_Soldier_03_Cupid_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UM_Med_Soldier_03_Cupid_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_Med_Soldier_03_Cupid_AnimBlueprint_C", "AnimGraph");

	Params::UM_Med_Soldier_03_Cupid_AnimBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function M_Med_Soldier_03_Cupid_AnimBlueprint.M_Med_Soldier_03_Cupid_AnimBlueprint_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UM_Med_Soldier_03_Cupid_AnimBlueprint_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_Med_Soldier_03_Cupid_AnimBlueprint_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function M_Med_Soldier_03_Cupid_AnimBlueprint.M_Med_Soldier_03_Cupid_AnimBlueprint_C.ExecuteUbergraph_M_Med_Soldier_03_Cupid_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM_Med_Soldier_03_Cupid_AnimBlueprint_C::ExecuteUbergraph_M_Med_Soldier_03_Cupid_AnimBlueprint(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_Med_Soldier_03_Cupid_AnimBlueprint_C", "ExecuteUbergraph_M_Med_Soldier_03_Cupid_AnimBlueprint");

	Params::UM_Med_Soldier_03_Cupid_AnimBlueprint_C_ExecuteUbergraph_M_Med_Soldier_03_Cupid_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue = CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


