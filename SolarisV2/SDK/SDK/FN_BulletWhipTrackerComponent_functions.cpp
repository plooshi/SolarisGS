#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BulletWhipTrackerComponent.BulletWhipTrackerComponent_C
// (None)

class UClass* UBulletWhipTrackerComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BulletWhipTrackerComponent_C");

	return Clss;
}


// BulletWhipTrackerComponent_C BulletWhipTrackerComponent.Default__BulletWhipTrackerComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBulletWhipTrackerComponent_C* UBulletWhipTrackerComponent_C::GetDefaultObj()
{
	static class UBulletWhipTrackerComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBulletWhipTrackerComponent_C*>(UBulletWhipTrackerComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


