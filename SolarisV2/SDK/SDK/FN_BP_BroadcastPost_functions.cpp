#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BroadcastPost.BP_BroadcastPost_C
// (Actor)

class UClass* ABP_BroadcastPost_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BroadcastPost_C");

	return Clss;
}


// BP_BroadcastPost_C BP_BroadcastPost.Default__BP_BroadcastPost_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BroadcastPost_C* ABP_BroadcastPost_C::GetDefaultObj()
{
	static class ABP_BroadcastPost_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BroadcastPost_C*>(ABP_BroadcastPost_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BroadcastPost.BP_BroadcastPost_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BroadcastPost_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BroadcastPost_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


