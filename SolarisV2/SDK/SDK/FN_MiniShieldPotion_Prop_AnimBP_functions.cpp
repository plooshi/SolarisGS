#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass MiniShieldPotion_Prop_AnimBP.MiniShieldPotion_Prop_AnimBP_C
// (None)

class UClass* UMiniShieldPotion_Prop_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MiniShieldPotion_Prop_AnimBP_C");

	return Clss;
}


// MiniShieldPotion_Prop_AnimBP_C MiniShieldPotion_Prop_AnimBP.Default__MiniShieldPotion_Prop_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMiniShieldPotion_Prop_AnimBP_C* UMiniShieldPotion_Prop_AnimBP_C::GetDefaultObj()
{
	static class UMiniShieldPotion_Prop_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMiniShieldPotion_Prop_AnimBP_C*>(UMiniShieldPotion_Prop_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MiniShieldPotion_Prop_AnimBP.MiniShieldPotion_Prop_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UMiniShieldPotion_Prop_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MiniShieldPotion_Prop_AnimBP_C", "AnimGraph");

	Params::UMiniShieldPotion_Prop_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function MiniShieldPotion_Prop_AnimBP.MiniShieldPotion_Prop_AnimBP_C.ExecuteUbergraph_MiniShieldPotion_Prop_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniShieldPotion_Prop_AnimBP_C::ExecuteUbergraph_MiniShieldPotion_Prop_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MiniShieldPotion_Prop_AnimBP_C", "ExecuteUbergraph_MiniShieldPotion_Prop_AnimBP");

	Params::UMiniShieldPotion_Prop_AnimBP_C_ExecuteUbergraph_MiniShieldPotion_Prop_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


