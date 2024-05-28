#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StructuralBuildingsAroundPrimaryAssignments.StructuralBuildingsAroundPrimaryAssignments_C
// (None)

class UClass* UStructuralBuildingsAroundPrimaryAssignments_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StructuralBuildingsAroundPrimaryAssignments_C");

	return Clss;
}


// StructuralBuildingsAroundPrimaryAssignments_C StructuralBuildingsAroundPrimaryAssignments.Default__StructuralBuildingsAroundPrimaryAssignments_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStructuralBuildingsAroundPrimaryAssignments_C* UStructuralBuildingsAroundPrimaryAssignments_C::GetDefaultObj()
{
	static class UStructuralBuildingsAroundPrimaryAssignments_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStructuralBuildingsAroundPrimaryAssignments_C*>(UStructuralBuildingsAroundPrimaryAssignments_C::StaticClass()->DefaultObject);

	return Default;
}

}


