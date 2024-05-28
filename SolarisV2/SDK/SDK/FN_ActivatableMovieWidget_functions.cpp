#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ActivatableMovieWidget.ActivatableMovieWidget_C
// (None)

class UClass* UActivatableMovieWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActivatableMovieWidget_C");

	return Clss;
}


// ActivatableMovieWidget_C ActivatableMovieWidget.Default__ActivatableMovieWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UActivatableMovieWidget_C* UActivatableMovieWidget_C::GetDefaultObj()
{
	static class UActivatableMovieWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UActivatableMovieWidget_C*>(UActivatableMovieWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ActivatableMovieWidget.ActivatableMovieWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UActivatableMovieWidget_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActivatableMovieWidget_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActivatableMovieWidget.ActivatableMovieWidget_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UActivatableMovieWidget_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActivatableMovieWidget_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActivatableMovieWidget.ActivatableMovieWidget_C.ExecuteUbergraph_ActivatableMovieWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActivatableMovieWidget_C::ExecuteUbergraph_ActivatableMovieWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActivatableMovieWidget_C", "ExecuteUbergraph_ActivatableMovieWidget");

	Params::UActivatableMovieWidget_C_ExecuteUbergraph_ActivatableMovieWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


