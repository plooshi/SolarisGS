#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CircleAroundPrimaryAssignmentGoals_MiniBoss.CircleAroundPrimaryAssignmentGoals_MiniBoss_C
// (None)

class UClass* UCircleAroundPrimaryAssignmentGoals_MiniBoss_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CircleAroundPrimaryAssignmentGoals_MiniBoss_C");

	return Clss;
}


// CircleAroundPrimaryAssignmentGoals_MiniBoss_C CircleAroundPrimaryAssignmentGoals_MiniBoss.Default__CircleAroundPrimaryAssignmentGoals_MiniBoss_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCircleAroundPrimaryAssignmentGoals_MiniBoss_C* UCircleAroundPrimaryAssignmentGoals_MiniBoss_C::GetDefaultObj()
{
	static class UCircleAroundPrimaryAssignmentGoals_MiniBoss_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCircleAroundPrimaryAssignmentGoals_MiniBoss_C*>(UCircleAroundPrimaryAssignmentGoals_MiniBoss_C::StaticClass()->DefaultObject);

	return Default;
}

}


