#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Ranged_GenericProjectile_Hit_And_Explosive_Cannon.GA_Ranged_GenericProjectile_Hit_And_Explosive_Cannon_C
// (None)

class UClass* UGA_Ranged_GenericProjectile_Hit_And_Explosive_Cannon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Ranged_GenericProjectile_Hit_And_Explosive_Cannon_C");

	return Clss;
}


// GA_Ranged_GenericProjectile_Hit_And_Explosive_Cannon_C GA_Ranged_GenericProjectile_Hit_And_Explosive_Cannon.Default__GA_Ranged_GenericProjectile_Hit_And_Explosive_Cannon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Ranged_GenericProjectile_Hit_And_Explosive_Cannon_C* UGA_Ranged_GenericProjectile_Hit_And_Explosive_Cannon_C::GetDefaultObj()
{
	static class UGA_Ranged_GenericProjectile_Hit_And_Explosive_Cannon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Ranged_GenericProjectile_Hit_And_Explosive_Cannon_C*>(UGA_Ranged_GenericProjectile_Hit_And_Explosive_Cannon_C::StaticClass()->DefaultObject);

	return Default;
}

}


