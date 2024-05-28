#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaLockedStyleNotification.AthenaLockedStyleNotification_C
// (None)

class UClass* UAthenaLockedStyleNotification_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaLockedStyleNotification_C");

	return Clss;
}


// AthenaLockedStyleNotification_C AthenaLockedStyleNotification.Default__AthenaLockedStyleNotification_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaLockedStyleNotification_C* UAthenaLockedStyleNotification_C::GetDefaultObj()
{
	static class UAthenaLockedStyleNotification_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaLockedStyleNotification_C*>(UAthenaLockedStyleNotification_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.OnUnlockingInfoSet
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bShowProgression                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLockedStyleNotification_C::OnUnlockingInfoSet(bool bShowProgression)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaLockedStyleNotification_C", "OnUnlockingInfoSet");

	Params::UAthenaLockedStyleNotification_C_OnUnlockingInfoSet_Params Parms{};

	Parms.bShowProgression = bShowProgression;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.RequestUpdateAnim
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaLockedStyleNotification_C::RequestUpdateAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaLockedStyleNotification_C", "RequestUpdateAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.RequestIntroAnim
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaLockedStyleNotification_C::RequestIntroAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaLockedStyleNotification_C", "RequestIntroAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.RequestOutroAnim
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaLockedStyleNotification_C::RequestOutroAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaLockedStyleNotification_C", "RequestOutroAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.OutroFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaLockedStyleNotification_C::OutroFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaLockedStyleNotification_C", "OutroFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.ExecuteUbergraph_AthenaLockedStyleNotification
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_bShowProgression                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLockedStyleNotification_C::ExecuteUbergraph_AthenaLockedStyleNotification(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_bShowProgression, bool Temp_bool_Variable, class UWidget* K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaLockedStyleNotification_C", "ExecuteUbergraph_AthenaLockedStyleNotification");

	Params::UAthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_bShowProgression = K2Node_Event_bShowProgression;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


