#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DeadzoneAdjustment.DeadzoneAdjustment_C
// (None)

class UClass* UDeadzoneAdjustment_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DeadzoneAdjustment_C");

	return Clss;
}


// DeadzoneAdjustment_C DeadzoneAdjustment.Default__DeadzoneAdjustment_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDeadzoneAdjustment_C* UDeadzoneAdjustment_C::GetDefaultObj()
{
	static class UDeadzoneAdjustment_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDeadzoneAdjustment_C*>(UDeadzoneAdjustment_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DeadzoneAdjustment.DeadzoneAdjustment_C.DoCustomNavigation_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

class UWidget* UDeadzoneAdjustment_C::DoCustomNavigation_0(enum class EUINavigation Navigation, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeadzoneAdjustment_C", "DoCustomNavigation_0");

	Params::UDeadzoneAdjustment_C_DoCustomNavigation_0_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DeadzoneAdjustment.DeadzoneAdjustment_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UDeadzoneAdjustment_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeadzoneAdjustment_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DeadzoneAdjustment.DeadzoneAdjustment_C.OnValueChanged_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDeadzoneAdjustment_C::OnValueChanged_Bind(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeadzoneAdjustment_C", "OnValueChanged_Bind");

	Params::UDeadzoneAdjustment_C_OnValueChanged_Bind_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DeadzoneAdjustment.DeadzoneAdjustment_C.ExecuteUbergraph_DeadzoneAdjustment
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              CallFunc_ConvertSliderValueToSettingsValue_SettingsValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDeadzoneAdjustment_C::ExecuteUbergraph_DeadzoneAdjustment(int32 EntryPoint, float CallFunc_GetValue_ReturnValue, float K2Node_CustomEvent_Value, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_ConvertSliderValueToSettingsValue_SettingsValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeadzoneAdjustment_C", "ExecuteUbergraph_DeadzoneAdjustment");

	Params::UDeadzoneAdjustment_C_ExecuteUbergraph_DeadzoneAdjustment_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_ConvertSliderValueToSettingsValue_SettingsValue = CallFunc_ConvertSliderValueToSettingsValue_SettingsValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


