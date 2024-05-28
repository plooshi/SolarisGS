#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BulletWhipTrackerComponent_BurstFireSMG.BulletWhipTrackerComponent_BurstFireSMG_C
// (None)

class UClass* UBulletWhipTrackerComponent_BurstFireSMG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BulletWhipTrackerComponent_BurstFireSMG_C");

	return Clss;
}


// BulletWhipTrackerComponent_BurstFireSMG_C BulletWhipTrackerComponent_BurstFireSMG.Default__BulletWhipTrackerComponent_BurstFireSMG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBulletWhipTrackerComponent_BurstFireSMG_C* UBulletWhipTrackerComponent_BurstFireSMG_C::GetDefaultObj()
{
	static class UBulletWhipTrackerComponent_BurstFireSMG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBulletWhipTrackerComponent_BurstFireSMG_C*>(UBulletWhipTrackerComponent_BurstFireSMG_C::StaticClass()->DefaultObject);

	return Default;
}

}


