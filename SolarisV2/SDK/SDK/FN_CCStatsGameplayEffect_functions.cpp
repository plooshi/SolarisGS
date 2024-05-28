#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CCStatsGameplayEffect.CCStatsGameplayEffect_C
// (None)

class UClass* UCCStatsGameplayEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CCStatsGameplayEffect_C");

	return Clss;
}


// CCStatsGameplayEffect_C CCStatsGameplayEffect.Default__CCStatsGameplayEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCCStatsGameplayEffect_C* UCCStatsGameplayEffect_C::GetDefaultObj()
{
	static class UCCStatsGameplayEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCCStatsGameplayEffect_C*>(UCCStatsGameplayEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


