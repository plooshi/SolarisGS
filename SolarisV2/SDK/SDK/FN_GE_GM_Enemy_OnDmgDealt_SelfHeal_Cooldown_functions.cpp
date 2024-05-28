#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_GM_Enemy_OnDmgDealt_SelfHeal_Cooldown.GE_GM_Enemy_OnDmgDealt_SelfHeal_Cooldown_C
// (None)

class UClass* UGE_GM_Enemy_OnDmgDealt_SelfHeal_Cooldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_GM_Enemy_OnDmgDealt_SelfHeal_Cooldown_C");

	return Clss;
}


// GE_GM_Enemy_OnDmgDealt_SelfHeal_Cooldown_C GE_GM_Enemy_OnDmgDealt_SelfHeal_Cooldown.Default__GE_GM_Enemy_OnDmgDealt_SelfHeal_Cooldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_GM_Enemy_OnDmgDealt_SelfHeal_Cooldown_C* UGE_GM_Enemy_OnDmgDealt_SelfHeal_Cooldown_C::GetDefaultObj()
{
	static class UGE_GM_Enemy_OnDmgDealt_SelfHeal_Cooldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_GM_Enemy_OnDmgDealt_SelfHeal_Cooldown_C*>(UGE_GM_Enemy_OnDmgDealt_SelfHeal_Cooldown_C::StaticClass()->DefaultObject);

	return Default;
}

}


