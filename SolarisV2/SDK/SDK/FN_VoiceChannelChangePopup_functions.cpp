#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass VoiceChannelChangePopup.VoiceChannelChangePopup_C
// (None)

class UClass* UVoiceChannelChangePopup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoiceChannelChangePopup_C");

	return Clss;
}


// VoiceChannelChangePopup_C VoiceChannelChangePopup.Default__VoiceChannelChangePopup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVoiceChannelChangePopup_C* UVoiceChannelChangePopup_C::GetDefaultObj()
{
	static class UVoiceChannelChangePopup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoiceChannelChangePopup_C*>(UVoiceChannelChangePopup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UVoiceChannelChangePopup_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoiceChannelChangePopup_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVoiceChannelChangePopup_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoiceChannelChangePopup_C", "PreConstruct");

	Params::UVoiceChannelChangePopup_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.Popup Animation Finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UVoiceChannelChangePopup_C::Popup_Animation_Finished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoiceChannelChangePopup_C", "Popup Animation Finished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.OnPlayOpenAnimation
// (Event, Protected, BlueprintEvent)
// Parameters:

void UVoiceChannelChangePopup_C::OnPlayOpenAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoiceChannelChangePopup_C", "OnPlayOpenAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.OnPlayCloseAnimation
// (Event, Protected, BlueprintEvent)
// Parameters:

void UVoiceChannelChangePopup_C::OnPlayCloseAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoiceChannelChangePopup_C", "OnPlayCloseAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.ExecuteUbergraph_VoiceChannelChangePopup
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UVoiceChannelChangePopup_C::ExecuteUbergraph_VoiceChannelChangePopup(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoiceChannelChangePopup_C", "ExecuteUbergraph_VoiceChannelChangePopup");

	Params::UVoiceChannelChangePopup_C_ExecuteUbergraph_VoiceChannelChangePopup_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


