#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Parent_BuildingPropWall.Parent_BuildingPropWall_C
// (Actor)

class UClass* AParent_BuildingPropWall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Parent_BuildingPropWall_C");

	return Clss;
}


// Parent_BuildingPropWall_C Parent_BuildingPropWall.Default__Parent_BuildingPropWall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AParent_BuildingPropWall_C* AParent_BuildingPropWall_C::GetDefaultObj()
{
	static class AParent_BuildingPropWall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AParent_BuildingPropWall_C*>(AParent_BuildingPropWall_C::StaticClass()->DefaultObject);

	return Default;
}

}


