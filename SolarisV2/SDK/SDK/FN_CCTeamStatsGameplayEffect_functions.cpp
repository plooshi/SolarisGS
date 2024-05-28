#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CCTeamStatsGameplayEffect.CCTeamStatsGameplayEffect_C
// (None)

class UClass* UCCTeamStatsGameplayEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CCTeamStatsGameplayEffect_C");

	return Clss;
}


// CCTeamStatsGameplayEffect_C CCTeamStatsGameplayEffect.Default__CCTeamStatsGameplayEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCCTeamStatsGameplayEffect_C* UCCTeamStatsGameplayEffect_C::GetDefaultObj()
{
	static class UCCTeamStatsGameplayEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCCTeamStatsGameplayEffect_C*>(UCCTeamStatsGameplayEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


