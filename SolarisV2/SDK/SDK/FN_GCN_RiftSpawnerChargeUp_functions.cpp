#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_RiftSpawnerChargeUp.GCN_RiftSpawnerChargeUp_C
// (None)

class UClass* UGCN_RiftSpawnerChargeUp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_RiftSpawnerChargeUp_C");

	return Clss;
}


// GCN_RiftSpawnerChargeUp_C GCN_RiftSpawnerChargeUp.Default__GCN_RiftSpawnerChargeUp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_RiftSpawnerChargeUp_C* UGCN_RiftSpawnerChargeUp_C::GetDefaultObj()
{
	static class UGCN_RiftSpawnerChargeUp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_RiftSpawnerChargeUp_C*>(UGCN_RiftSpawnerChargeUp_C::StaticClass()->DefaultObject);

	return Default;
}

}


