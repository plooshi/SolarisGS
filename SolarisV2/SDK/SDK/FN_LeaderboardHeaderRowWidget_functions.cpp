#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LeaderboardHeaderRowWidget.LeaderboardHeaderRowWidget_C
// (None)

class UClass* ULeaderboardHeaderRowWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeaderboardHeaderRowWidget_C");

	return Clss;
}


// LeaderboardHeaderRowWidget_C LeaderboardHeaderRowWidget.Default__LeaderboardHeaderRowWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeaderboardHeaderRowWidget_C* ULeaderboardHeaderRowWidget_C::GetDefaultObj()
{
	static class ULeaderboardHeaderRowWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeaderboardHeaderRowWidget_C*>(ULeaderboardHeaderRowWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LeaderboardHeaderRowWidget.LeaderboardHeaderRowWidget_C.SetStatNameText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void ULeaderboardHeaderRowWidget_C::SetStatNameText(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LeaderboardHeaderRowWidget_C", "SetStatNameText");

	Params::ULeaderboardHeaderRowWidget_C_SetStatNameText_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaderboardHeaderRowWidget.LeaderboardHeaderRowWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULeaderboardHeaderRowWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LeaderboardHeaderRowWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LeaderboardHeaderRowWidget.LeaderboardHeaderRowWidget_C.ExecuteUbergraph_LeaderboardHeaderRowWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaderboardHeaderRowWidget_C::ExecuteUbergraph_LeaderboardHeaderRowWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LeaderboardHeaderRowWidget_C", "ExecuteUbergraph_LeaderboardHeaderRowWidget");

	Params::ULeaderboardHeaderRowWidget_C_ExecuteUbergraph_LeaderboardHeaderRowWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


