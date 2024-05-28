#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VictoryDrone_Athena.BP_VictoryDrone_Athena_C
// (Actor, Pawn)

class UClass* ABP_VictoryDrone_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VictoryDrone_Athena_C");

	return Clss;
}


// BP_VictoryDrone_Athena_C BP_VictoryDrone_Athena.Default__BP_VictoryDrone_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_VictoryDrone_Athena_C* ABP_VictoryDrone_Athena_C::GetDefaultObj()
{
	static class ABP_VictoryDrone_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_VictoryDrone_Athena_C*>(ABP_VictoryDrone_Athena_C::StaticClass()->DefaultObject);

	return Default;
}

}


