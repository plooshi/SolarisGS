#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass B_MasterPetAnimBP.B_MasterPetAnimBP_C
// (None)

class UClass* UB_MasterPetAnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_MasterPetAnimBP_C");

	return Clss;
}


// B_MasterPetAnimBP_C B_MasterPetAnimBP.Default__B_MasterPetAnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_MasterPetAnimBP_C* UB_MasterPetAnimBP_C::GetDefaultObj()
{
	static class UB_MasterPetAnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_MasterPetAnimBP_C*>(UB_MasterPetAnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UB_MasterPetAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "AnimGraph");

	Params::UB_MasterPetAnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_B_MasterPetAnimBP_AnimGraphNode_TransitionResult_3C816C0C48CA2CAFFBF09392A11667F5
// (BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_B_MasterPetAnimBP_AnimGraphNode_TransitionResult_3C816C0C48CA2CAFFBF09392A11667F5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_B_MasterPetAnimBP_AnimGraphNode_TransitionResult_3C816C0C48CA2CAFFBF09392A11667F5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_B_MasterPetAnimBP_AnimGraphNode_TransitionResult_E0DEFD6D4A6F7885EF0C1ABF6CCDE727
// (BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_B_MasterPetAnimBP_AnimGraphNode_TransitionResult_E0DEFD6D4A6F7885EF0C1ABF6CCDE727()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_B_MasterPetAnimBP_AnimGraphNode_TransitionResult_E0DEFD6D4A6F7885EF0C1ABF6CCDE727");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_B_MasterPetAnimBP_AnimGraphNode_LayeredBoneBlend_8F44D9504941E8105FB3BFBD14102B06
// (BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_B_MasterPetAnimBP_AnimGraphNode_LayeredBoneBlend_8F44D9504941E8105FB3BFBD14102B06()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_B_MasterPetAnimBP_AnimGraphNode_LayeredBoneBlend_8F44D9504941E8105FB3BFBD14102B06");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.AnimNotify_RollRandomIdle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::AnimNotify_RollRandomIdle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "AnimNotify_RollRandomIdle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.AnimNotify_RollRandomIdle2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::AnimNotify_RollRandomIdle2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "AnimNotify_RollRandomIdle2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.AnimNotify_StartJump_Entered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::AnimNotify_StartJump_Entered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "AnimNotify_StartJump_Entered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.AnimNotify_StartJump_Entered_Test
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::AnimNotify_StartJump_Entered_Test()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "AnimNotify_StartJump_Entered_Test");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.AnimNotify_CrouchIdle1_FullyBlended
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::AnimNotify_CrouchIdle1_FullyBlended()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "AnimNotify_CrouchIdle1_FullyBlended");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.AnimNotify_CrouchIdle2_FullyBlended
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::AnimNotify_CrouchIdle2_FullyBlended()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "AnimNotify_CrouchIdle2_FullyBlended");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.AnimNotify_Entered_Crouching
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::AnimNotify_Entered_Crouching()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "AnimNotify_Entered_Crouching");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.AnimNotify_Entered_DownSightsToCrouch
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::AnimNotify_Entered_DownSightsToCrouch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "AnimNotify_Entered_DownSightsToCrouch");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.LobbySkyDive_IsDiving
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::LobbySkyDive_IsDiving()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "LobbySkyDive_IsDiving");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.LobbySkyDive_IsGliding
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::LobbySkyDive_IsGliding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "LobbySkyDive_IsGliding");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.ExecuteUbergraph_B_MasterPetAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UB_MasterPetAnimBP_C::ExecuteUbergraph_B_MasterPetAnimBP(int32 EntryPoint, float CallFunc_GetCurveValue_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "ExecuteUbergraph_B_MasterPetAnimBP");

	Params::UB_MasterPetAnimBP_C_ExecuteUbergraph_B_MasterPetAnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCurveValue_ReturnValue = CallFunc_GetCurveValue_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue = CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue_1 = CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


