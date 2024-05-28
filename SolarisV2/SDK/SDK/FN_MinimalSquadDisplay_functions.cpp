#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MinimalSquadDisplay.MinimalSquadDisplay_C
// (None)

class UClass* UMinimalSquadDisplay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MinimalSquadDisplay_C");

	return Clss;
}


// MinimalSquadDisplay_C MinimalSquadDisplay.Default__MinimalSquadDisplay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMinimalSquadDisplay_C* UMinimalSquadDisplay_C::GetDefaultObj()
{
	static class UMinimalSquadDisplay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMinimalSquadDisplay_C*>(UMinimalSquadDisplay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MinimalSquadDisplay.MinimalSquadDisplay_C.OnLoaded_1B34C3FE47597A4DBA2DA7AFCF8744FB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinimalSquadDisplay_C::OnLoaded_1B34C3FE47597A4DBA2DA7AFCF8744FB(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimalSquadDisplay_C", "OnLoaded_1B34C3FE47597A4DBA2DA7AFCF8744FB");

	Params::UMinimalSquadDisplay_C_OnLoaded_1B34C3FE47597A4DBA2DA7AFCF8744FB_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimalSquadDisplay.MinimalSquadDisplay_C.OnLoaded_86B795124D19C878C8559FA7E78726E0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinimalSquadDisplay_C::OnLoaded_86B795124D19C878C8559FA7E78726E0(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimalSquadDisplay_C", "OnLoaded_86B795124D19C878C8559FA7E78726E0");

	Params::UMinimalSquadDisplay_C_OnLoaded_86B795124D19C878C8559FA7E78726E0_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimalSquadDisplay.MinimalSquadDisplay_C.OnSquadAssigned
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FAthenaTeamDisplayInfo      SquadStyle                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMinimalSquadDisplay_C::OnSquadAssigned(struct FAthenaTeamDisplayInfo& SquadStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimalSquadDisplay_C", "OnSquadAssigned");

	Params::UMinimalSquadDisplay_C_OnSquadAssigned_Params Parms{};

	Parms.SquadStyle = SquadStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimalSquadDisplay.MinimalSquadDisplay_C.OnSquadIsEmptyChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bSquadIsEmpty                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bMultipleSquadsPopulated                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMinimalSquadDisplay_C::OnSquadIsEmptyChanged(bool bSquadIsEmpty, bool bMultipleSquadsPopulated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimalSquadDisplay_C", "OnSquadIsEmptyChanged");

	Params::UMinimalSquadDisplay_C_OnSquadIsEmptyChanged_Params Parms{};

	Parms.bSquadIsEmpty = bSquadIsEmpty;
	Parms.bMultipleSquadsPopulated = bMultipleSquadsPopulated;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimalSquadDisplay.MinimalSquadDisplay_C.ExecuteUbergraph_MinimalSquadDisplay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSquadIsEmpty                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bMultipleSquadsPopulated                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_CustomEvent_Loaded_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    K2Node_DynamicCast_AsTexture                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAthenaTeamDisplayInfo      K2Node_Event_SquadStyle                                          (ConstParm)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinimalSquadDisplay_C::ExecuteUbergraph_MinimalSquadDisplay(int32 EntryPoint, bool K2Node_Event_bSquadIsEmpty, bool K2Node_Event_bMultipleSquadsPopulated, class UObject* K2Node_CustomEvent_Loaded_1, bool CallFunc_Not_PreBool_ReturnValue, class UObject* Temp_object_Variable, bool CallFunc_BooleanAND_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable_1, class UTexture* K2Node_DynamicCast_AsTexture, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FAthenaTeamDisplayInfo& K2Node_Event_SquadStyle, enum class ESlateVisibility K2Node_Select_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimalSquadDisplay_C", "ExecuteUbergraph_MinimalSquadDisplay");

	Params::UMinimalSquadDisplay_C_ExecuteUbergraph_MinimalSquadDisplay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bSquadIsEmpty = K2Node_Event_bSquadIsEmpty;
	Parms.K2Node_Event_bMultipleSquadsPopulated = K2Node_Event_bMultipleSquadsPopulated;
	Parms.K2Node_CustomEvent_Loaded_1 = K2Node_CustomEvent_Loaded_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_DynamicCast_AsTexture = K2Node_DynamicCast_AsTexture;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_SquadStyle = K2Node_Event_SquadStyle;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


