#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DefaultBuildingTool.DefaultBuildingTool_C
// (Actor)

class UClass* ADefaultBuildingTool_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultBuildingTool_C");

	return Clss;
}


// DefaultBuildingTool_C DefaultBuildingTool.Default__DefaultBuildingTool_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADefaultBuildingTool_C* ADefaultBuildingTool_C::GetDefaultObj()
{
	static class ADefaultBuildingTool_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADefaultBuildingTool_C*>(ADefaultBuildingTool_C::StaticClass()->DefaultObject);

	return Default;
}

}


