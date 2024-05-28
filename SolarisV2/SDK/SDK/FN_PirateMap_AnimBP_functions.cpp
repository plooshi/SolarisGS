#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass PirateMap_AnimBP.PirateMap_AnimBP_C
// (None)

class UClass* UPirateMap_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PirateMap_AnimBP_C");

	return Clss;
}


// PirateMap_AnimBP_C PirateMap_AnimBP.Default__PirateMap_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPirateMap_AnimBP_C* UPirateMap_AnimBP_C::GetDefaultObj()
{
	static class UPirateMap_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPirateMap_AnimBP_C*>(UPirateMap_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PirateMap_AnimBP.PirateMap_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UPirateMap_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PirateMap_AnimBP_C", "AnimGraph");

	Params::UPirateMap_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function PirateMap_AnimBP.PirateMap_AnimBP_C.ExecuteUbergraph_PirateMap_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPirateMap_AnimBP_C::ExecuteUbergraph_PirateMap_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PirateMap_AnimBP_C", "ExecuteUbergraph_PirateMap_AnimBP");

	Params::UPirateMap_AnimBP_C_ExecuteUbergraph_PirateMap_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


