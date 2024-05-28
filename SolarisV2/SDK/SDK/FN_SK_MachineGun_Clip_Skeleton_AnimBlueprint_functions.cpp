#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SK_MachineGun_Clip_Skeleton_AnimBlueprint.SK_MachineGun_Clip_Skeleton_AnimBlueprint_C
// (None)

class UClass* USK_MachineGun_Clip_Skeleton_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_MachineGun_Clip_Skeleton_AnimBlueprint_C");

	return Clss;
}


// SK_MachineGun_Clip_Skeleton_AnimBlueprint_C SK_MachineGun_Clip_Skeleton_AnimBlueprint.Default__SK_MachineGun_Clip_Skeleton_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_MachineGun_Clip_Skeleton_AnimBlueprint_C* USK_MachineGun_Clip_Skeleton_AnimBlueprint_C::GetDefaultObj()
{
	static class USK_MachineGun_Clip_Skeleton_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_MachineGun_Clip_Skeleton_AnimBlueprint_C*>(USK_MachineGun_Clip_Skeleton_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SK_MachineGun_Clip_Skeleton_AnimBlueprint.SK_MachineGun_Clip_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USK_MachineGun_Clip_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_MachineGun_Clip_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::USK_MachineGun_Clip_Skeleton_AnimBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function SK_MachineGun_Clip_Skeleton_AnimBlueprint.SK_MachineGun_Clip_Skeleton_AnimBlueprint_C.ExecuteUbergraph_SK_MachineGun_Clip_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_MachineGun_Clip_Skeleton_AnimBlueprint_C::ExecuteUbergraph_SK_MachineGun_Clip_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_MachineGun_Clip_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_SK_MachineGun_Clip_Skeleton_AnimBlueprint");

	Params::USK_MachineGun_Clip_Skeleton_AnimBlueprint_C_ExecuteUbergraph_SK_MachineGun_Clip_Skeleton_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


