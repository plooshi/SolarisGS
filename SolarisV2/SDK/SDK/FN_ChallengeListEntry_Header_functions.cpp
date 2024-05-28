#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ChallengeListEntry_Header.ChallengeListEntry_Header_C
// (None)

class UClass* UChallengeListEntry_Header_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChallengeListEntry_Header_C");

	return Clss;
}


// ChallengeListEntry_Header_C ChallengeListEntry_Header.Default__ChallengeListEntry_Header_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallengeListEntry_Header_C* UChallengeListEntry_Header_C::GetDefaultObj()
{
	static class UChallengeListEntry_Header_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallengeListEntry_Header_C*>(UChallengeListEntry_Header_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ChallengeListEntry_Header.ChallengeListEntry_Header_C.OnSectionTypeSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EChallengeListSection   SectionType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallengeListEntry_Header_C::OnSectionTypeSet(enum class EChallengeListSection SectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeListEntry_Header_C", "OnSectionTypeSet");

	Params::UChallengeListEntry_Header_C_OnSectionTypeSet_Params Parms{};

	Parms.SectionType = SectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeListEntry_Header.ChallengeListEntry_Header_C.ExecuteUbergraph_ChallengeListEntry_Header
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EChallengeListSection   K2Node_Event_SectionType                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeListEntry_Header_C::ExecuteUbergraph_ChallengeListEntry_Header(int32 EntryPoint, enum class EChallengeListSection K2Node_Event_SectionType, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeListEntry_Header_C", "ExecuteUbergraph_ChallengeListEntry_Header");

	Params::UChallengeListEntry_Header_C_ExecuteUbergraph_ChallengeListEntry_Header_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_SectionType = K2Node_Event_SectionType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


