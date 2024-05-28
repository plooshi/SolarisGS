#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_FortGlobalAbilityTargetingActor.B_FortGlobalAbilityTargetingActor_C
// (Actor)

class UClass* AB_FortGlobalAbilityTargetingActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_FortGlobalAbilityTargetingActor_C");

	return Clss;
}


// B_FortGlobalAbilityTargetingActor_C B_FortGlobalAbilityTargetingActor.Default__B_FortGlobalAbilityTargetingActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_FortGlobalAbilityTargetingActor_C* AB_FortGlobalAbilityTargetingActor_C::GetDefaultObj()
{
	static class AB_FortGlobalAbilityTargetingActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_FortGlobalAbilityTargetingActor_C*>(AB_FortGlobalAbilityTargetingActor_C::StaticClass()->DefaultObject);

	return Default;
}

}


