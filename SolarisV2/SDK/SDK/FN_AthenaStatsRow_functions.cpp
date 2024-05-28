#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaStatsRow.AthenaStatsRow_C
// (None)

class UClass* UAthenaStatsRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaStatsRow_C");

	return Clss;
}


// AthenaStatsRow_C AthenaStatsRow.Default__AthenaStatsRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaStatsRow_C* UAthenaStatsRow_C::GetDefaultObj()
{
	static class UAthenaStatsRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaStatsRow_C*>(UAthenaStatsRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaStatsRow.AthenaStatsRow_C.SetStatValueAsText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        StatValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaStatsRow_C::SetStatValueAsText(class FText StatValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaStatsRow_C", "SetStatValueAsText");

	Params::UAthenaStatsRow_C_SetStatValueAsText_Params Parms{};

	Parms.StatValue = StatValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaStatsRow.AthenaStatsRow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaStatsRow_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaStatsRow_C", "PreConstruct");

	Params::UAthenaStatsRow_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaStatsRow.AthenaStatsRow_C.ExecuteUbergraph_AthenaStatsRow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaStatsRow_C::ExecuteUbergraph_AthenaStatsRow(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaStatsRow_C", "ExecuteUbergraph_AthenaStatsRow");

	Params::UAthenaStatsRow_C_ExecuteUbergraph_AthenaStatsRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


