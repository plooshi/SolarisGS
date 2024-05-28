#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DivisionIconButton.DivisionIconButton_C
// (None)

class UClass* UDivisionIconButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DivisionIconButton_C");

	return Clss;
}


// DivisionIconButton_C DivisionIconButton.Default__DivisionIconButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDivisionIconButton_C* UDivisionIconButton_C::GetDefaultObj()
{
	static class UDivisionIconButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDivisionIconButton_C*>(UDivisionIconButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DivisionIconButton.DivisionIconButton_C.OnRankButtonSelected
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDivisionIconButton_C::OnRankButtonSelected(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DivisionIconButton_C", "OnRankButtonSelected");

	Params::UDivisionIconButton_C_OnRankButtonSelected_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DivisionIconButton.DivisionIconButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UDivisionIconButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DivisionIconButton_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DivisionIconButton.DivisionIconButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UDivisionIconButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DivisionIconButton_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DivisionIconButton.DivisionIconButton_C.ExecuteUbergraph_DivisionIconButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDivisionIconButton_C::ExecuteUbergraph_DivisionIconButton(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DivisionIconButton_C", "ExecuteUbergraph_DivisionIconButton");

	Params::UDivisionIconButton_C_ExecuteUbergraph_DivisionIconButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}

}


