#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Parent_BuildingWall.Parent_BuildingWall_C
// (Actor)

class UClass* AParent_BuildingWall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Parent_BuildingWall_C");

	return Clss;
}


// Parent_BuildingWall_C Parent_BuildingWall.Default__Parent_BuildingWall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AParent_BuildingWall_C* AParent_BuildingWall_C::GetDefaultObj()
{
	static class AParent_BuildingWall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AParent_BuildingWall_C*>(AParent_BuildingWall_C::StaticClass()->DefaultObject);

	return Default;
}

}


