#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaMainStatTile.AthenaMainStatTile_C
// (None)

class UClass* UAthenaMainStatTile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaMainStatTile_C");

	return Clss;
}


// AthenaMainStatTile_C AthenaMainStatTile.Default__AthenaMainStatTile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaMainStatTile_C* UAthenaMainStatTile_C::GetDefaultObj()
{
	static class UAthenaMainStatTile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaMainStatTile_C*>(UAthenaMainStatTile_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaMainStatTile.AthenaMainStatTile_C.SetStatValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        StatValueAsText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

void UAthenaMainStatTile_C::SetStatValue(class FText StatValueAsText, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMainStatTile_C", "SetStatValue");

	Params::UAthenaMainStatTile_C_SetStatValue_Params Parms{};

	Parms.StatValueAsText = StatValueAsText;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


