#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_RiftImpact_CameraShake.B_RiftImpact_CameraShake_C
// (None)

class UClass* UB_RiftImpact_CameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_RiftImpact_CameraShake_C");

	return Clss;
}


// B_RiftImpact_CameraShake_C B_RiftImpact_CameraShake.Default__B_RiftImpact_CameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_RiftImpact_CameraShake_C* UB_RiftImpact_CameraShake_C::GetDefaultObj()
{
	static class UB_RiftImpact_CameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_RiftImpact_CameraShake_C*>(UB_RiftImpact_CameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


