#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass EventLeaderboardHeader.EventLeaderboardHeader_C
// (None)

class UClass* UEventLeaderboardHeader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EventLeaderboardHeader_C");

	return Clss;
}


// EventLeaderboardHeader_C EventLeaderboardHeader.Default__EventLeaderboardHeader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEventLeaderboardHeader_C* UEventLeaderboardHeader_C::GetDefaultObj()
{
	static class UEventLeaderboardHeader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEventLeaderboardHeader_C*>(UEventLeaderboardHeader_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EventLeaderboardHeader.EventLeaderboardHeader_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UEventLeaderboardHeader_C::RefreshDataBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventLeaderboardHeader_C", "RefreshDataBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventLeaderboardHeader.EventLeaderboardHeader_C.ExecuteUbergraph_EventLeaderboardHeader
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetWindowRoundDisplayString_ReturnValue                 (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UEventLeaderboardHeader_C::ExecuteUbergraph_EventLeaderboardHeader(int32 EntryPoint, class FText CallFunc_GetWindowRoundDisplayString_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventLeaderboardHeader_C", "ExecuteUbergraph_EventLeaderboardHeader");

	Params::UEventLeaderboardHeader_C_ExecuteUbergraph_EventLeaderboardHeader_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetWindowRoundDisplayString_ReturnValue = CallFunc_GetWindowRoundDisplayString_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}

}


