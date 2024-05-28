#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TrapTool_ContextTrap_Athena.TrapTool_ContextTrap_Athena_C
// (Actor)

class UClass* ATrapTool_ContextTrap_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TrapTool_ContextTrap_Athena_C");

	return Clss;
}


// TrapTool_ContextTrap_Athena_C TrapTool_ContextTrap_Athena.Default__TrapTool_ContextTrap_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrapTool_ContextTrap_Athena_C* ATrapTool_ContextTrap_Athena_C::GetDefaultObj()
{
	static class ATrapTool_ContextTrap_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrapTool_ContextTrap_Athena_C*>(ATrapTool_ContextTrap_Athena_C::StaticClass()->DefaultObject);

	return Default;
}

}


