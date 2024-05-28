#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CircleAroundPrimaryAssignmentGoals_Bombshell_Poison.CircleAroundPrimaryAssignmentGoals_Bombshell_Poison_C
// (None)

class UClass* UCircleAroundPrimaryAssignmentGoals_Bombshell_Poison_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CircleAroundPrimaryAssignmentGoals_Bombshell_Poison_C");

	return Clss;
}


// CircleAroundPrimaryAssignmentGoals_Bombshell_Poison_C CircleAroundPrimaryAssignmentGoals_Bombshell_Poison.Default__CircleAroundPrimaryAssignmentGoals_Bombshell_Poison_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCircleAroundPrimaryAssignmentGoals_Bombshell_Poison_C* UCircleAroundPrimaryAssignmentGoals_Bombshell_Poison_C::GetDefaultObj()
{
	static class UCircleAroundPrimaryAssignmentGoals_Bombshell_Poison_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCircleAroundPrimaryAssignmentGoals_Bombshell_Poison_C*>(UCircleAroundPrimaryAssignmentGoals_Bombshell_Poison_C::StaticClass()->DefaultObject);

	return Default;
}

}


