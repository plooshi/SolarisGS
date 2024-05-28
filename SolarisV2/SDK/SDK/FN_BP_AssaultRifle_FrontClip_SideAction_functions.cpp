#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BP_AssaultRifle_FrontClip_SideAction.BP_AssaultRifle_FrontClip_SideAction_C
// (None)

class UClass* UBP_AssaultRifle_FrontClip_SideAction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AssaultRifle_FrontClip_SideAction_C");

	return Clss;
}


// BP_AssaultRifle_FrontClip_SideAction_C BP_AssaultRifle_FrontClip_SideAction.Default__BP_AssaultRifle_FrontClip_SideAction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AssaultRifle_FrontClip_SideAction_C* UBP_AssaultRifle_FrontClip_SideAction_C::GetDefaultObj()
{
	static class UBP_AssaultRifle_FrontClip_SideAction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AssaultRifle_FrontClip_SideAction_C*>(UBP_AssaultRifle_FrontClip_SideAction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AssaultRifle_FrontClip_SideAction.BP_AssaultRifle_FrontClip_SideAction_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBP_AssaultRifle_FrontClip_SideAction_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AssaultRifle_FrontClip_SideAction_C", "AnimGraph");

	Params::UBP_AssaultRifle_FrontClip_SideAction_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function BP_AssaultRifle_FrontClip_SideAction.BP_AssaultRifle_FrontClip_SideAction_C.ExecuteUbergraph_BP_AssaultRifle_FrontClip_SideAction
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AssaultRifle_FrontClip_SideAction_C::ExecuteUbergraph_BP_AssaultRifle_FrontClip_SideAction(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AssaultRifle_FrontClip_SideAction_C", "ExecuteUbergraph_BP_AssaultRifle_FrontClip_SideAction");

	Params::UBP_AssaultRifle_FrontClip_SideAction_C_ExecuteUbergraph_BP_AssaultRifle_FrontClip_SideAction_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


