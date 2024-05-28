#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SpecialEventAthenaNewsTile_Spotlight.SpecialEventAthenaNewsTile_Spotlight_C
// (None)

class UClass* USpecialEventAthenaNewsTile_Spotlight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpecialEventAthenaNewsTile_Spotlight_C");

	return Clss;
}


// SpecialEventAthenaNewsTile_Spotlight_C SpecialEventAthenaNewsTile_Spotlight.Default__SpecialEventAthenaNewsTile_Spotlight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpecialEventAthenaNewsTile_Spotlight_C* USpecialEventAthenaNewsTile_Spotlight_C::GetDefaultObj()
{
	static class USpecialEventAthenaNewsTile_Spotlight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpecialEventAthenaNewsTile_Spotlight_C*>(USpecialEventAthenaNewsTile_Spotlight_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventAthenaNewsTile_Spotlight.SpecialEventAthenaNewsTile_Spotlight_C.PlayIntroAnim
// (Event, Public, BlueprintEvent)
// Parameters:

void USpecialEventAthenaNewsTile_Spotlight_C::PlayIntroAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventAthenaNewsTile_Spotlight_C", "PlayIntroAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpecialEventAthenaNewsTile_Spotlight.SpecialEventAthenaNewsTile_Spotlight_C.SetDefaultImage
// (Event, Public, BlueprintEvent)
// Parameters:

void USpecialEventAthenaNewsTile_Spotlight_C::SetDefaultImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventAthenaNewsTile_Spotlight_C", "SetDefaultImage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpecialEventAthenaNewsTile_Spotlight.SpecialEventAthenaNewsTile_Spotlight_C.ExecuteUbergraph_SpecialEventAthenaNewsTile_Spotlight
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpecialEventAthenaNewsTile_Spotlight_C::ExecuteUbergraph_SpecialEventAthenaNewsTile_Spotlight(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventAthenaNewsTile_Spotlight_C", "ExecuteUbergraph_SpecialEventAthenaNewsTile_Spotlight");

	Params::USpecialEventAthenaNewsTile_Spotlight_C_ExecuteUbergraph_SpecialEventAthenaNewsTile_Spotlight_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


