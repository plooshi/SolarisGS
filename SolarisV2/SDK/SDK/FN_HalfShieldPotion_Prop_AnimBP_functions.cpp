#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass HalfShieldPotion_Prop_AnimBP.HalfShieldPotion_Prop_AnimBP_C
// (None)

class UClass* UHalfShieldPotion_Prop_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HalfShieldPotion_Prop_AnimBP_C");

	return Clss;
}


// HalfShieldPotion_Prop_AnimBP_C HalfShieldPotion_Prop_AnimBP.Default__HalfShieldPotion_Prop_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHalfShieldPotion_Prop_AnimBP_C* UHalfShieldPotion_Prop_AnimBP_C::GetDefaultObj()
{
	static class UHalfShieldPotion_Prop_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHalfShieldPotion_Prop_AnimBP_C*>(UHalfShieldPotion_Prop_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HalfShieldPotion_Prop_AnimBP.HalfShieldPotion_Prop_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UHalfShieldPotion_Prop_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HalfShieldPotion_Prop_AnimBP_C", "AnimGraph");

	Params::UHalfShieldPotion_Prop_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function HalfShieldPotion_Prop_AnimBP.HalfShieldPotion_Prop_AnimBP_C.ExecuteUbergraph_HalfShieldPotion_Prop_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHalfShieldPotion_Prop_AnimBP_C::ExecuteUbergraph_HalfShieldPotion_Prop_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HalfShieldPotion_Prop_AnimBP_C", "ExecuteUbergraph_HalfShieldPotion_Prop_AnimBP");

	Params::UHalfShieldPotion_Prop_AnimBP_C_ExecuteUbergraph_HalfShieldPotion_Prop_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


