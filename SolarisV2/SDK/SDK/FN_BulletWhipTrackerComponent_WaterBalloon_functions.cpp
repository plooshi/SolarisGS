#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BulletWhipTrackerComponent_WaterBalloon.BulletWhipTrackerComponent_WaterBalloon_C
// (None)

class UClass* UBulletWhipTrackerComponent_WaterBalloon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BulletWhipTrackerComponent_WaterBalloon_C");

	return Clss;
}


// BulletWhipTrackerComponent_WaterBalloon_C BulletWhipTrackerComponent_WaterBalloon.Default__BulletWhipTrackerComponent_WaterBalloon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBulletWhipTrackerComponent_WaterBalloon_C* UBulletWhipTrackerComponent_WaterBalloon_C::GetDefaultObj()
{
	static class UBulletWhipTrackerComponent_WaterBalloon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBulletWhipTrackerComponent_WaterBalloon_C*>(UBulletWhipTrackerComponent_WaterBalloon_C::StaticClass()->DefaultObject);

	return Default;
}

}


