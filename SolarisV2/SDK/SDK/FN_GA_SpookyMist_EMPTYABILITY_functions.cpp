#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_SpookyMist_EMPTYABILITY.GA_SpookyMist_EMPTYABILITY_C
// (None)

class UClass* UGA_SpookyMist_EMPTYABILITY_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_SpookyMist_EMPTYABILITY_C");

	return Clss;
}


// GA_SpookyMist_EMPTYABILITY_C GA_SpookyMist_EMPTYABILITY.Default__GA_SpookyMist_EMPTYABILITY_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_SpookyMist_EMPTYABILITY_C* UGA_SpookyMist_EMPTYABILITY_C::GetDefaultObj()
{
	static class UGA_SpookyMist_EMPTYABILITY_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_SpookyMist_EMPTYABILITY_C*>(UGA_SpookyMist_EMPTYABILITY_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_SpookyMist_EMPTYABILITY.GA_SpookyMist_EMPTYABILITY_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_SpookyMist_EMPTYABILITY_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SpookyMist_EMPTYABILITY_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_SpookyMist_EMPTYABILITY.GA_SpookyMist_EMPTYABILITY_C.ExecuteUbergraph_GA_SpookyMist_EMPTYABILITY
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SpookyMist_EMPTYABILITY_C::ExecuteUbergraph_GA_SpookyMist_EMPTYABILITY(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SpookyMist_EMPTYABILITY_C", "ExecuteUbergraph_GA_SpookyMist_EMPTYABILITY");

	Params::UGA_SpookyMist_EMPTYABILITY_C_ExecuteUbergraph_GA_SpookyMist_EMPTYABILITY_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


