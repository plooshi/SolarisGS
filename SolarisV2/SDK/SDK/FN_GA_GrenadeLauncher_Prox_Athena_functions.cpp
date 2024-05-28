#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_GrenadeLauncher_Prox_Athena.GA_GrenadeLauncher_Prox_Athena_C
// (None)

class UClass* UGA_GrenadeLauncher_Prox_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_GrenadeLauncher_Prox_Athena_C");

	return Clss;
}


// GA_GrenadeLauncher_Prox_Athena_C GA_GrenadeLauncher_Prox_Athena.Default__GA_GrenadeLauncher_Prox_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_GrenadeLauncher_Prox_Athena_C* UGA_GrenadeLauncher_Prox_Athena_C::GetDefaultObj()
{
	static class UGA_GrenadeLauncher_Prox_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_GrenadeLauncher_Prox_Athena_C*>(UGA_GrenadeLauncher_Prox_Athena_C::StaticClass()->DefaultObject);

	return Default;
}

}


