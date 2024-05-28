#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MiscellaneousModeItemDetailsHostPanel.MiscellaneousModeItemDetailsHostPanel_C
// (None)

class UClass* UMiscellaneousModeItemDetailsHostPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MiscellaneousModeItemDetailsHostPanel_C");

	return Clss;
}


// MiscellaneousModeItemDetailsHostPanel_C MiscellaneousModeItemDetailsHostPanel.Default__MiscellaneousModeItemDetailsHostPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMiscellaneousModeItemDetailsHostPanel_C* UMiscellaneousModeItemDetailsHostPanel_C::GetDefaultObj()
{
	static class UMiscellaneousModeItemDetailsHostPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMiscellaneousModeItemDetailsHostPanel_C*>(UMiscellaneousModeItemDetailsHostPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MiscellaneousModeItemDetailsHostPanel.MiscellaneousModeItemDetailsHostPanel_C.HandleHasItemMarkedForMulchingChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMiscellaneousModeItemDetailsHostPanel_C::HandleHasItemMarkedForMulchingChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MiscellaneousModeItemDetailsHostPanel_C", "HandleHasItemMarkedForMulchingChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MiscellaneousModeItemDetailsHostPanel.MiscellaneousModeItemDetailsHostPanel_C.ExecuteUbergraph_MiscellaneousModeItemDetailsHostPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiscellaneousModeItemDetailsHostPanel_C::ExecuteUbergraph_MiscellaneousModeItemDetailsHostPanel(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MiscellaneousModeItemDetailsHostPanel_C", "ExecuteUbergraph_MiscellaneousModeItemDetailsHostPanel");

	Params::UMiscellaneousModeItemDetailsHostPanel_C_ExecuteUbergraph_MiscellaneousModeItemDetailsHostPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


