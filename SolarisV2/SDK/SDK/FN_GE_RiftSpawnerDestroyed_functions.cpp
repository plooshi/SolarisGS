#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_RiftSpawnerDestroyed.GE_RiftSpawnerDestroyed_C
// (None)

class UClass* UGE_RiftSpawnerDestroyed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_RiftSpawnerDestroyed_C");

	return Clss;
}


// GE_RiftSpawnerDestroyed_C GE_RiftSpawnerDestroyed.Default__GE_RiftSpawnerDestroyed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_RiftSpawnerDestroyed_C* UGE_RiftSpawnerDestroyed_C::GetDefaultObj()
{
	static class UGE_RiftSpawnerDestroyed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_RiftSpawnerDestroyed_C*>(UGE_RiftSpawnerDestroyed_C::StaticClass()->DefaultObject);

	return Default;
}

}


