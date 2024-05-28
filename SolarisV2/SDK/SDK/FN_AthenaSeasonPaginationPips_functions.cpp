#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaSeasonPaginationPips.AthenaSeasonPaginationPips_C
// (None)

class UClass* UAthenaSeasonPaginationPips_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaSeasonPaginationPips_C");

	return Clss;
}


// AthenaSeasonPaginationPips_C AthenaSeasonPaginationPips.Default__AthenaSeasonPaginationPips_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaSeasonPaginationPips_C* UAthenaSeasonPaginationPips_C::GetDefaultObj()
{
	static class UAthenaSeasonPaginationPips_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaSeasonPaginationPips_C*>(UAthenaSeasonPaginationPips_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaSeasonPaginationPips.AthenaSeasonPaginationPips_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaSeasonPaginationPips_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSeasonPaginationPips_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaSeasonPaginationPips.AthenaSeasonPaginationPips_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonPaginationPips_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSeasonPaginationPips_C", "Tick");

	Params::UAthenaSeasonPaginationPips_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonPaginationPips.AthenaSeasonPaginationPips_C.Select
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaSeasonPaginationPips_C::Select()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSeasonPaginationPips_C", "Select");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaSeasonPaginationPips.AthenaSeasonPaginationPips_C.Deselect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaSeasonPaginationPips_C::Deselect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSeasonPaginationPips_C", "Deselect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaSeasonPaginationPips.AthenaSeasonPaginationPips_C.ExecuteUbergraph_AthenaSeasonPaginationPips
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonPaginationPips_C::ExecuteUbergraph_AthenaSeasonPaginationPips(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSeasonPaginationPips_C", "ExecuteUbergraph_AthenaSeasonPaginationPips");

	Params::UAthenaSeasonPaginationPips_C_ExecuteUbergraph_AthenaSeasonPaginationPips_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


