#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CMS_ML_BattlePass_RightImageWidget.CMS_ML_BattlePass_RightImageWidget_C
// (None)

class UClass* UCMS_ML_BattlePass_RightImageWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CMS_ML_BattlePass_RightImageWidget_C");

	return Clss;
}


// CMS_ML_BattlePass_RightImageWidget_C CMS_ML_BattlePass_RightImageWidget.Default__CMS_ML_BattlePass_RightImageWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCMS_ML_BattlePass_RightImageWidget_C* UCMS_ML_BattlePass_RightImageWidget_C::GetDefaultObj()
{
	static class UCMS_ML_BattlePass_RightImageWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCMS_ML_BattlePass_RightImageWidget_C*>(UCMS_ML_BattlePass_RightImageWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CMS_ML_BattlePass_RightImageWidget.CMS_ML_BattlePass_RightImageWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCMS_ML_BattlePass_RightImageWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CMS_ML_BattlePass_RightImageWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CMS_ML_BattlePass_RightImageWidget.CMS_ML_BattlePass_RightImageWidget_C.ExecuteUbergraph_CMS_ML_BattlePass_RightImageWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaAccountContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCurrentSeasonName_ReturnValue                        (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

void UCMS_ML_BattlePass_RightImageWidget_C::ExecuteUbergraph_CMS_ML_BattlePass_RightImageWidget(int32 EntryPoint, class UAthenaAccountContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetCurrentSeasonName_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CMS_ML_BattlePass_RightImageWidget_C", "ExecuteUbergraph_CMS_ML_BattlePass_RightImageWidget");

	Params::UCMS_ML_BattlePass_RightImageWidget_C_ExecuteUbergraph_CMS_ML_BattlePass_RightImageWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentSeasonName_ReturnValue = CallFunc_GetCurrentSeasonName_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


