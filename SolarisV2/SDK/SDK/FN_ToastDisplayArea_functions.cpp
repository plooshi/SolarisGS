#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ToastDisplayArea.ToastDisplayArea_C
// (None)

class UClass* UToastDisplayArea_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToastDisplayArea_C");

	return Clss;
}


// ToastDisplayArea_C ToastDisplayArea.Default__ToastDisplayArea_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UToastDisplayArea_C* UToastDisplayArea_C::GetDefaultObj()
{
	static class UToastDisplayArea_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UToastDisplayArea_C*>(UToastDisplayArea_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ToastDisplayArea.ToastDisplayArea_C.AttemptDisplayNextToast
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UToastDisplayArea_C::AttemptDisplayNextToast()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToastDisplayArea_C", "AttemptDisplayNextToast");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ToastDisplayArea.ToastDisplayArea_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UToastDisplayArea_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToastDisplayArea_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ToastDisplayArea.ToastDisplayArea_C.BndEvt__ToastWidget_New_K2Node_ComponentBoundEvent_9_OnFinishedToast__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UToastDisplayArea_C::BndEvt__ToastWidget_New_K2Node_ComponentBoundEvent_9_OnFinishedToast__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToastDisplayArea_C", "BndEvt__ToastWidget_New_K2Node_ComponentBoundEvent_9_OnFinishedToast__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ToastDisplayArea.ToastDisplayArea_C.BndEvt__ToastWidget_MinorError_K2Node_ComponentBoundEvent_3_OnFinishedToast__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UToastDisplayArea_C::BndEvt__ToastWidget_MinorError_K2Node_ComponentBoundEvent_3_OnFinishedToast__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToastDisplayArea_C", "BndEvt__ToastWidget_MinorError_K2Node_ComponentBoundEvent_3_OnFinishedToast__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ToastDisplayArea.ToastDisplayArea_C.BndEvt__PowerToastWidget_K2Node_ComponentBoundEvent_0_OnToastFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UToastDisplayArea_C::BndEvt__PowerToastWidget_K2Node_ComponentBoundEvent_0_OnToastFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToastDisplayArea_C", "BndEvt__PowerToastWidget_K2Node_ComponentBoundEvent_0_OnToastFinished__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ToastDisplayArea.ToastDisplayArea_C.BndEvt__VoiceChannelChangePopup_K2Node_ComponentBoundEvent_1_OnToastDisplayFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UToastDisplayArea_C::BndEvt__VoiceChannelChangePopup_K2Node_ComponentBoundEvent_1_OnToastDisplayFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToastDisplayArea_C", "BndEvt__VoiceChannelChangePopup_K2Node_ComponentBoundEvent_1_OnToastDisplayFinished__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ToastDisplayArea.ToastDisplayArea_C.OnDisplayToast
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortUINotification*         NewToast                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToastDisplayArea_C::OnDisplayToast(class UFortUINotification* NewToast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToastDisplayArea_C", "OnDisplayToast");

	Params::UToastDisplayArea_C_OnDisplayToast_Params Parms{};

	Parms.NewToast = NewToast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToastDisplayArea.ToastDisplayArea_C.ExecuteUbergraph_ToastDisplayArea
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINotification*         K2Node_Event_NewToast                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UToastWidget_New_C*          K2Node_DynamicCast_AsToast_Widget_New                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UToastWidget_MinorError_C*   K2Node_DynamicCast_AsToast_Widget_Minor_Error                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPowerRatingToast* K2Node_DynamicCast_AsFort_Player_Power_Rating_Toast              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_ByteByte_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_ByteByte_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UToastDisplayArea_C::ExecuteUbergraph_ToastDisplayArea(int32 EntryPoint, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, class UFortUINotification* K2Node_Event_NewToast, class UToastWidget_New_C* K2Node_DynamicCast_AsToast_Widget_New, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class UToastWidget_MinorError_C* K2Node_DynamicCast_AsToast_Widget_Minor_Error, bool K2Node_DynamicCast_bSuccess_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, class UFortPlayerPowerRatingToast* K2Node_DynamicCast_AsFort_Player_Power_Rating_Toast, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_LessEqual_ByteByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_LessEqual_ByteByte_ReturnValue_1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToastDisplayArea_C", "ExecuteUbergraph_ToastDisplayArea");

	Params::UToastDisplayArea_C_ExecuteUbergraph_ToastDisplayArea_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.K2Node_Event_NewToast = K2Node_Event_NewToast;
	Parms.K2Node_DynamicCast_AsToast_Widget_New = K2Node_DynamicCast_AsToast_Widget_New;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsToast_Widget_Minor_Error = K2Node_DynamicCast_AsToast_Widget_Minor_Error;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_2 = CallFunc_MakeLiteralByte_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsFort_Player_Power_Rating_Toast = K2Node_DynamicCast_AsFort_Player_Power_Rating_Toast;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_LessEqual_ByteByte_ReturnValue = CallFunc_LessEqual_ByteByte_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_3 = CallFunc_MakeLiteralByte_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_LessEqual_ByteByte_ReturnValue_1 = CallFunc_LessEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


