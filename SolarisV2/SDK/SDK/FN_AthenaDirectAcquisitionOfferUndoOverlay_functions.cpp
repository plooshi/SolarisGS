#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaDirectAcquisitionOfferUndoOverlay.AthenaDirectAcquisitionOfferUndoOverlay_C
// (None)

class UClass* UAthenaDirectAcquisitionOfferUndoOverlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaDirectAcquisitionOfferUndoOverlay_C");

	return Clss;
}


// AthenaDirectAcquisitionOfferUndoOverlay_C AthenaDirectAcquisitionOfferUndoOverlay.Default__AthenaDirectAcquisitionOfferUndoOverlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaDirectAcquisitionOfferUndoOverlay_C* UAthenaDirectAcquisitionOfferUndoOverlay_C::GetDefaultObj()
{
	static class UAthenaDirectAcquisitionOfferUndoOverlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaDirectAcquisitionOfferUndoOverlay_C*>(UAthenaDirectAcquisitionOfferUndoOverlay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaDirectAcquisitionOfferUndoOverlay.AthenaDirectAcquisitionOfferUndoOverlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOfferUndoOverlay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferUndoOverlay_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaDirectAcquisitionOfferUndoOverlay.AthenaDirectAcquisitionOfferUndoOverlay_C.WidgetAnimationEvt_Refunded_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOfferUndoOverlay_C::WidgetAnimationEvt_Refunded_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferUndoOverlay_C", "WidgetAnimationEvt_Refunded_K2Node_WidgetAnimationEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaDirectAcquisitionOfferUndoOverlay.AthenaDirectAcquisitionOfferUndoOverlay_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOfferUndoOverlay_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferUndoOverlay_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaDirectAcquisitionOfferUndoOverlay.AthenaDirectAcquisitionOfferUndoOverlay_C.ExecuteUbergraph_AthenaDirectAcquisitionOfferUndoOverlay
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitionOfferUndoOverlay_C::ExecuteUbergraph_AthenaDirectAcquisitionOfferUndoOverlay(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferUndoOverlay_C", "ExecuteUbergraph_AthenaDirectAcquisitionOfferUndoOverlay");

	Params::UAthenaDirectAcquisitionOfferUndoOverlay_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferUndoOverlay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


