#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaNewsTile_Spotlight.AthenaNewsTile_Spotlight_C
// (None)

class UClass* UAthenaNewsTile_Spotlight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaNewsTile_Spotlight_C");

	return Clss;
}


// AthenaNewsTile_Spotlight_C AthenaNewsTile_Spotlight.Default__AthenaNewsTile_Spotlight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaNewsTile_Spotlight_C* UAthenaNewsTile_Spotlight_C::GetDefaultObj()
{
	static class UAthenaNewsTile_Spotlight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaNewsTile_Spotlight_C*>(UAthenaNewsTile_Spotlight_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaNewsTile_Spotlight.AthenaNewsTile_Spotlight_C.PlayIntroAnim
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaNewsTile_Spotlight_C::PlayIntroAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaNewsTile_Spotlight_C", "PlayIntroAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaNewsTile_Spotlight.AthenaNewsTile_Spotlight_C.SetDefaultImage
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaNewsTile_Spotlight_C::SetDefaultImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaNewsTile_Spotlight_C", "SetDefaultImage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaNewsTile_Spotlight.AthenaNewsTile_Spotlight_C.ExecuteUbergraph_AthenaNewsTile_Spotlight
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaNewsTile_Spotlight_C::ExecuteUbergraph_AthenaNewsTile_Spotlight(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaNewsTile_Spotlight_C", "ExecuteUbergraph_AthenaNewsTile_Spotlight");

	Params::UAthenaNewsTile_Spotlight_C_ExecuteUbergraph_AthenaNewsTile_Spotlight_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


