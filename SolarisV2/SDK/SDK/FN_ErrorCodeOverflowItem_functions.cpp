#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ErrorCodeOverflowItem.ErrorCodeOverflowItem_C
// (None)

class UClass* UErrorCodeOverflowItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ErrorCodeOverflowItem_C");

	return Clss;
}


// ErrorCodeOverflowItem_C ErrorCodeOverflowItem.Default__ErrorCodeOverflowItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UErrorCodeOverflowItem_C* UErrorCodeOverflowItem_C::GetDefaultObj()
{
	static class UErrorCodeOverflowItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UErrorCodeOverflowItem_C*>(UErrorCodeOverflowItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ErrorCodeOverflowItem.ErrorCodeOverflowItem_C.SetErrorCodeDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ErrorCode                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UErrorCodeOverflowItem_C::SetErrorCodeDisplay(const class FString& ErrorCode, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ErrorCodeOverflowItem_C", "SetErrorCodeDisplay");

	Params::UErrorCodeOverflowItem_C_SetErrorCodeDisplay_Params Parms{};

	Parms.ErrorCode = ErrorCode;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


