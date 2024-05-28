#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Announce_LowDurability.Announce_LowDurability_C
// (Actor)

class UClass* AAnnounce_LowDurability_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Announce_LowDurability_C");

	return Clss;
}


// Announce_LowDurability_C Announce_LowDurability.Default__Announce_LowDurability_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAnnounce_LowDurability_C* AAnnounce_LowDurability_C::GetDefaultObj()
{
	static class AAnnounce_LowDurability_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAnnounce_LowDurability_C*>(AAnnounce_LowDurability_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Announce_LowDurability.Announce_LowDurability_C.OnClientAnnouncementStart
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void AAnnounce_LowDurability_C::OnClientAnnouncementStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announce_LowDurability_C", "OnClientAnnouncementStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Announce_LowDurability.Announce_LowDurability_C.ExecuteUbergraph_Announce_LowDurability
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_LowDurability_C::ExecuteUbergraph_Announce_LowDurability(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announce_LowDurability_C", "ExecuteUbergraph_Announce_LowDurability");

	Params::AAnnounce_LowDurability_C_ExecuteUbergraph_Announce_LowDurability_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


