#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CircleAroundPrimaryAssignmentGoals_Flinger.CircleAroundPrimaryAssignmentGoals_Flinger_C
// (None)

class UClass* UCircleAroundPrimaryAssignmentGoals_Flinger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CircleAroundPrimaryAssignmentGoals_Flinger_C");

	return Clss;
}


// CircleAroundPrimaryAssignmentGoals_Flinger_C CircleAroundPrimaryAssignmentGoals_Flinger.Default__CircleAroundPrimaryAssignmentGoals_Flinger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCircleAroundPrimaryAssignmentGoals_Flinger_C* UCircleAroundPrimaryAssignmentGoals_Flinger_C::GetDefaultObj()
{
	static class UCircleAroundPrimaryAssignmentGoals_Flinger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCircleAroundPrimaryAssignmentGoals_Flinger_C*>(UCircleAroundPrimaryAssignmentGoals_Flinger_C::StaticClass()->DefaultObject);

	return Default;
}

}


