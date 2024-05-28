#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SlurpJuice_Prop_AnimBP.SlurpJuice_Prop_AnimBP_C
// (None)

class UClass* USlurpJuice_Prop_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlurpJuice_Prop_AnimBP_C");

	return Clss;
}


// SlurpJuice_Prop_AnimBP_C SlurpJuice_Prop_AnimBP.Default__SlurpJuice_Prop_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USlurpJuice_Prop_AnimBP_C* USlurpJuice_Prop_AnimBP_C::GetDefaultObj()
{
	static class USlurpJuice_Prop_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USlurpJuice_Prop_AnimBP_C*>(USlurpJuice_Prop_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SlurpJuice_Prop_AnimBP.SlurpJuice_Prop_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USlurpJuice_Prop_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlurpJuice_Prop_AnimBP_C", "AnimGraph");

	Params::USlurpJuice_Prop_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function SlurpJuice_Prop_AnimBP.SlurpJuice_Prop_AnimBP_C.ExecuteUbergraph_SlurpJuice_Prop_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USlurpJuice_Prop_AnimBP_C::ExecuteUbergraph_SlurpJuice_Prop_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlurpJuice_Prop_AnimBP_C", "ExecuteUbergraph_SlurpJuice_Prop_AnimBP");

	Params::USlurpJuice_Prop_AnimBP_C_ExecuteUbergraph_SlurpJuice_Prop_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


