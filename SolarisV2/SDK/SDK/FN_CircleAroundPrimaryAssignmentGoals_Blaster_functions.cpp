#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CircleAroundPrimaryAssignmentGoals_Blaster.CircleAroundPrimaryAssignmentGoals_Blaster_C
// (None)

class UClass* UCircleAroundPrimaryAssignmentGoals_Blaster_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CircleAroundPrimaryAssignmentGoals_Blaster_C");

	return Clss;
}


// CircleAroundPrimaryAssignmentGoals_Blaster_C CircleAroundPrimaryAssignmentGoals_Blaster.Default__CircleAroundPrimaryAssignmentGoals_Blaster_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCircleAroundPrimaryAssignmentGoals_Blaster_C* UCircleAroundPrimaryAssignmentGoals_Blaster_C::GetDefaultObj()
{
	static class UCircleAroundPrimaryAssignmentGoals_Blaster_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCircleAroundPrimaryAssignmentGoals_Blaster_C*>(UCircleAroundPrimaryAssignmentGoals_Blaster_C::StaticClass()->DefaultObject);

	return Default;
}

}


