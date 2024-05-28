#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Pistol_Revolver_SideAction_AnimBP1.Pistol_Revolver_SideAction_AnimBP1_C
// (None)

class UClass* UPistol_Revolver_SideAction_AnimBP1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Pistol_Revolver_SideAction_AnimBP1_C");

	return Clss;
}


// Pistol_Revolver_SideAction_AnimBP1_C Pistol_Revolver_SideAction_AnimBP1.Default__Pistol_Revolver_SideAction_AnimBP1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPistol_Revolver_SideAction_AnimBP1_C* UPistol_Revolver_SideAction_AnimBP1_C::GetDefaultObj()
{
	static class UPistol_Revolver_SideAction_AnimBP1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPistol_Revolver_SideAction_AnimBP1_C*>(UPistol_Revolver_SideAction_AnimBP1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Pistol_Revolver_SideAction_AnimBP1.Pistol_Revolver_SideAction_AnimBP1_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UPistol_Revolver_SideAction_AnimBP1_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Pistol_Revolver_SideAction_AnimBP1_C", "AnimGraph");

	Params::UPistol_Revolver_SideAction_AnimBP1_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Pistol_Revolver_SideAction_AnimBP1.Pistol_Revolver_SideAction_AnimBP1_C.AnimNotify_Revolver_RotChamber
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPistol_Revolver_SideAction_AnimBP1_C::AnimNotify_Revolver_RotChamber()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Pistol_Revolver_SideAction_AnimBP1_C", "AnimNotify_Revolver_RotChamber");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Pistol_Revolver_SideAction_AnimBP1.Pistol_Revolver_SideAction_AnimBP1_C.ExecuteUbergraph_Pistol_Revolver_SideAction_AnimBP1
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPistol_Revolver_SideAction_AnimBP1_C::ExecuteUbergraph_Pistol_Revolver_SideAction_AnimBP1(int32 EntryPoint, int32 Temp_int_Variable, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Pistol_Revolver_SideAction_AnimBP1_C", "ExecuteUbergraph_Pistol_Revolver_SideAction_AnimBP1");

	Params::UPistol_Revolver_SideAction_AnimBP1_C_ExecuteUbergraph_Pistol_Revolver_SideAction_AnimBP1_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


