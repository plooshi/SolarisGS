#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ScoreStatRowWidget.ScoreStatRowWidget_C
// (None)

class UClass* UScoreStatRowWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScoreStatRowWidget_C");

	return Clss;
}


// ScoreStatRowWidget_C ScoreStatRowWidget.Default__ScoreStatRowWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScoreStatRowWidget_C* UScoreStatRowWidget_C::GetDefaultObj()
{
	static class UScoreStatRowWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScoreStatRowWidget_C*>(UScoreStatRowWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ScoreStatRowWidget.ScoreStatRowWidget_C.OnStatChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UScoreStatRowWidget_C::OnStatChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScoreStatRowWidget_C", "OnStatChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ScoreStatRowWidget.ScoreStatRowWidget_C.ExecuteUbergraph_ScoreStatRowWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaBaseStatView*         CallFunc_GetBaseStatView_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortUIStatStyle            CallFunc_GetStatStyle_ReturnValue                                (ConstParm)
// float                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScoreStatRowWidget_C::ExecuteUbergraph_ScoreStatRowWidget(int32 EntryPoint, class UAthenaBaseStatView* CallFunc_GetBaseStatView_ReturnValue, const struct FFortUIStatStyle& CallFunc_GetStatStyle_ReturnValue, float CallFunc_GetStat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScoreStatRowWidget_C", "ExecuteUbergraph_ScoreStatRowWidget");

	Params::UScoreStatRowWidget_C_ExecuteUbergraph_ScoreStatRowWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetBaseStatView_ReturnValue = CallFunc_GetBaseStatView_ReturnValue;
	Parms.CallFunc_GetStatStyle_ReturnValue = CallFunc_GetStatStyle_ReturnValue;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


