#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaNewsTile.AthenaNewsTile_C
// (None)

class UClass* UAthenaNewsTile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaNewsTile_C");

	return Clss;
}


// AthenaNewsTile_C AthenaNewsTile.Default__AthenaNewsTile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaNewsTile_C* UAthenaNewsTile_C::GetDefaultObj()
{
	static class UAthenaNewsTile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaNewsTile_C*>(UAthenaNewsTile_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaNewsTile.AthenaNewsTile_C.PlayIntroAnim
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaNewsTile_C::PlayIntroAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaNewsTile_C", "PlayIntroAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaNewsTile.AthenaNewsTile_C.SetDefaultImage
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaNewsTile_C::SetDefaultImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaNewsTile_C", "SetDefaultImage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaNewsTile.AthenaNewsTile_C.ExecuteUbergraph_AthenaNewsTile
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaNewsTile_C::ExecuteUbergraph_AthenaNewsTile(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaNewsTile_C", "ExecuteUbergraph_AthenaNewsTile");

	Params::UAthenaNewsTile_C_ExecuteUbergraph_AthenaNewsTile_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


