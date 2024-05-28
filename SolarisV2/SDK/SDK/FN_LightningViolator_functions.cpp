#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LightningViolator.LightningViolator_C
// (None)

class UClass* ULightningViolator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightningViolator_C");

	return Clss;
}


// LightningViolator_C LightningViolator.Default__LightningViolator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightningViolator_C* ULightningViolator_C::GetDefaultObj()
{
	static class ULightningViolator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightningViolator_C*>(ULightningViolator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightningViolator.LightningViolator_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULightningViolator_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightningViolator_C", "PreConstruct");

	Params::ULightningViolator_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightningViolator.LightningViolator_C.EventColorBG
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                NewColor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightningViolator_C::EventColorBG(const struct FLinearColor& NewColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightningViolator_C", "EventColorBG");

	Params::ULightningViolator_C_EventColorBG_Params Parms{};

	Parms.NewColor = NewColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightningViolator.LightningViolator_C.EventSetText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NewText                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ULightningViolator_C::EventSetText(class FText NewText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightningViolator_C", "EventSetText");

	Params::ULightningViolator_C_EventSetText_Params Parms{};

	Parms.NewText = NewText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightningViolator.LightningViolator_C.ExecuteUbergraph_LightningViolator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_CustomEvent_NewColor                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_NewText                                       (None)

void ULightningViolator_C::ExecuteUbergraph_LightningViolator(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FLinearColor& K2Node_CustomEvent_NewColor, class FText K2Node_CustomEvent_NewText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightningViolator_C", "ExecuteUbergraph_LightningViolator");

	Params::ULightningViolator_C_ExecuteUbergraph_LightningViolator_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_NewColor = K2Node_CustomEvent_NewColor;
	Parms.K2Node_CustomEvent_NewText = K2Node_CustomEvent_NewText;

	UObject::ProcessEvent(Func, &Parms);

}

}


