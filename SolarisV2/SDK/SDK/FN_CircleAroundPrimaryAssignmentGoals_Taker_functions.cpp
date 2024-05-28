#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CircleAroundPrimaryAssignmentGoals_Taker.CircleAroundPrimaryAssignmentGoals_Taker_C
// (None)

class UClass* UCircleAroundPrimaryAssignmentGoals_Taker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CircleAroundPrimaryAssignmentGoals_Taker_C");

	return Clss;
}


// CircleAroundPrimaryAssignmentGoals_Taker_C CircleAroundPrimaryAssignmentGoals_Taker.Default__CircleAroundPrimaryAssignmentGoals_Taker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCircleAroundPrimaryAssignmentGoals_Taker_C* UCircleAroundPrimaryAssignmentGoals_Taker_C::GetDefaultObj()
{
	static class UCircleAroundPrimaryAssignmentGoals_Taker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCircleAroundPrimaryAssignmentGoals_Taker_C*>(UCircleAroundPrimaryAssignmentGoals_Taker_C::StaticClass()->DefaultObject);

	return Default;
}

}


