#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_PlayerShieldDamage_LensEffect_Direction.B_PlayerShieldDamage_LensEffect_Direction_C
// (Actor)

class UClass* AB_PlayerShieldDamage_LensEffect_Direction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_PlayerShieldDamage_LensEffect_Direction_C");

	return Clss;
}


// B_PlayerShieldDamage_LensEffect_Direction_C B_PlayerShieldDamage_LensEffect_Direction.Default__B_PlayerShieldDamage_LensEffect_Direction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_PlayerShieldDamage_LensEffect_Direction_C* AB_PlayerShieldDamage_LensEffect_Direction_C::GetDefaultObj()
{
	static class AB_PlayerShieldDamage_LensEffect_Direction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_PlayerShieldDamage_LensEffect_Direction_C*>(AB_PlayerShieldDamage_LensEffect_Direction_C::StaticClass()->DefaultObject);

	return Default;
}

}


