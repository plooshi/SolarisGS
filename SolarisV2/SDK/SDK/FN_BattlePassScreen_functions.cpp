#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BattlePassScreen.BattlePassScreen_C
// (None)

class UClass* UBattlePassScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassScreen_C");

	return Clss;
}


// BattlePassScreen_C BattlePassScreen.Default__BattlePassScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattlePassScreen_C* UBattlePassScreen_C::GetDefaultObj()
{
	static class UBattlePassScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassScreen_C*>(UBattlePassScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePassScreen.BattlePassScreen_C.Update Zoom Level
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ZoomLevel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreen_C::Update_Zoom_Level(float ZoomLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreen_C", "Update Zoom Level");

	Params::UBattlePassScreen_C_Update_Zoom_Level_Params Parms{};

	Parms.ZoomLevel = ZoomLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen.BattlePassScreen_C.GetWidgetForFramingViewedItem
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetBattlePassWidgetForFramingViewedItem_Widget          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBattlePassScreen_C::GetWidgetForFramingViewedItem(class UWidget* CallFunc_GetBattlePassWidgetForFramingViewedItem_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreen_C", "GetWidgetForFramingViewedItem");

	Params::UBattlePassScreen_C_GetWidgetForFramingViewedItem_Params Parms{};

	Parms.CallFunc_GetBattlePassWidgetForFramingViewedItem_Widget = CallFunc_GetBattlePassWidgetForFramingViewedItem_Widget;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattlePassScreen.BattlePassScreen_C.HandleZoomRequest
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      PlacementActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bZoomOut                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePassScreen_C::HandleZoomRequest(class AActor* PlacementActor, bool bZoomOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreen_C", "HandleZoomRequest");

	Params::UBattlePassScreen_C_HandleZoomRequest_Params Parms{};

	Parms.PlacementActor = PlacementActor;
	Parms.bZoomOut = bZoomOut;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen.BattlePassScreen_C.OnHandlePipSelectedBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              PipIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreen_C::OnHandlePipSelectedBP(int32 PipIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreen_C", "OnHandlePipSelectedBP");

	Params::UBattlePassScreen_C_OnHandlePipSelectedBP_Params Parms{};

	Parms.PipIndex = PipIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen.BattlePassScreen_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBattlePassScreen_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreen_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassScreen.BattlePassScreen_C.ExecuteUbergraph_BattlePassScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class AActor*                      K2Node_Event_PlacementActor                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bZoomOut                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AVaultCharacterPlacementHelper_C*K2Node_DynamicCast_AsVault_Character_Placement_Helper            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_PipIndex                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)

void UBattlePassScreen_C::ExecuteUbergraph_BattlePassScreen(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class AActor* K2Node_Event_PlacementActor, bool K2Node_Event_bZoomOut, class AVaultCharacterPlacementHelper_C* K2Node_DynamicCast_AsVault_Character_Placement_Helper, bool K2Node_DynamicCast_bSuccess, int32 K2Node_Event_PipIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Variable, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreen_C", "ExecuteUbergraph_BattlePassScreen");

	Params::UBattlePassScreen_C_ExecuteUbergraph_BattlePassScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Event_PlacementActor = K2Node_Event_PlacementActor;
	Parms.K2Node_Event_bZoomOut = K2Node_Event_bZoomOut;
	Parms.K2Node_DynamicCast_AsVault_Character_Placement_Helper = K2Node_DynamicCast_AsVault_Character_Placement_Helper;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_PipIndex = K2Node_Event_PipIndex;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button = K2Node_DynamicCast_AsIcon_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


