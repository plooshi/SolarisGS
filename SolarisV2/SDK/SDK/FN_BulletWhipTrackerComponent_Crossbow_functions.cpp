#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BulletWhipTrackerComponent_Crossbow.BulletWhipTrackerComponent_Crossbow_C
// (None)

class UClass* UBulletWhipTrackerComponent_Crossbow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BulletWhipTrackerComponent_Crossbow_C");

	return Clss;
}


// BulletWhipTrackerComponent_Crossbow_C BulletWhipTrackerComponent_Crossbow.Default__BulletWhipTrackerComponent_Crossbow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBulletWhipTrackerComponent_Crossbow_C* UBulletWhipTrackerComponent_Crossbow_C::GetDefaultObj()
{
	static class UBulletWhipTrackerComponent_Crossbow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBulletWhipTrackerComponent_Crossbow_C*>(UBulletWhipTrackerComponent_Crossbow_C::StaticClass()->DefaultObject);

	return Default;
}

}


