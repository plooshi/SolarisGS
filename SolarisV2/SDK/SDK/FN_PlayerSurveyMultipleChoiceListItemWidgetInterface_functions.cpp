#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerSurveyMultipleChoiceListItemWidgetInterface.PlayerSurveyMultipleChoiceListItemWidgetInterface_C
// (None)

class UClass* IPlayerSurveyMultipleChoiceListItemWidgetInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerSurveyMultipleChoiceListItemWidgetInterface_C");

	return Clss;
}


// PlayerSurveyMultipleChoiceListItemWidgetInterface_C PlayerSurveyMultipleChoiceListItemWidgetInterface.Default__PlayerSurveyMultipleChoiceListItemWidgetInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IPlayerSurveyMultipleChoiceListItemWidgetInterface_C* IPlayerSurveyMultipleChoiceListItemWidgetInterface_C::GetDefaultObj()
{
	static class IPlayerSurveyMultipleChoiceListItemWidgetInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IPlayerSurveyMultipleChoiceListItemWidgetInterface_C*>(IPlayerSurveyMultipleChoiceListItemWidgetInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerSurveyMultipleChoiceListItemWidgetInterface.PlayerSurveyMultipleChoiceListItemWidgetInterface_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IPlayerSurveyMultipleChoiceListItemWidgetInterface_C::SetIndex(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyMultipleChoiceListItemWidgetInterface_C", "SetIndex");

	Params::IPlayerSurveyMultipleChoiceListItemWidgetInterface_C_SetIndex_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyMultipleChoiceListItemWidgetInterface.PlayerSurveyMultipleChoiceListItemWidgetInterface_C.SetChoiceData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPlayerSurveyQuestionChoiceValue                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void IPlayerSurveyMultipleChoiceListItemWidgetInterface_C::SetChoiceData(const struct FFortPlayerSurveyQuestionChoice& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyMultipleChoiceListItemWidgetInterface_C", "SetChoiceData");

	Params::IPlayerSurveyMultipleChoiceListItemWidgetInterface_C_SetChoiceData_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}

}


