#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ProxGrenadeLauncher_Sk_AnimBP.ProxGrenadeLauncher_Sk_AnimBP_C
// (None)

class UClass* UProxGrenadeLauncher_Sk_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProxGrenadeLauncher_Sk_AnimBP_C");

	return Clss;
}


// ProxGrenadeLauncher_Sk_AnimBP_C ProxGrenadeLauncher_Sk_AnimBP.Default__ProxGrenadeLauncher_Sk_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UProxGrenadeLauncher_Sk_AnimBP_C* UProxGrenadeLauncher_Sk_AnimBP_C::GetDefaultObj()
{
	static class UProxGrenadeLauncher_Sk_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UProxGrenadeLauncher_Sk_AnimBP_C*>(UProxGrenadeLauncher_Sk_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ProxGrenadeLauncher_Sk_AnimBP.ProxGrenadeLauncher_Sk_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UProxGrenadeLauncher_Sk_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProxGrenadeLauncher_Sk_AnimBP_C", "AnimGraph");

	Params::UProxGrenadeLauncher_Sk_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ProxGrenadeLauncher_Sk_AnimBP.ProxGrenadeLauncher_Sk_AnimBP_C.ExecuteUbergraph_ProxGrenadeLauncher_Sk_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProxGrenadeLauncher_Sk_AnimBP_C::ExecuteUbergraph_ProxGrenadeLauncher_Sk_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProxGrenadeLauncher_Sk_AnimBP_C", "ExecuteUbergraph_ProxGrenadeLauncher_Sk_AnimBP");

	Params::UProxGrenadeLauncher_Sk_AnimBP_C_ExecuteUbergraph_ProxGrenadeLauncher_Sk_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


