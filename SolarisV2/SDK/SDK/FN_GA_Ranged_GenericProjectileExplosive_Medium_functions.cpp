#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Ranged_GenericProjectileExplosive_Medium.GA_Ranged_GenericProjectileExplosive_Medium_C
// (None)

class UClass* UGA_Ranged_GenericProjectileExplosive_Medium_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Ranged_GenericProjectileExplosive_Medium_C");

	return Clss;
}


// GA_Ranged_GenericProjectileExplosive_Medium_C GA_Ranged_GenericProjectileExplosive_Medium.Default__GA_Ranged_GenericProjectileExplosive_Medium_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Ranged_GenericProjectileExplosive_Medium_C* UGA_Ranged_GenericProjectileExplosive_Medium_C::GetDefaultObj()
{
	static class UGA_Ranged_GenericProjectileExplosive_Medium_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Ranged_GenericProjectileExplosive_Medium_C*>(UGA_Ranged_GenericProjectileExplosive_Medium_C::StaticClass()->DefaultObject);

	return Default;
}

}


