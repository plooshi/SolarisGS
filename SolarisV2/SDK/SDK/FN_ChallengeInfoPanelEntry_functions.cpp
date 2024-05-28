#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ChallengeInfoPanelEntry.ChallengeInfoPanelEntry_C
// (None)

class UClass* UChallengeInfoPanelEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChallengeInfoPanelEntry_C");

	return Clss;
}


// ChallengeInfoPanelEntry_C ChallengeInfoPanelEntry.Default__ChallengeInfoPanelEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallengeInfoPanelEntry_C* UChallengeInfoPanelEntry_C::GetDefaultObj()
{
	static class UChallengeInfoPanelEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallengeInfoPanelEntry_C*>(UChallengeInfoPanelEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ChallengeInfoPanelEntry.ChallengeInfoPanelEntry_C.OnChallengeInfoSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UChallengeInfoPanelEntry_C::OnChallengeInfoSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeInfoPanelEntry_C", "OnChallengeInfoSet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChallengeInfoPanelEntry.ChallengeInfoPanelEntry_C.OnLocalPlayerMissingAssistedChallenge
// (Event, Protected, BlueprintEvent)
// Parameters:

void UChallengeInfoPanelEntry_C::OnLocalPlayerMissingAssistedChallenge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeInfoPanelEntry_C", "OnLocalPlayerMissingAssistedChallenge");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChallengeInfoPanelEntry.ChallengeInfoPanelEntry_C.ExecuteUbergraph_ChallengeInfoPanelEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallengeInfoPanelEntry_C::ExecuteUbergraph_ChallengeInfoPanelEntry(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeInfoPanelEntry_C", "ExecuteUbergraph_ChallengeInfoPanelEntry");

	Params::UChallengeInfoPanelEntry_C_ExecuteUbergraph_ChallengeInfoPanelEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


