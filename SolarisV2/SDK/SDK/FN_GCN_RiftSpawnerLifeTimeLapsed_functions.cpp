#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_RiftSpawnerLifeTimeLapsed.GCN_RiftSpawnerLifeTimeLapsed_C
// (None)

class UClass* UGCN_RiftSpawnerLifeTimeLapsed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_RiftSpawnerLifeTimeLapsed_C");

	return Clss;
}


// GCN_RiftSpawnerLifeTimeLapsed_C GCN_RiftSpawnerLifeTimeLapsed.Default__GCN_RiftSpawnerLifeTimeLapsed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_RiftSpawnerLifeTimeLapsed_C* UGCN_RiftSpawnerLifeTimeLapsed_C::GetDefaultObj()
{
	static class UGCN_RiftSpawnerLifeTimeLapsed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_RiftSpawnerLifeTimeLapsed_C*>(UGCN_RiftSpawnerLifeTimeLapsed_C::StaticClass()->DefaultObject);

	return Default;
}

}


