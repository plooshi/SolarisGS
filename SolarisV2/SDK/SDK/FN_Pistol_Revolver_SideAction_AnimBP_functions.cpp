#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Pistol_Revolver_SideAction_AnimBP.Pistol_Revolver_SideAction_AnimBP_C
// (None)

class UClass* UPistol_Revolver_SideAction_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Pistol_Revolver_SideAction_AnimBP_C");

	return Clss;
}


// Pistol_Revolver_SideAction_AnimBP_C Pistol_Revolver_SideAction_AnimBP.Default__Pistol_Revolver_SideAction_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPistol_Revolver_SideAction_AnimBP_C* UPistol_Revolver_SideAction_AnimBP_C::GetDefaultObj()
{
	static class UPistol_Revolver_SideAction_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPistol_Revolver_SideAction_AnimBP_C*>(UPistol_Revolver_SideAction_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Pistol_Revolver_SideAction_AnimBP.Pistol_Revolver_SideAction_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UPistol_Revolver_SideAction_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Pistol_Revolver_SideAction_AnimBP_C", "AnimGraph");

	Params::UPistol_Revolver_SideAction_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Pistol_Revolver_SideAction_AnimBP.Pistol_Revolver_SideAction_AnimBP_C.ExecuteUbergraph_Pistol_Revolver_SideAction_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPistol_Revolver_SideAction_AnimBP_C::ExecuteUbergraph_Pistol_Revolver_SideAction_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Pistol_Revolver_SideAction_AnimBP_C", "ExecuteUbergraph_Pistol_Revolver_SideAction_AnimBP");

	Params::UPistol_Revolver_SideAction_AnimBP_C_ExecuteUbergraph_Pistol_Revolver_SideAction_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


