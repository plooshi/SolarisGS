#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MinimalChallengeEntry.MinimalChallengeEntry_C
// (None)

class UClass* UMinimalChallengeEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MinimalChallengeEntry_C");

	return Clss;
}


// MinimalChallengeEntry_C MinimalChallengeEntry.Default__MinimalChallengeEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMinimalChallengeEntry_C* UMinimalChallengeEntry_C::GetDefaultObj()
{
	static class UMinimalChallengeEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMinimalChallengeEntry_C*>(UMinimalChallengeEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MinimalChallengeEntry.MinimalChallengeEntry_C.OnChallengeInfoSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsInProgress                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMinimalChallengeEntry_C::OnChallengeInfoSet(bool bIsInProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimalChallengeEntry_C", "OnChallengeInfoSet");

	Params::UMinimalChallengeEntry_C_OnChallengeInfoSet_Params Parms{};

	Parms.bIsInProgress = bIsInProgress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimalChallengeEntry.MinimalChallengeEntry_C.ExecuteUbergraph_MinimalChallengeEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsInProgress                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinimalChallengeEntry_C::ExecuteUbergraph_MinimalChallengeEntry(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool K2Node_Event_bIsInProgress, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimalChallengeEntry_C", "ExecuteUbergraph_MinimalChallengeEntry");

	Params::UMinimalChallengeEntry_C_ExecuteUbergraph_MinimalChallengeEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Event_bIsInProgress = K2Node_Event_bIsInProgress;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


