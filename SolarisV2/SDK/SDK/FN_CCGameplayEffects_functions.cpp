#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CCGameplayEffects.CCGameplayEffects_C
// (None)

class UClass* UCCGameplayEffects_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CCGameplayEffects_C");

	return Clss;
}


// CCGameplayEffects_C CCGameplayEffects.Default__CCGameplayEffects_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCCGameplayEffects_C* UCCGameplayEffects_C::GetDefaultObj()
{
	static class UCCGameplayEffects_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCCGameplayEffects_C*>(UCCGameplayEffects_C::StaticClass()->DefaultObject);

	return Default;
}

}


