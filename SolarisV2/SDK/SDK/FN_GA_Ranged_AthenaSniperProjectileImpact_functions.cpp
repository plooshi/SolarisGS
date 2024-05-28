#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Ranged_AthenaSniperProjectileImpact.GA_Ranged_AthenaSniperProjectileImpact_C
// (None)

class UClass* UGA_Ranged_AthenaSniperProjectileImpact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Ranged_AthenaSniperProjectileImpact_C");

	return Clss;
}


// GA_Ranged_AthenaSniperProjectileImpact_C GA_Ranged_AthenaSniperProjectileImpact.Default__GA_Ranged_AthenaSniperProjectileImpact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Ranged_AthenaSniperProjectileImpact_C* UGA_Ranged_AthenaSniperProjectileImpact_C::GetDefaultObj()
{
	static class UGA_Ranged_AthenaSniperProjectileImpact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Ranged_AthenaSniperProjectileImpact_C*>(UGA_Ranged_AthenaSniperProjectileImpact_C::StaticClass()->DefaultObject);

	return Default;
}

}


