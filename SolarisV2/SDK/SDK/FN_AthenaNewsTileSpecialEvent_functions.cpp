#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaNewsTileSpecialEvent.AthenaNewsTileSpecialEvent_C
// (None)

class UClass* UAthenaNewsTileSpecialEvent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaNewsTileSpecialEvent_C");

	return Clss;
}


// AthenaNewsTileSpecialEvent_C AthenaNewsTileSpecialEvent.Default__AthenaNewsTileSpecialEvent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaNewsTileSpecialEvent_C* UAthenaNewsTileSpecialEvent_C::GetDefaultObj()
{
	static class UAthenaNewsTileSpecialEvent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaNewsTileSpecialEvent_C*>(UAthenaNewsTileSpecialEvent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaNewsTileSpecialEvent.AthenaNewsTileSpecialEvent_C.PlayIntroAnim
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaNewsTileSpecialEvent_C::PlayIntroAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaNewsTileSpecialEvent_C", "PlayIntroAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaNewsTileSpecialEvent.AthenaNewsTileSpecialEvent_C.SetDefaultImage
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaNewsTileSpecialEvent_C::SetDefaultImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaNewsTileSpecialEvent_C", "SetDefaultImage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaNewsTileSpecialEvent.AthenaNewsTileSpecialEvent_C.ExecuteUbergraph_AthenaNewsTileSpecialEvent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaNewsTileSpecialEvent_C::ExecuteUbergraph_AthenaNewsTileSpecialEvent(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaNewsTileSpecialEvent_C", "ExecuteUbergraph_AthenaNewsTileSpecialEvent");

	Params::UAthenaNewsTileSpecialEvent_C_ExecuteUbergraph_AthenaNewsTileSpecialEvent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


