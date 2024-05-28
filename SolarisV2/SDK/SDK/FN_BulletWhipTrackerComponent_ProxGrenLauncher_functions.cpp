#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BulletWhipTrackerComponent_ProxGrenLauncher.BulletWhipTrackerComponent_ProxGrenLauncher_C
// (None)

class UClass* UBulletWhipTrackerComponent_ProxGrenLauncher_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BulletWhipTrackerComponent_ProxGrenLauncher_C");

	return Clss;
}


// BulletWhipTrackerComponent_ProxGrenLauncher_C BulletWhipTrackerComponent_ProxGrenLauncher.Default__BulletWhipTrackerComponent_ProxGrenLauncher_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBulletWhipTrackerComponent_ProxGrenLauncher_C* UBulletWhipTrackerComponent_ProxGrenLauncher_C::GetDefaultObj()
{
	static class UBulletWhipTrackerComponent_ProxGrenLauncher_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBulletWhipTrackerComponent_ProxGrenLauncher_C*>(UBulletWhipTrackerComponent_ProxGrenLauncher_C::StaticClass()->DefaultObject);

	return Default;
}

}


