#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass EmergencyNoticeWidget.EmergencyNoticeWidget_C
// (None)

class UClass* UEmergencyNoticeWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmergencyNoticeWidget_C");

	return Clss;
}


// EmergencyNoticeWidget_C EmergencyNoticeWidget.Default__EmergencyNoticeWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEmergencyNoticeWidget_C* UEmergencyNoticeWidget_C::GetDefaultObj()
{
	static class UEmergencyNoticeWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmergencyNoticeWidget_C*>(UEmergencyNoticeWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EmergencyNoticeWidget.EmergencyNoticeWidget_C.Show Notice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEmergencyNoticeWidget_C::Show_Notice(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EmergencyNoticeWidget_C", "Show Notice");

	Params::UEmergencyNoticeWidget_C_Show_Notice_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EmergencyNoticeWidget.EmergencyNoticeWidget_C.ShowNotice
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        Body                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEmergencyNoticeWidget_C::ShowNotice(class FText& Title, class FText& Body)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EmergencyNoticeWidget_C", "ShowNotice");

	Params::UEmergencyNoticeWidget_C_ShowNotice_Params Parms{};

	Parms.Title = Title;
	Parms.Body = Body;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EmergencyNoticeWidget.EmergencyNoticeWidget_C.HideNotice
// (Event, Protected, BlueprintEvent)
// Parameters:

void UEmergencyNoticeWidget_C::HideNotice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EmergencyNoticeWidget_C", "HideNotice");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EmergencyNoticeWidget.EmergencyNoticeWidget_C.ExecuteUbergraph_EmergencyNoticeWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Title                                               (ConstParm)
// class FText                        K2Node_Event_Body                                                (ConstParm)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

void UEmergencyNoticeWidget_C::ExecuteUbergraph_EmergencyNoticeWidget(int32 EntryPoint, class FText K2Node_Event_Title, class FText K2Node_Event_Body, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EmergencyNoticeWidget_C", "ExecuteUbergraph_EmergencyNoticeWidget");

	Params::UEmergencyNoticeWidget_C_ExecuteUbergraph_EmergencyNoticeWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Title = K2Node_Event_Title;
	Parms.K2Node_Event_Body = K2Node_Event_Body;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


