#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass JackalVehicle_Hoverboard_Base_AnimBP.JackalVehicle_Hoverboard_Base_AnimBP_C
// (None)

class UClass* UJackalVehicle_Hoverboard_Base_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JackalVehicle_Hoverboard_Base_AnimBP_C");

	return Clss;
}


// JackalVehicle_Hoverboard_Base_AnimBP_C JackalVehicle_Hoverboard_Base_AnimBP.Default__JackalVehicle_Hoverboard_Base_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UJackalVehicle_Hoverboard_Base_AnimBP_C* UJackalVehicle_Hoverboard_Base_AnimBP_C::GetDefaultObj()
{
	static class UJackalVehicle_Hoverboard_Base_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UJackalVehicle_Hoverboard_Base_AnimBP_C*>(UJackalVehicle_Hoverboard_Base_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function JackalVehicle_Hoverboard_Base_AnimBP.JackalVehicle_Hoverboard_Base_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UJackalVehicle_Hoverboard_Base_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JackalVehicle_Hoverboard_Base_AnimBP_C", "AnimGraph");

	Params::UJackalVehicle_Hoverboard_Base_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function JackalVehicle_Hoverboard_Base_AnimBP.JackalVehicle_Hoverboard_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_JackalVehicle_Hoverboard_Base_AnimBP_AnimGraphNode_TransitionResult_EF91C0A945322DE8438F4BA03DD7D01F
// (BlueprintEvent)
// Parameters:

void UJackalVehicle_Hoverboard_Base_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_JackalVehicle_Hoverboard_Base_AnimBP_AnimGraphNode_TransitionResult_EF91C0A945322DE8438F4BA03DD7D01F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JackalVehicle_Hoverboard_Base_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_JackalVehicle_Hoverboard_Base_AnimBP_AnimGraphNode_TransitionResult_EF91C0A945322DE8438F4BA03DD7D01F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JackalVehicle_Hoverboard_Base_AnimBP.JackalVehicle_Hoverboard_Base_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJackalVehicle_Hoverboard_Base_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JackalVehicle_Hoverboard_Base_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UJackalVehicle_Hoverboard_Base_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JackalVehicle_Hoverboard_Base_AnimBP.JackalVehicle_Hoverboard_Base_AnimBP_C.ExecuteUbergraph_JackalVehicle_Hoverboard_Base_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IFortVehicleInterface>CallFunc_GetDriver_self_CastInput                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             CallFunc_GetDriver_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortnite_M_Avg_Player_AnimBlueprint_C*K2Node_DynamicCast_AsFortnite_M_Avg_Player_Anim_Blueprint        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJackalVehicle_Hoverboard_Base_AnimBP_C::ExecuteUbergraph_JackalVehicle_Hoverboard_Base_AnimBP(int32 EntryPoint, TScriptInterface<class IFortVehicleInterface> CallFunc_GetDriver_self_CastInput, class AFortPlayerPawn* CallFunc_GetDriver_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UFortnite_M_Avg_Player_AnimBlueprint_C* K2Node_DynamicCast_AsFortnite_M_Avg_Player_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JackalVehicle_Hoverboard_Base_AnimBP_C", "ExecuteUbergraph_JackalVehicle_Hoverboard_Base_AnimBP");

	Params::UJackalVehicle_Hoverboard_Base_AnimBP_C_ExecuteUbergraph_JackalVehicle_Hoverboard_Base_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDriver_self_CastInput = CallFunc_GetDriver_self_CastInput;
	Parms.CallFunc_GetDriver_ReturnValue = CallFunc_GetDriver_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_AsFortnite_M_Avg_Player_Anim_Blueprint = K2Node_DynamicCast_AsFortnite_M_Avg_Player_Anim_Blueprint;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}


