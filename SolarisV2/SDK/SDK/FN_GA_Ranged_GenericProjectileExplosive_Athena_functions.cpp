#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Ranged_GenericProjectileExplosive_Athena.GA_Ranged_GenericProjectileExplosive_Athena_C
// (None)

class UClass* UGA_Ranged_GenericProjectileExplosive_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Ranged_GenericProjectileExplosive_Athena_C");

	return Clss;
}


// GA_Ranged_GenericProjectileExplosive_Athena_C GA_Ranged_GenericProjectileExplosive_Athena.Default__GA_Ranged_GenericProjectileExplosive_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Ranged_GenericProjectileExplosive_Athena_C* UGA_Ranged_GenericProjectileExplosive_Athena_C::GetDefaultObj()
{
	static class UGA_Ranged_GenericProjectileExplosive_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Ranged_GenericProjectileExplosive_Athena_C*>(UGA_Ranged_GenericProjectileExplosive_Athena_C::StaticClass()->DefaultObject);

	return Default;
}

}


