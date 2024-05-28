#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass M_MED_Cupid_Dark_FaceAcc_AnimBp.M_MED_Cupid_Dark_FaceAcc_AnimBp_C
// (None)

class UClass* UM_MED_Cupid_Dark_FaceAcc_AnimBp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("M_MED_Cupid_Dark_FaceAcc_AnimBp_C");

	return Clss;
}


// M_MED_Cupid_Dark_FaceAcc_AnimBp_C M_MED_Cupid_Dark_FaceAcc_AnimBp.Default__M_MED_Cupid_Dark_FaceAcc_AnimBp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UM_MED_Cupid_Dark_FaceAcc_AnimBp_C* UM_MED_Cupid_Dark_FaceAcc_AnimBp_C::GetDefaultObj()
{
	static class UM_MED_Cupid_Dark_FaceAcc_AnimBp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UM_MED_Cupid_Dark_FaceAcc_AnimBp_C*>(UM_MED_Cupid_Dark_FaceAcc_AnimBp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function M_MED_Cupid_Dark_FaceAcc_AnimBp.M_MED_Cupid_Dark_FaceAcc_AnimBp_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UM_MED_Cupid_Dark_FaceAcc_AnimBp_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_MED_Cupid_Dark_FaceAcc_AnimBp_C", "AnimGraph");

	Params::UM_MED_Cupid_Dark_FaceAcc_AnimBp_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function M_MED_Cupid_Dark_FaceAcc_AnimBp.M_MED_Cupid_Dark_FaceAcc_AnimBp_C.ExecuteUbergraph_M_MED_Cupid_Dark_FaceAcc_AnimBp
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM_MED_Cupid_Dark_FaceAcc_AnimBp_C::ExecuteUbergraph_M_MED_Cupid_Dark_FaceAcc_AnimBp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("M_MED_Cupid_Dark_FaceAcc_AnimBp_C", "ExecuteUbergraph_M_MED_Cupid_Dark_FaceAcc_AnimBp");

	Params::UM_MED_Cupid_Dark_FaceAcc_AnimBp_C_ExecuteUbergraph_M_MED_Cupid_Dark_FaceAcc_AnimBp_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


