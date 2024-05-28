#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Announce_BackpackFull.Announce_BackpackFull_C
// (Actor)

class UClass* AAnnounce_BackpackFull_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Announce_BackpackFull_C");

	return Clss;
}


// Announce_BackpackFull_C Announce_BackpackFull.Default__Announce_BackpackFull_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAnnounce_BackpackFull_C* AAnnounce_BackpackFull_C::GetDefaultObj()
{
	static class AAnnounce_BackpackFull_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAnnounce_BackpackFull_C*>(AAnnounce_BackpackFull_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Announce_BackpackFull.Announce_BackpackFull_C.OnClientAnnouncementStart
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void AAnnounce_BackpackFull_C::OnClientAnnouncementStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announce_BackpackFull_C", "OnClientAnnouncementStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Announce_BackpackFull.Announce_BackpackFull_C.ExecuteUbergraph_Announce_BackpackFull
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_BackpackFull_C::ExecuteUbergraph_Announce_BackpackFull(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announce_BackpackFull_C", "ExecuteUbergraph_Announce_BackpackFull");

	Params::AAnnounce_BackpackFull_C_ExecuteUbergraph_Announce_BackpackFull_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


