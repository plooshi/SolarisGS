#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Pickaxe_Rhino_AnimBlueprint.Pickaxe_Rhino_AnimBlueprint_C
// (None)

class UClass* UPickaxe_Rhino_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Pickaxe_Rhino_AnimBlueprint_C");

	return Clss;
}


// Pickaxe_Rhino_AnimBlueprint_C Pickaxe_Rhino_AnimBlueprint.Default__Pickaxe_Rhino_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPickaxe_Rhino_AnimBlueprint_C* UPickaxe_Rhino_AnimBlueprint_C::GetDefaultObj()
{
	static class UPickaxe_Rhino_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPickaxe_Rhino_AnimBlueprint_C*>(UPickaxe_Rhino_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Pickaxe_Rhino_AnimBlueprint.Pickaxe_Rhino_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UPickaxe_Rhino_AnimBlueprint_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Pickaxe_Rhino_AnimBlueprint_C", "AnimGraph");

	Params::UPickaxe_Rhino_AnimBlueprint_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Pickaxe_Rhino_AnimBlueprint.Pickaxe_Rhino_AnimBlueprint_C.ExecuteUbergraph_Pickaxe_Rhino_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPickaxe_Rhino_AnimBlueprint_C::ExecuteUbergraph_Pickaxe_Rhino_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Pickaxe_Rhino_AnimBlueprint_C", "ExecuteUbergraph_Pickaxe_Rhino_AnimBlueprint");

	Params::UPickaxe_Rhino_AnimBlueprint_C_ExecuteUbergraph_Pickaxe_Rhino_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


