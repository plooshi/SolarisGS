#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass TNT_Bundle_Skeleton_AnimBlueprint.TNT_Bundle_Skeleton_AnimBlueprint_C
// (None)

class UClass* UTNT_Bundle_Skeleton_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TNT_Bundle_Skeleton_AnimBlueprint_C");

	return Clss;
}


// TNT_Bundle_Skeleton_AnimBlueprint_C TNT_Bundle_Skeleton_AnimBlueprint.Default__TNT_Bundle_Skeleton_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTNT_Bundle_Skeleton_AnimBlueprint_C* UTNT_Bundle_Skeleton_AnimBlueprint_C::GetDefaultObj()
{
	static class UTNT_Bundle_Skeleton_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTNT_Bundle_Skeleton_AnimBlueprint_C*>(UTNT_Bundle_Skeleton_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TNT_Bundle_Skeleton_AnimBlueprint.TNT_Bundle_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UTNT_Bundle_Skeleton_AnimBlueprint_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TNT_Bundle_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::UTNT_Bundle_Skeleton_AnimBlueprint_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function TNT_Bundle_Skeleton_AnimBlueprint.TNT_Bundle_Skeleton_AnimBlueprint_C.ExecuteUbergraph_TNT_Bundle_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTNT_Bundle_Skeleton_AnimBlueprint_C::ExecuteUbergraph_TNT_Bundle_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TNT_Bundle_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_TNT_Bundle_Skeleton_AnimBlueprint");

	Params::UTNT_Bundle_Skeleton_AnimBlueprint_C_ExecuteUbergraph_TNT_Bundle_Skeleton_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


