#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StructuralBuildingsInCachedPathOfPrimaryAssignments.StructuralBuildingsInCachedPathOfPrimaryAssignments_C
// (None)

class UClass* UStructuralBuildingsInCachedPathOfPrimaryAssignments_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StructuralBuildingsInCachedPathOfPrimaryAssignments_C");

	return Clss;
}


// StructuralBuildingsInCachedPathOfPrimaryAssignments_C StructuralBuildingsInCachedPathOfPrimaryAssignments.Default__StructuralBuildingsInCachedPathOfPrimaryAssignments_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStructuralBuildingsInCachedPathOfPrimaryAssignments_C* UStructuralBuildingsInCachedPathOfPrimaryAssignments_C::GetDefaultObj()
{
	static class UStructuralBuildingsInCachedPathOfPrimaryAssignments_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStructuralBuildingsInCachedPathOfPrimaryAssignments_C*>(UStructuralBuildingsInCachedPathOfPrimaryAssignments_C::StaticClass()->DefaultObject);

	return Default;
}

}


