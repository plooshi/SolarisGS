#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass RPG_Skeleton_AnimBlueprint.RPG_Skeleton_AnimBlueprint_C
// (None)

class UClass* URPG_Skeleton_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RPG_Skeleton_AnimBlueprint_C");

	return Clss;
}


// RPG_Skeleton_AnimBlueprint_C RPG_Skeleton_AnimBlueprint.Default__RPG_Skeleton_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URPG_Skeleton_AnimBlueprint_C* URPG_Skeleton_AnimBlueprint_C::GetDefaultObj()
{
	static class URPG_Skeleton_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URPG_Skeleton_AnimBlueprint_C*>(URPG_Skeleton_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RPG_Skeleton_AnimBlueprint.RPG_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void URPG_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RPG_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::URPG_Skeleton_AnimBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function RPG_Skeleton_AnimBlueprint.RPG_Skeleton_AnimBlueprint_C.ExecuteUbergraph_RPG_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URPG_Skeleton_AnimBlueprint_C::ExecuteUbergraph_RPG_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RPG_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_RPG_Skeleton_AnimBlueprint");

	Params::URPG_Skeleton_AnimBlueprint_C_ExecuteUbergraph_RPG_Skeleton_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


