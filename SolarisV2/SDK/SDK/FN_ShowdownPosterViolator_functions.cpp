#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ShowdownPosterViolator.ShowdownPosterViolator_C
// (None)

class UClass* UShowdownPosterViolator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShowdownPosterViolator_C");

	return Clss;
}


// ShowdownPosterViolator_C ShowdownPosterViolator.Default__ShowdownPosterViolator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShowdownPosterViolator_C* UShowdownPosterViolator_C::GetDefaultObj()
{
	static class UShowdownPosterViolator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShowdownPosterViolator_C*>(UShowdownPosterViolator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShowdownPosterViolator.ShowdownPosterViolator_C.OnViolatorStateRefreshed
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEventTimeState         NewTimeState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShowdownPosterViolator_C::OnViolatorStateRefreshed(enum class EEventTimeState NewTimeState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownPosterViolator_C", "OnViolatorStateRefreshed");

	Params::UShowdownPosterViolator_C_OnViolatorStateRefreshed_Params Parms{};

	Parms.NewTimeState = NewTimeState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownPosterViolator.ShowdownPosterViolator_C.ExecuteUbergraph_ShowdownPosterViolator
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventTimeState         K2Node_Event_NewTimeState                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventTimeState         Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonBorder*               K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShowdownPosterViolator_C::ExecuteUbergraph_ShowdownPosterViolator(int32 EntryPoint, enum class EEventTimeState K2Node_Event_NewTimeState, enum class EEventTimeState Temp_byte_Variable, class UCommonBorder* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownPosterViolator_C", "ExecuteUbergraph_ShowdownPosterViolator");

	Params::UShowdownPosterViolator_C_ExecuteUbergraph_ShowdownPosterViolator_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NewTimeState = K2Node_Event_NewTimeState;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


