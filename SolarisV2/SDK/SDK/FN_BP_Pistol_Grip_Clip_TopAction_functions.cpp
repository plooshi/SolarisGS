#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BP_Pistol_Grip_Clip_TopAction.BP_Pistol_Grip_Clip_TopAction_C
// (None)

class UClass* UBP_Pistol_Grip_Clip_TopAction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Pistol_Grip_Clip_TopAction_C");

	return Clss;
}


// BP_Pistol_Grip_Clip_TopAction_C BP_Pistol_Grip_Clip_TopAction.Default__BP_Pistol_Grip_Clip_TopAction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Pistol_Grip_Clip_TopAction_C* UBP_Pistol_Grip_Clip_TopAction_C::GetDefaultObj()
{
	static class UBP_Pistol_Grip_Clip_TopAction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Pistol_Grip_Clip_TopAction_C*>(UBP_Pistol_Grip_Clip_TopAction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Pistol_Grip_Clip_TopAction.BP_Pistol_Grip_Clip_TopAction_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBP_Pistol_Grip_Clip_TopAction_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Pistol_Grip_Clip_TopAction_C", "AnimGraph");

	Params::UBP_Pistol_Grip_Clip_TopAction_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function BP_Pistol_Grip_Clip_TopAction.BP_Pistol_Grip_Clip_TopAction_C.ExecuteUbergraph_BP_Pistol_Grip_Clip_TopAction
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Pistol_Grip_Clip_TopAction_C::ExecuteUbergraph_BP_Pistol_Grip_Clip_TopAction(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Pistol_Grip_Clip_TopAction_C", "ExecuteUbergraph_BP_Pistol_Grip_Clip_TopAction");

	Params::UBP_Pistol_Grip_Clip_TopAction_C_ExecuteUbergraph_BP_Pistol_Grip_Clip_TopAction_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


