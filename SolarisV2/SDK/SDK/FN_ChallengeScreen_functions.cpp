#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ChallengeScreen.ChallengeScreen_C
// (None)

class UClass* UChallengeScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChallengeScreen_C");

	return Clss;
}


// ChallengeScreen_C ChallengeScreen.Default__ChallengeScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallengeScreen_C* UChallengeScreen_C::GetDefaultObj()
{
	static class UChallengeScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallengeScreen_C*>(UChallengeScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ChallengeScreen.ChallengeScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UChallengeScreen_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeScreen_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChallengeScreen.ChallengeScreen_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UChallengeScreen_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeScreen_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChallengeScreen.ChallengeScreen_C.ExecuteUbergraph_ChallengeScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPartyAssistedChallengeSet_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeScreen_C::ExecuteUbergraph_ChallengeScreen(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_IsPartyAssistedChallengeSet_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeScreen_C", "ExecuteUbergraph_ChallengeScreen");

	Params::UChallengeScreen_C_ExecuteUbergraph_ChallengeScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_IsPartyAssistedChallengeSet_ReturnValue = CallFunc_IsPartyAssistedChallengeSet_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


