#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BulletWhipTrackerComponent_AR.BulletWhipTrackerComponent_AR_C
// (None)

class UClass* UBulletWhipTrackerComponent_AR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BulletWhipTrackerComponent_AR_C");

	return Clss;
}


// BulletWhipTrackerComponent_AR_C BulletWhipTrackerComponent_AR.Default__BulletWhipTrackerComponent_AR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBulletWhipTrackerComponent_AR_C* UBulletWhipTrackerComponent_AR_C::GetDefaultObj()
{
	static class UBulletWhipTrackerComponent_AR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBulletWhipTrackerComponent_AR_C*>(UBulletWhipTrackerComponent_AR_C::StaticClass()->DefaultObject);

	return Default;
}

}


