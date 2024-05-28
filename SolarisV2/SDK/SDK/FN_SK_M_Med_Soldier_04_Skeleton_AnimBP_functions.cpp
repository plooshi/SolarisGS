#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SK_M_Med_Soldier_04_Skeleton_AnimBP.SK_M_Med_Soldier_04_Skeleton_AnimBP_C
// (None)

class UClass* USK_M_Med_Soldier_04_Skeleton_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_M_Med_Soldier_04_Skeleton_AnimBP_C");

	return Clss;
}


// SK_M_Med_Soldier_04_Skeleton_AnimBP_C SK_M_Med_Soldier_04_Skeleton_AnimBP.Default__SK_M_Med_Soldier_04_Skeleton_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_M_Med_Soldier_04_Skeleton_AnimBP_C* USK_M_Med_Soldier_04_Skeleton_AnimBP_C::GetDefaultObj()
{
	static class USK_M_Med_Soldier_04_Skeleton_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_M_Med_Soldier_04_Skeleton_AnimBP_C*>(USK_M_Med_Soldier_04_Skeleton_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SK_M_Med_Soldier_04_Skeleton_AnimBP.SK_M_Med_Soldier_04_Skeleton_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USK_M_Med_Soldier_04_Skeleton_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_M_Med_Soldier_04_Skeleton_AnimBP_C", "AnimGraph");

	Params::USK_M_Med_Soldier_04_Skeleton_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function SK_M_Med_Soldier_04_Skeleton_AnimBP.SK_M_Med_Soldier_04_Skeleton_AnimBP_C.OnBeginCrouching
// (Event, Public, BlueprintEvent)
// Parameters:

void USK_M_Med_Soldier_04_Skeleton_AnimBP_C::OnBeginCrouching()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_M_Med_Soldier_04_Skeleton_AnimBP_C", "OnBeginCrouching");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_M_Med_Soldier_04_Skeleton_AnimBP.SK_M_Med_Soldier_04_Skeleton_AnimBP_C.OnEndCrouching
// (Event, Public, BlueprintEvent)
// Parameters:

void USK_M_Med_Soldier_04_Skeleton_AnimBP_C::OnEndCrouching()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_M_Med_Soldier_04_Skeleton_AnimBP_C", "OnEndCrouching");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_M_Med_Soldier_04_Skeleton_AnimBP.SK_M_Med_Soldier_04_Skeleton_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_M_Med_Soldier_04_Skeleton_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_M_Med_Soldier_04_Skeleton_AnimBP_C", "BlueprintUpdateAnimation");

	Params::USK_M_Med_Soldier_04_Skeleton_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SK_M_Med_Soldier_04_Skeleton_AnimBP.SK_M_Med_Soldier_04_Skeleton_AnimBP_C.ExecuteUbergraph_SK_M_Med_Soldier_04_Skeleton_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_M_Med_Soldier_04_Skeleton_AnimBP_C::ExecuteUbergraph_SK_M_Med_Soldier_04_Skeleton_AnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_M_Med_Soldier_04_Skeleton_AnimBP_C", "ExecuteUbergraph_SK_M_Med_Soldier_04_Skeleton_AnimBP");

	Params::USK_M_Med_Soldier_04_Skeleton_AnimBP_C_ExecuteUbergraph_SK_M_Med_Soldier_04_Skeleton_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}


