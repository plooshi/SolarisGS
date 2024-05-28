#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BP_AssaultRifle_FrontClip_BackAction.BP_AssaultRifle_FrontClip_BackAction_C
// (None)

class UClass* UBP_AssaultRifle_FrontClip_BackAction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AssaultRifle_FrontClip_BackAction_C");

	return Clss;
}


// BP_AssaultRifle_FrontClip_BackAction_C BP_AssaultRifle_FrontClip_BackAction.Default__BP_AssaultRifle_FrontClip_BackAction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AssaultRifle_FrontClip_BackAction_C* UBP_AssaultRifle_FrontClip_BackAction_C::GetDefaultObj()
{
	static class UBP_AssaultRifle_FrontClip_BackAction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AssaultRifle_FrontClip_BackAction_C*>(UBP_AssaultRifle_FrontClip_BackAction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AssaultRifle_FrontClip_BackAction.BP_AssaultRifle_FrontClip_BackAction_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBP_AssaultRifle_FrontClip_BackAction_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AssaultRifle_FrontClip_BackAction_C", "AnimGraph");

	Params::UBP_AssaultRifle_FrontClip_BackAction_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function BP_AssaultRifle_FrontClip_BackAction.BP_AssaultRifle_FrontClip_BackAction_C.ExecuteUbergraph_BP_AssaultRifle_FrontClip_BackAction
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AssaultRifle_FrontClip_BackAction_C::ExecuteUbergraph_BP_AssaultRifle_FrontClip_BackAction(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AssaultRifle_FrontClip_BackAction_C", "ExecuteUbergraph_BP_AssaultRifle_FrontClip_BackAction");

	Params::UBP_AssaultRifle_FrontClip_BackAction_C_ExecuteUbergraph_BP_AssaultRifle_FrontClip_BackAction_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


