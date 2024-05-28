#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_RiftSpawnerDamageResistances.GE_RiftSpawnerDamageResistances_C
// (None)

class UClass* UGE_RiftSpawnerDamageResistances_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_RiftSpawnerDamageResistances_C");

	return Clss;
}


// GE_RiftSpawnerDamageResistances_C GE_RiftSpawnerDamageResistances.Default__GE_RiftSpawnerDamageResistances_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_RiftSpawnerDamageResistances_C* UGE_RiftSpawnerDamageResistances_C::GetDefaultObj()
{
	static class UGE_RiftSpawnerDamageResistances_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_RiftSpawnerDamageResistances_C*>(UGE_RiftSpawnerDamageResistances_C::StaticClass()->DefaultObject);

	return Default;
}

}


