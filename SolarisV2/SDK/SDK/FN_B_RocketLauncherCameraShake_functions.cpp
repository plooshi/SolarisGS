#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_RocketLauncherCameraShake.B_RocketLauncherCameraShake_C
// (None)

class UClass* UB_RocketLauncherCameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_RocketLauncherCameraShake_C");

	return Clss;
}


// B_RocketLauncherCameraShake_C B_RocketLauncherCameraShake.Default__B_RocketLauncherCameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_RocketLauncherCameraShake_C* UB_RocketLauncherCameraShake_C::GetDefaultObj()
{
	static class UB_RocketLauncherCameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_RocketLauncherCameraShake_C*>(UB_RocketLauncherCameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


