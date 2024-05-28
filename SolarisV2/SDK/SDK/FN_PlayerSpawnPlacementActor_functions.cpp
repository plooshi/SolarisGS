#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerSpawnPlacementActor.PlayerSpawnPlacementActor_C
// (Actor)

class UClass* APlayerSpawnPlacementActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerSpawnPlacementActor_C");

	return Clss;
}


// PlayerSpawnPlacementActor_C PlayerSpawnPlacementActor.Default__PlayerSpawnPlacementActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APlayerSpawnPlacementActor_C* APlayerSpawnPlacementActor_C::GetDefaultObj()
{
	static class APlayerSpawnPlacementActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APlayerSpawnPlacementActor_C*>(APlayerSpawnPlacementActor_C::StaticClass()->DefaultObject);

	return Default;
}

}


