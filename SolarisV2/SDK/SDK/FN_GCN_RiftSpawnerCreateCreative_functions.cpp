#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_RiftSpawnerCreateCreative.GCN_RiftSpawnerCreateCreative_C
// (None)

class UClass* UGCN_RiftSpawnerCreateCreative_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_RiftSpawnerCreateCreative_C");

	return Clss;
}


// GCN_RiftSpawnerCreateCreative_C GCN_RiftSpawnerCreateCreative.Default__GCN_RiftSpawnerCreateCreative_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_RiftSpawnerCreateCreative_C* UGCN_RiftSpawnerCreateCreative_C::GetDefaultObj()
{
	static class UGCN_RiftSpawnerCreateCreative_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_RiftSpawnerCreateCreative_C*>(UGCN_RiftSpawnerCreateCreative_C::StaticClass()->DefaultObject);

	return Default;
}

}


