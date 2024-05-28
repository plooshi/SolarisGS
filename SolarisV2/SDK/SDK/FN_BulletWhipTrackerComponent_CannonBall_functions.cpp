#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BulletWhipTrackerComponent_CannonBall.BulletWhipTrackerComponent_CannonBall_C
// (None)

class UClass* UBulletWhipTrackerComponent_CannonBall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BulletWhipTrackerComponent_CannonBall_C");

	return Clss;
}


// BulletWhipTrackerComponent_CannonBall_C BulletWhipTrackerComponent_CannonBall.Default__BulletWhipTrackerComponent_CannonBall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBulletWhipTrackerComponent_CannonBall_C* UBulletWhipTrackerComponent_CannonBall_C::GetDefaultObj()
{
	static class UBulletWhipTrackerComponent_CannonBall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBulletWhipTrackerComponent_CannonBall_C*>(UBulletWhipTrackerComponent_CannonBall_C::StaticClass()->DefaultObject);

	return Default;
}

}


