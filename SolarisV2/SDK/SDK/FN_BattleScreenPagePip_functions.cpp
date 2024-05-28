#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BattleScreenPagePip.BattleScreenPagePip_C
// (None)

class UClass* UBattleScreenPagePip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleScreenPagePip_C");

	return Clss;
}


// BattleScreenPagePip_C BattleScreenPagePip.Default__BattleScreenPagePip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleScreenPagePip_C* UBattleScreenPagePip_C::GetDefaultObj()
{
	static class UBattleScreenPagePip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleScreenPagePip_C*>(UBattleScreenPagePip_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleScreenPagePip.BattleScreenPagePip_C.OnSetPipActive
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bActive                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleScreenPagePip_C::OnSetPipActive(bool bActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleScreenPagePip_C", "OnSetPipActive");

	Params::UBattleScreenPagePip_C_OnSetPipActive_Params Parms{};

	Parms.bActive = bActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleScreenPagePip.BattleScreenPagePip_C.ExecuteUbergraph_BattleScreenPagePip
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bActive                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleScreenPagePip_C::ExecuteUbergraph_BattleScreenPagePip(int32 EntryPoint, bool K2Node_Event_bActive, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleScreenPagePip_C", "ExecuteUbergraph_BattleScreenPagePip");

	Params::UBattleScreenPagePip_C_ExecuteUbergraph_BattleScreenPagePip_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bActive = K2Node_Event_bActive;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.K2Node_MakeStruct_LinearColor_1 = K2Node_MakeStruct_LinearColor_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


