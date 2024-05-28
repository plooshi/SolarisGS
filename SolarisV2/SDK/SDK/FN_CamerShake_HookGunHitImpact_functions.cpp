#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CamerShake_HookGunHitImpact.CamerShake_HookGunHitImpact_C
// (None)

class UClass* UCamerShake_HookGunHitImpact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CamerShake_HookGunHitImpact_C");

	return Clss;
}


// CamerShake_HookGunHitImpact_C CamerShake_HookGunHitImpact.Default__CamerShake_HookGunHitImpact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCamerShake_HookGunHitImpact_C* UCamerShake_HookGunHitImpact_C::GetDefaultObj()
{
	static class UCamerShake_HookGunHitImpact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCamerShake_HookGunHitImpact_C*>(UCamerShake_HookGunHitImpact_C::StaticClass()->DefaultObject);

	return Default;
}

}


