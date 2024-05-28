#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CombatManager.CombatManager_C
// (Actor)

class UClass* ACombatManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CombatManager_C");

	return Clss;
}


// CombatManager_C CombatManager.Default__CombatManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACombatManager_C* ACombatManager_C::GetDefaultObj()
{
	static class ACombatManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACombatManager_C*>(ACombatManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


