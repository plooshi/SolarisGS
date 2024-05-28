#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIGoalManager.AIGoalManager_C
// (Actor)

class UClass* AAIGoalManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIGoalManager_C");

	return Clss;
}


// AIGoalManager_C AIGoalManager.Default__AIGoalManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAIGoalManager_C* AAIGoalManager_C::GetDefaultObj()
{
	static class AAIGoalManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAIGoalManager_C*>(AAIGoalManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


