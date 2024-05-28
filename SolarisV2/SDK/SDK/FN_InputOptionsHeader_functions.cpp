#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass InputOptionsHeader.InputOptionsHeader_C
// (None)

class UClass* UInputOptionsHeader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputOptionsHeader_C");

	return Clss;
}


// InputOptionsHeader_C InputOptionsHeader.Default__InputOptionsHeader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInputOptionsHeader_C* UInputOptionsHeader_C::GetDefaultObj()
{
	static class UInputOptionsHeader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputOptionsHeader_C*>(UInputOptionsHeader_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InputOptionsHeader.InputOptionsHeader_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UInputOptionsHeader_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputOptionsHeader_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputOptionsHeader.InputOptionsHeader_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInputOptionsHeader_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputOptionsHeader_C", "BP_OnItemExpansionChanged");

	Params::UInputOptionsHeader_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InputOptionsHeader.InputOptionsHeader_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInputOptionsHeader_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputOptionsHeader_C", "BP_OnItemSelectionChanged");

	Params::UInputOptionsHeader_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InputOptionsHeader.InputOptionsHeader_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInputOptionsHeader_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputOptionsHeader_C", "OnListItemObjectSet");

	Params::UInputOptionsHeader_C_OnListItemObjectSet_Params Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InputOptionsHeader.InputOptionsHeader_C.ExecuteUbergraph_InputOptionsHeader
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortOptionsCategoryHeader*  K2Node_DynamicCast_AsFort_Options_Category_Header                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInputOptionsHeader_C::ExecuteUbergraph_InputOptionsHeader(int32 EntryPoint, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, class UObject* K2Node_Event_ListItemObject, class UFortOptionsCategoryHeader* K2Node_DynamicCast_AsFort_Options_Category_Header, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputOptionsHeader_C", "ExecuteUbergraph_InputOptionsHeader");

	Params::UInputOptionsHeader_C_ExecuteUbergraph_InputOptionsHeader_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.K2Node_DynamicCast_AsFort_Options_Category_Header = K2Node_DynamicCast_AsFort_Options_Category_Header;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


