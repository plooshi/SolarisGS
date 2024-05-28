#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_RiftSpawnerDamgePerSpawn_Static.GE_RiftSpawnerDamgePerSpawn_Static_C
// (None)

class UClass* UGE_RiftSpawnerDamgePerSpawn_Static_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_RiftSpawnerDamgePerSpawn_Static_C");

	return Clss;
}


// GE_RiftSpawnerDamgePerSpawn_Static_C GE_RiftSpawnerDamgePerSpawn_Static.Default__GE_RiftSpawnerDamgePerSpawn_Static_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_RiftSpawnerDamgePerSpawn_Static_C* UGE_RiftSpawnerDamgePerSpawn_Static_C::GetDefaultObj()
{
	static class UGE_RiftSpawnerDamgePerSpawn_Static_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_RiftSpawnerDamgePerSpawn_Static_C*>(UGE_RiftSpawnerDamgePerSpawn_Static_C::StaticClass()->DefaultObject);

	return Default;
}

}


