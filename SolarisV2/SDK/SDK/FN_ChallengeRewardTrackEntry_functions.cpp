#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ChallengeRewardTrackEntry.ChallengeRewardTrackEntry_C
// (None)

class UClass* UChallengeRewardTrackEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChallengeRewardTrackEntry_C");

	return Clss;
}


// ChallengeRewardTrackEntry_C ChallengeRewardTrackEntry.Default__ChallengeRewardTrackEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallengeRewardTrackEntry_C* UChallengeRewardTrackEntry_C::GetDefaultObj()
{
	static class UChallengeRewardTrackEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallengeRewardTrackEntry_C*>(UChallengeRewardTrackEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ChallengeRewardTrackEntry.ChallengeRewardTrackEntry_C.SetIsInactive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      MaterialBrush                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsInactive                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallengeRewardTrackEntry_C::SetIsInactive(class UImage* MaterialBrush, bool IsInactive, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeRewardTrackEntry_C", "SetIsInactive");

	Params::UChallengeRewardTrackEntry_C_SetIsInactive_Params Parms{};

	Parms.MaterialBrush = MaterialBrush;
	Parms.IsInactive = IsInactive;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeRewardTrackEntry.ChallengeRewardTrackEntry_C.SetIsPrestige
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      MaterialBrush                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ViewingPrestige                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallengeRewardTrackEntry_C::SetIsPrestige(class UImage* MaterialBrush, bool ViewingPrestige, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeRewardTrackEntry_C", "SetIsPrestige");

	Params::UChallengeRewardTrackEntry_C_SetIsPrestige_Params Parms{};

	Parms.MaterialBrush = MaterialBrush;
	Parms.ViewingPrestige = ViewingPrestige;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeRewardTrackEntry.ChallengeRewardTrackEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UChallengeRewardTrackEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeRewardTrackEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChallengeRewardTrackEntry.ChallengeRewardTrackEntry_C.NextRewardToEarn
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bNext                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeRewardTrackEntry_C::NextRewardToEarn(bool bNext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeRewardTrackEntry_C", "NextRewardToEarn");

	Params::UChallengeRewardTrackEntry_C_NextRewardToEarn_Params Parms{};

	Parms.bNext = bNext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeRewardTrackEntry.ChallengeRewardTrackEntry_C.CompletedNextNode
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bAnimate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeRewardTrackEntry_C::CompletedNextNode(bool bAnimate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeRewardTrackEntry_C", "CompletedNextNode");

	Params::UChallengeRewardTrackEntry_C_CompletedNextNode_Params Parms{};

	Parms.bAnimate = bAnimate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeRewardTrackEntry.ChallengeRewardTrackEntry_C.SetToDefaultState
// (Event, Public, BlueprintEvent)
// Parameters:

void UChallengeRewardTrackEntry_C::SetToDefaultState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeRewardTrackEntry_C", "SetToDefaultState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChallengeRewardTrackEntry.ChallengeRewardTrackEntry_C.CompletedCurrentNode
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bAnimate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               LastReward                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeRewardTrackEntry_C::CompletedCurrentNode(bool bAnimate, bool LastReward)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeRewardTrackEntry_C", "CompletedCurrentNode");

	Params::UChallengeRewardTrackEntry_C_CompletedCurrentNode_Params Parms{};

	Parms.bAnimate = bAnimate;
	Parms.LastReward = LastReward;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeRewardTrackEntry.ChallengeRewardTrackEntry_C.SetAsCurrentPreviewItem
// (Event, Public, BlueprintEvent)
// Parameters:

void UChallengeRewardTrackEntry_C::SetAsCurrentPreviewItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeRewardTrackEntry_C", "SetAsCurrentPreviewItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChallengeRewardTrackEntry.ChallengeRewardTrackEntry_C.ClearPreviewSelection
// (Event, Public, BlueprintEvent)
// Parameters:

void UChallengeRewardTrackEntry_C::ClearPreviewSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeRewardTrackEntry_C", "ClearPreviewSelection");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChallengeRewardTrackEntry.ChallengeRewardTrackEntry_C.StyleChange
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bViewingPrestige                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeRewardTrackEntry_C::StyleChange(bool bViewingPrestige)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeRewardTrackEntry_C", "StyleChange");

	Params::UChallengeRewardTrackEntry_C_StyleChange_Params Parms{};

	Parms.bViewingPrestige = bViewingPrestige;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeRewardTrackEntry.ChallengeRewardTrackEntry_C.ExecuteUbergraph_ChallengeRewardTrackEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bNext                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bAnimate_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bAnimate                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_LastReward                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bViewingPrestige                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMissionRewardEntry_C*       K2Node_DynamicCast_AsMission_Reward_Entry                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMissionRewardEntry_C*       K2Node_DynamicCast_AsMission_Reward_Entry_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMissionRewardEntry_C*       K2Node_DynamicCast_AsMission_Reward_Entry_2                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMissionRewardEntry_C*       K2Node_DynamicCast_AsMission_Reward_Entry_3                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMissionRewardEntry_C*       K2Node_DynamicCast_AsMission_Reward_Entry_4                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeRewardTrackEntry_C::ExecuteUbergraph_ChallengeRewardTrackEntry(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool K2Node_Event_bNext, bool K2Node_Event_bAnimate_1, bool K2Node_Event_bAnimate, bool K2Node_Event_LastReward, float K2Node_Select_Default, bool K2Node_Event_bViewingPrestige, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default_1, class UMissionRewardEntry_C* K2Node_DynamicCast_AsMission_Reward_Entry, bool K2Node_DynamicCast_bSuccess, class UMissionRewardEntry_C* K2Node_DynamicCast_AsMission_Reward_Entry_1, bool K2Node_DynamicCast_bSuccess_1, class UMissionRewardEntry_C* K2Node_DynamicCast_AsMission_Reward_Entry_2, bool K2Node_DynamicCast_bSuccess_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UMissionRewardEntry_C* K2Node_DynamicCast_AsMission_Reward_Entry_3, bool K2Node_DynamicCast_bSuccess_3, class UMissionRewardEntry_C* K2Node_DynamicCast_AsMission_Reward_Entry_4, bool K2Node_DynamicCast_bSuccess_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeRewardTrackEntry_C", "ExecuteUbergraph_ChallengeRewardTrackEntry");

	Params::UChallengeRewardTrackEntry_C_ExecuteUbergraph_ChallengeRewardTrackEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.K2Node_Event_bNext = K2Node_Event_bNext;
	Parms.K2Node_Event_bAnimate_1 = K2Node_Event_bAnimate_1;
	Parms.K2Node_Event_bAnimate = K2Node_Event_bAnimate;
	Parms.K2Node_Event_LastReward = K2Node_Event_LastReward;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_bViewingPrestige = K2Node_Event_bViewingPrestige;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_DynamicCast_AsMission_Reward_Entry = K2Node_DynamicCast_AsMission_Reward_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsMission_Reward_Entry_1 = K2Node_DynamicCast_AsMission_Reward_Entry_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsMission_Reward_Entry_2 = K2Node_DynamicCast_AsMission_Reward_Entry_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_DynamicCast_AsMission_Reward_Entry_3 = K2Node_DynamicCast_AsMission_Reward_Entry_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsMission_Reward_Entry_4 = K2Node_DynamicCast_AsMission_Reward_Entry_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


