#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MountedTurretConfigs.MountedTurretConfigs_C
// (None)

class UClass* UMountedTurretConfigs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MountedTurretConfigs_C");

	return Clss;
}


// MountedTurretConfigs_C MountedTurretConfigs.Default__MountedTurretConfigs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMountedTurretConfigs_C* UMountedTurretConfigs_C::GetDefaultObj()
{
	static class UMountedTurretConfigs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMountedTurretConfigs_C*>(UMountedTurretConfigs_C::StaticClass()->DefaultObject);

	return Default;
}

}


