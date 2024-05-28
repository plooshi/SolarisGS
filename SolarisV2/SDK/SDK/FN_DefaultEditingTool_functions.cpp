#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DefaultEditingTool.DefaultEditingTool_C
// (Actor)

class UClass* ADefaultEditingTool_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultEditingTool_C");

	return Clss;
}


// DefaultEditingTool_C DefaultEditingTool.Default__DefaultEditingTool_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADefaultEditingTool_C* ADefaultEditingTool_C::GetDefaultObj()
{
	static class ADefaultEditingTool_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADefaultEditingTool_C*>(ADefaultEditingTool_C::StaticClass()->DefaultObject);

	return Default;
}

}


