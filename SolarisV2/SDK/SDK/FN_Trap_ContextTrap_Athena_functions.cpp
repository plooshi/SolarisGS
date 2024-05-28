#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trap_ContextTrap_Athena.Trap_ContextTrap_Athena_C
// (Actor)

class UClass* ATrap_ContextTrap_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trap_ContextTrap_Athena_C");

	return Clss;
}


// Trap_ContextTrap_Athena_C Trap_ContextTrap_Athena.Default__Trap_ContextTrap_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrap_ContextTrap_Athena_C* ATrap_ContextTrap_Athena_C::GetDefaultObj()
{
	static class ATrap_ContextTrap_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrap_ContextTrap_Athena_C*>(ATrap_ContextTrap_Athena_C::StaticClass()->DefaultObject);

	return Default;
}

}


