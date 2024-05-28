#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Bush_Prop_AnimBP.Bush_Prop_AnimBP_C
// (None)

class UClass* UBush_Prop_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bush_Prop_AnimBP_C");

	return Clss;
}


// Bush_Prop_AnimBP_C Bush_Prop_AnimBP.Default__Bush_Prop_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBush_Prop_AnimBP_C* UBush_Prop_AnimBP_C::GetDefaultObj()
{
	static class UBush_Prop_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBush_Prop_AnimBP_C*>(UBush_Prop_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Bush_Prop_AnimBP.Bush_Prop_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBush_Prop_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bush_Prop_AnimBP_C", "AnimGraph");

	Params::UBush_Prop_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Bush_Prop_AnimBP.Bush_Prop_AnimBP_C.ExecuteUbergraph_Bush_Prop_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBush_Prop_AnimBP_C::ExecuteUbergraph_Bush_Prop_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bush_Prop_AnimBP_C", "ExecuteUbergraph_Bush_Prop_AnimBP");

	Params::UBush_Prop_AnimBP_C_ExecuteUbergraph_Bush_Prop_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


