#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass M_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint.M_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint_C
// (None)

class UClass* UM_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("M_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint_C");

	return Clss;
}


// M_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint_C M_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint.Default__M_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UM_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint_C* UM_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint_C::GetDefaultObj()
{
	static class UM_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UM_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint_C*>(UM_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function M_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint.M_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UM_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::UM_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function M_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint.M_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint_C.ExecuteUbergraph_M_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint_C::ExecuteUbergraph_M_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_M_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint");

	Params::UM_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint_C_ExecuteUbergraph_M_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


