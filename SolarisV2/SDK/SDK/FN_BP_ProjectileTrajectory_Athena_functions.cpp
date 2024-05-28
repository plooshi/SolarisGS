#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ProjectileTrajectory_Athena.BP_ProjectileTrajectory_Athena_C
// (Actor)

class UClass* ABP_ProjectileTrajectory_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ProjectileTrajectory_Athena_C");

	return Clss;
}


// BP_ProjectileTrajectory_Athena_C BP_ProjectileTrajectory_Athena.Default__BP_ProjectileTrajectory_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ProjectileTrajectory_Athena_C* ABP_ProjectileTrajectory_Athena_C::GetDefaultObj()
{
	static class ABP_ProjectileTrajectory_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ProjectileTrajectory_Athena_C*>(ABP_ProjectileTrajectory_Athena_C::StaticClass()->DefaultObject);

	return Default;
}

}


