#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_RiftSpawnerLifeTimeLapsed.GE_RiftSpawnerLifeTimeLapsed_C
// (None)

class UClass* UGE_RiftSpawnerLifeTimeLapsed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_RiftSpawnerLifeTimeLapsed_C");

	return Clss;
}


// GE_RiftSpawnerLifeTimeLapsed_C GE_RiftSpawnerLifeTimeLapsed.Default__GE_RiftSpawnerLifeTimeLapsed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_RiftSpawnerLifeTimeLapsed_C* UGE_RiftSpawnerLifeTimeLapsed_C::GetDefaultObj()
{
	static class UGE_RiftSpawnerLifeTimeLapsed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_RiftSpawnerLifeTimeLapsed_C*>(UGE_RiftSpawnerLifeTimeLapsed_C::StaticClass()->DefaultObject);

	return Default;
}

}


