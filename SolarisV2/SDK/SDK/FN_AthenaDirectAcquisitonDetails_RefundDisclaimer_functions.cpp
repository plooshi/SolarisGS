#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaDirectAcquisitonDetails_RefundDisclaimer.AthenaDirectAcquisitonDetails_RefundDisclaimer_C
// (None)

class UClass* UAthenaDirectAcquisitonDetails_RefundDisclaimer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaDirectAcquisitonDetails_RefundDisclaimer_C");

	return Clss;
}


// AthenaDirectAcquisitonDetails_RefundDisclaimer_C AthenaDirectAcquisitonDetails_RefundDisclaimer.Default__AthenaDirectAcquisitonDetails_RefundDisclaimer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaDirectAcquisitonDetails_RefundDisclaimer_C* UAthenaDirectAcquisitonDetails_RefundDisclaimer_C::GetDefaultObj()
{
	static class UAthenaDirectAcquisitonDetails_RefundDisclaimer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaDirectAcquisitonDetails_RefundDisclaimer_C*>(UAthenaDirectAcquisitonDetails_RefundDisclaimer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaDirectAcquisitonDetails_RefundDisclaimer.AthenaDirectAcquisitonDetails_RefundDisclaimer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaDirectAcquisitonDetails_RefundDisclaimer_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaDirectAcquisitonDetails_RefundDisclaimer_C", "PreConstruct");

	Params::UAthenaDirectAcquisitonDetails_RefundDisclaimer_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitonDetails_RefundDisclaimer.AthenaDirectAcquisitonDetails_RefundDisclaimer_C.ExecuteUbergraph_AthenaDirectAcquisitonDetails_RefundDisclaimer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaDirectAcquisitonDetails_RefundDisclaimer_C::ExecuteUbergraph_AthenaDirectAcquisitonDetails_RefundDisclaimer(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaDirectAcquisitonDetails_RefundDisclaimer_C", "ExecuteUbergraph_AthenaDirectAcquisitonDetails_RefundDisclaimer");

	Params::UAthenaDirectAcquisitonDetails_RefundDisclaimer_C_ExecuteUbergraph_AthenaDirectAcquisitonDetails_RefundDisclaimer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


