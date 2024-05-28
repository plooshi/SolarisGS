#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_GasGrenade_PulseDamage.GE_GasGrenade_PulseDamage_C
// (None)

class UClass* UGE_GasGrenade_PulseDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_GasGrenade_PulseDamage_C");

	return Clss;
}


// GE_GasGrenade_PulseDamage_C GE_GasGrenade_PulseDamage.Default__GE_GasGrenade_PulseDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_GasGrenade_PulseDamage_C* UGE_GasGrenade_PulseDamage_C::GetDefaultObj()
{
	static class UGE_GasGrenade_PulseDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_GasGrenade_PulseDamage_C*>(UGE_GasGrenade_PulseDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


