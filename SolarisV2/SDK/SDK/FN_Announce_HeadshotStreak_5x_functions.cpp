#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Announce_HeadshotStreak_5x.Announce_HeadshotStreak_5x_C
// (Actor)

class UClass* AAnnounce_HeadshotStreak_5x_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Announce_HeadshotStreak_5x_C");

	return Clss;
}


// Announce_HeadshotStreak_5x_C Announce_HeadshotStreak_5x.Default__Announce_HeadshotStreak_5x_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAnnounce_HeadshotStreak_5x_C* AAnnounce_HeadshotStreak_5x_C::GetDefaultObj()
{
	static class AAnnounce_HeadshotStreak_5x_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAnnounce_HeadshotStreak_5x_C*>(AAnnounce_HeadshotStreak_5x_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Announce_HeadshotStreak_5x.Announce_HeadshotStreak_5x_C.OnClientAnnouncementStart
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void AAnnounce_HeadshotStreak_5x_C::OnClientAnnouncementStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announce_HeadshotStreak_5x_C", "OnClientAnnouncementStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Announce_HeadshotStreak_5x.Announce_HeadshotStreak_5x_C.ExecuteUbergraph_Announce_HeadshotStreak_5x
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_HeadshotStreak_5x_C::ExecuteUbergraph_Announce_HeadshotStreak_5x(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announce_HeadshotStreak_5x_C", "ExecuteUbergraph_Announce_HeadshotStreak_5x");

	Params::AAnnounce_HeadshotStreak_5x_C_ExecuteUbergraph_Announce_HeadshotStreak_5x_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


