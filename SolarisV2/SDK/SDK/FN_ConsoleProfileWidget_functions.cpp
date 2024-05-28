#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ConsoleProfileWidget.ConsoleProfileWidget_C
// (None)

class UClass* UConsoleProfileWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConsoleProfileWidget_C");

	return Clss;
}


// ConsoleProfileWidget_C ConsoleProfileWidget.Default__ConsoleProfileWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UConsoleProfileWidget_C* UConsoleProfileWidget_C::GetDefaultObj()
{
	static class UConsoleProfileWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UConsoleProfileWidget_C*>(UConsoleProfileWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ConsoleProfileWidget.ConsoleProfileWidget_C.SetDisplayName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        DisplayName                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UConsoleProfileWidget_C::SetDisplayName(class FText DisplayName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleProfileWidget_C", "SetDisplayName");

	Params::UConsoleProfileWidget_C_SetDisplayName_Params Parms{};

	Parms.DisplayName = DisplayName;

	UObject::ProcessEvent(Func, &Parms);

}

}


