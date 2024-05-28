#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaDirectAcquisitonDetails_BattlePassStarDetails.AthenaDirectAcquisitonDetails_BattlePassStarDetails_C
// (None)

class UClass* UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaDirectAcquisitonDetails_BattlePassStarDetails_C");

	return Clss;
}


// AthenaDirectAcquisitonDetails_BattlePassStarDetails_C AthenaDirectAcquisitonDetails_BattlePassStarDetails.Default__AthenaDirectAcquisitonDetails_BattlePassStarDetails_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C* UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C::GetDefaultObj()
{
	static class UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C*>(UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaDirectAcquisitonDetails_BattlePassStarDetails.AthenaDirectAcquisitonDetails_BattlePassStarDetails_C.SetNumOfBattlePassStars
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumOfBattlePassStars                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C::SetNumOfBattlePassStars(int32 NumOfBattlePassStars)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaDirectAcquisitonDetails_BattlePassStarDetails_C", "SetNumOfBattlePassStars");

	Params::UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C_SetNumOfBattlePassStars_Params Parms{};

	Parms.NumOfBattlePassStars = NumOfBattlePassStars;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitonDetails_BattlePassStarDetails.AthenaDirectAcquisitonDetails_BattlePassStarDetails_C.ExecuteUbergraph_AthenaDirectAcquisitonDetails_BattlePassStarDetails
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NumOfBattlePassStars                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C::ExecuteUbergraph_AthenaDirectAcquisitonDetails_BattlePassStarDetails(int32 EntryPoint, int32 K2Node_CustomEvent_NumOfBattlePassStars, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaDirectAcquisitonDetails_BattlePassStarDetails_C", "ExecuteUbergraph_AthenaDirectAcquisitonDetails_BattlePassStarDetails");

	Params::UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C_ExecuteUbergraph_AthenaDirectAcquisitonDetails_BattlePassStarDetails_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NumOfBattlePassStars = K2Node_CustomEvent_NumOfBattlePassStars;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


