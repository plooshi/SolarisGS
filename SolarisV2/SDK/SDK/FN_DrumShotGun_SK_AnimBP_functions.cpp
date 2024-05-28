#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass DrumShotGun_SK_AnimBP.DrumShotGun_SK_AnimBP_C
// (None)

class UClass* UDrumShotGun_SK_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DrumShotGun_SK_AnimBP_C");

	return Clss;
}


// DrumShotGun_SK_AnimBP_C DrumShotGun_SK_AnimBP.Default__DrumShotGun_SK_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDrumShotGun_SK_AnimBP_C* UDrumShotGun_SK_AnimBP_C::GetDefaultObj()
{
	static class UDrumShotGun_SK_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDrumShotGun_SK_AnimBP_C*>(UDrumShotGun_SK_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DrumShotGun_SK_AnimBP.DrumShotGun_SK_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UDrumShotGun_SK_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DrumShotGun_SK_AnimBP_C", "AnimGraph");

	Params::UDrumShotGun_SK_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function DrumShotGun_SK_AnimBP.DrumShotGun_SK_AnimBP_C.ExecuteUbergraph_DrumShotGun_SK_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDrumShotGun_SK_AnimBP_C::ExecuteUbergraph_DrumShotGun_SK_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DrumShotGun_SK_AnimBP_C", "ExecuteUbergraph_DrumShotGun_SK_AnimBP");

	Params::UDrumShotGun_SK_AnimBP_C_ExecuteUbergraph_DrumShotGun_SK_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


