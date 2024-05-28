#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass OptionsMenuInputDisplayOnly.OptionsMenuInputDisplayOnly_C
// (None)

class UClass* UOptionsMenuInputDisplayOnly_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptionsMenuInputDisplayOnly_C");

	return Clss;
}


// OptionsMenuInputDisplayOnly_C OptionsMenuInputDisplayOnly.Default__OptionsMenuInputDisplayOnly_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOptionsMenuInputDisplayOnly_C* UOptionsMenuInputDisplayOnly_C::GetDefaultObj()
{
	static class UOptionsMenuInputDisplayOnly_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptionsMenuInputDisplayOnly_C*>(UOptionsMenuInputDisplayOnly_C::StaticClass()->DefaultObject);

	return Default;
}


// Function OptionsMenuInputDisplayOnly.OptionsMenuInputDisplayOnly_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UOptionsMenuInputDisplayOnly_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenuInputDisplayOnly_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenuInputDisplayOnly.OptionsMenuInputDisplayOnly_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenuInputDisplayOnly_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenuInputDisplayOnly_C", "BP_OnItemExpansionChanged");

	Params::UOptionsMenuInputDisplayOnly_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInputDisplayOnly.OptionsMenuInputDisplayOnly_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenuInputDisplayOnly_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenuInputDisplayOnly_C", "BP_OnItemSelectionChanged");

	Params::UOptionsMenuInputDisplayOnly_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInputDisplayOnly.OptionsMenuInputDisplayOnly_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuInputDisplayOnly_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenuInputDisplayOnly_C", "OnListItemObjectSet");

	Params::UOptionsMenuInputDisplayOnly_C_OnListItemObjectSet_Params Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInputDisplayOnly.OptionsMenuInputDisplayOnly_C.ExecuteUbergraph_OptionsMenuInputDisplayOnly
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenuInputDisplayOnly_C::ExecuteUbergraph_OptionsMenuInputDisplayOnly(int32 EntryPoint, class UObject* K2Node_Event_ListItemObject, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenuInputDisplayOnly_C", "ExecuteUbergraph_OptionsMenuInputDisplayOnly");

	Params::UOptionsMenuInputDisplayOnly_C_ExecuteUbergraph_OptionsMenuInputDisplayOnly_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}

}


