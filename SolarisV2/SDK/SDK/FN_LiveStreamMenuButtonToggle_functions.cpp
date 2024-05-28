#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LiveStreamMenuButtonToggle.LiveStreamMenuButtonToggle_C
// (None)

class UClass* ULiveStreamMenuButtonToggle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveStreamMenuButtonToggle_C");

	return Clss;
}


// LiveStreamMenuButtonToggle_C LiveStreamMenuButtonToggle.Default__LiveStreamMenuButtonToggle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULiveStreamMenuButtonToggle_C* ULiveStreamMenuButtonToggle_C::GetDefaultObj()
{
	static class ULiveStreamMenuButtonToggle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveStreamMenuButtonToggle_C*>(ULiveStreamMenuButtonToggle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LiveStreamMenuButtonToggle.LiveStreamMenuButtonToggle_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ULiveStreamMenuButtonToggle_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveStreamMenuButtonToggle_C", "OnMouseEnter");

	Params::ULiveStreamMenuButtonToggle_C_OnMouseEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LiveStreamMenuButtonToggle.LiveStreamMenuButtonToggle_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ULiveStreamMenuButtonToggle_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveStreamMenuButtonToggle_C", "OnMouseLeave");

	Params::ULiveStreamMenuButtonToggle_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LiveStreamMenuButtonToggle.LiveStreamMenuButtonToggle_C.RefreshButton
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               IsLiveStreamEnabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULiveStreamMenuButtonToggle_C::RefreshButton(bool IsLiveStreamEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveStreamMenuButtonToggle_C", "RefreshButton");

	Params::ULiveStreamMenuButtonToggle_C_RefreshButton_Params Parms{};

	Parms.IsLiveStreamEnabled = IsLiveStreamEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LiveStreamMenuButtonToggle.LiveStreamMenuButtonToggle_C.ExecuteUbergraph_LiveStreamMenuButtonToggle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent_1                                        (ConstParm)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// bool                               K2Node_Event_IsLiveStreamEnabled                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)

void ULiveStreamMenuButtonToggle_C::ExecuteUbergraph_LiveStreamMenuButtonToggle(int32 EntryPoint, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, bool K2Node_Event_IsLiveStreamEnabled, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveStreamMenuButtonToggle_C", "ExecuteUbergraph_LiveStreamMenuButtonToggle");

	Params::ULiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.K2Node_Event_IsLiveStreamEnabled = K2Node_Event_IsLiveStreamEnabled;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


