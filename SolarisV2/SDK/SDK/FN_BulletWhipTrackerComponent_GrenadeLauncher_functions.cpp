#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BulletWhipTrackerComponent_GrenadeLauncher.BulletWhipTrackerComponent_GrenadeLauncher_C
// (None)

class UClass* UBulletWhipTrackerComponent_GrenadeLauncher_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BulletWhipTrackerComponent_GrenadeLauncher_C");

	return Clss;
}


// BulletWhipTrackerComponent_GrenadeLauncher_C BulletWhipTrackerComponent_GrenadeLauncher.Default__BulletWhipTrackerComponent_GrenadeLauncher_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBulletWhipTrackerComponent_GrenadeLauncher_C* UBulletWhipTrackerComponent_GrenadeLauncher_C::GetDefaultObj()
{
	static class UBulletWhipTrackerComponent_GrenadeLauncher_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBulletWhipTrackerComponent_GrenadeLauncher_C*>(UBulletWhipTrackerComponent_GrenadeLauncher_C::StaticClass()->DefaultObject);

	return Default;
}

}


