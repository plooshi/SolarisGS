#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoorMetaObstacle.DoorMetaObstacle_C
// (None)

class UClass* UDoorMetaObstacle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoorMetaObstacle_C");

	return Clss;
}


// DoorMetaObstacle_C DoorMetaObstacle.Default__DoorMetaObstacle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoorMetaObstacle_C* UDoorMetaObstacle_C::GetDefaultObj()
{
	static class UDoorMetaObstacle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoorMetaObstacle_C*>(UDoorMetaObstacle_C::StaticClass()->DefaultObject);

	return Default;
}

}


