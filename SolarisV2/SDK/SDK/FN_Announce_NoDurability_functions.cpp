#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Announce_NoDurability.Announce_NoDurability_C
// (Actor)

class UClass* AAnnounce_NoDurability_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Announce_NoDurability_C");

	return Clss;
}


// Announce_NoDurability_C Announce_NoDurability.Default__Announce_NoDurability_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAnnounce_NoDurability_C* AAnnounce_NoDurability_C::GetDefaultObj()
{
	static class AAnnounce_NoDurability_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAnnounce_NoDurability_C*>(AAnnounce_NoDurability_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Announce_NoDurability.Announce_NoDurability_C.OnClientAnnouncementStart
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void AAnnounce_NoDurability_C::OnClientAnnouncementStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announce_NoDurability_C", "OnClientAnnouncementStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Announce_NoDurability.Announce_NoDurability_C.ExecuteUbergraph_Announce_NoDurability
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_NoDurability_C::ExecuteUbergraph_Announce_NoDurability(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announce_NoDurability_C", "ExecuteUbergraph_Announce_NoDurability");

	Params::AAnnounce_NoDurability_C_ExecuteUbergraph_Announce_NoDurability_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


