#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BP_BoltActionSniperRifleNoScope.BP_BoltActionSniperRifleNoScope_C
// (None)

class UClass* UBP_BoltActionSniperRifleNoScope_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BoltActionSniperRifleNoScope_C");

	return Clss;
}


// BP_BoltActionSniperRifleNoScope_C BP_BoltActionSniperRifleNoScope.Default__BP_BoltActionSniperRifleNoScope_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_BoltActionSniperRifleNoScope_C* UBP_BoltActionSniperRifleNoScope_C::GetDefaultObj()
{
	static class UBP_BoltActionSniperRifleNoScope_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_BoltActionSniperRifleNoScope_C*>(UBP_BoltActionSniperRifleNoScope_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BoltActionSniperRifleNoScope.BP_BoltActionSniperRifleNoScope_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBP_BoltActionSniperRifleNoScope_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BoltActionSniperRifleNoScope_C", "AnimGraph");

	Params::UBP_BoltActionSniperRifleNoScope_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function BP_BoltActionSniperRifleNoScope.BP_BoltActionSniperRifleNoScope_C.ExecuteUbergraph_BP_BoltActionSniperRifleNoScope
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BoltActionSniperRifleNoScope_C::ExecuteUbergraph_BP_BoltActionSniperRifleNoScope(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BoltActionSniperRifleNoScope_C", "ExecuteUbergraph_BP_BoltActionSniperRifleNoScope");

	Params::UBP_BoltActionSniperRifleNoScope_C_ExecuteUbergraph_BP_BoltActionSniperRifleNoScope_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


