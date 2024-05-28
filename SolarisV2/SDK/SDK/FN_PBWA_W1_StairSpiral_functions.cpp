#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PBWA_W1_StairSpiral.PBWA_W1_StairSpiral_C
// (Actor)

class UClass* APBWA_W1_StairSpiral_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PBWA_W1_StairSpiral_C");

	return Clss;
}


// PBWA_W1_StairSpiral_C PBWA_W1_StairSpiral.Default__PBWA_W1_StairSpiral_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APBWA_W1_StairSpiral_C* APBWA_W1_StairSpiral_C::GetDefaultObj()
{
	static class APBWA_W1_StairSpiral_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APBWA_W1_StairSpiral_C*>(APBWA_W1_StairSpiral_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PBWA_W1_StairSpiral.PBWA_W1_StairSpiral_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APBWA_W1_StairSpiral_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PBWA_W1_StairSpiral_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


