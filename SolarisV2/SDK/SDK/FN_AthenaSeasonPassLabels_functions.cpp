#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaSeasonPassLabels.AthenaSeasonPassLabels_C
// (None)

class UClass* UAthenaSeasonPassLabels_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaSeasonPassLabels_C");

	return Clss;
}


// AthenaSeasonPassLabels_C AthenaSeasonPassLabels.Default__AthenaSeasonPassLabels_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaSeasonPassLabels_C* UAthenaSeasonPassLabels_C::GetDefaultObj()
{
	static class UAthenaSeasonPassLabels_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaSeasonPassLabels_C*>(UAthenaSeasonPassLabels_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaSeasonPassLabels.AthenaSeasonPassLabels_C.HideTierLabels
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonPassLabels_C::HideTierLabels(class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSeasonPassLabels_C", "HideTierLabels");

	Params::UAthenaSeasonPassLabels_C_HideTierLabels_Params Parms{};

	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonPassLabels.AthenaSeasonPassLabels_C.ShowTierLabels
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonPassLabels_C::ShowTierLabels(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSeasonPassLabels_C", "ShowTierLabels");

	Params::UAthenaSeasonPassLabels_C_ShowTierLabels_Params Parms{};

	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


