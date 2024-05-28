#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WarmupEventCameraShake.WarmupEventCameraShake_C
// (None)

class UClass* UWarmupEventCameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WarmupEventCameraShake_C");

	return Clss;
}


// WarmupEventCameraShake_C WarmupEventCameraShake.Default__WarmupEventCameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWarmupEventCameraShake_C* UWarmupEventCameraShake_C::GetDefaultObj()
{
	static class UWarmupEventCameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWarmupEventCameraShake_C*>(UWarmupEventCameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


