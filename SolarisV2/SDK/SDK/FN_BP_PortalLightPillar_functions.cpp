#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PortalLightPillar.BP_PortalLightPillar_C
// (Actor)

class UClass* ABP_PortalLightPillar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PortalLightPillar_C");

	return Clss;
}


// BP_PortalLightPillar_C BP_PortalLightPillar.Default__BP_PortalLightPillar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PortalLightPillar_C* ABP_PortalLightPillar_C::GetDefaultObj()
{
	static class ABP_PortalLightPillar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PortalLightPillar_C*>(ABP_PortalLightPillar_C::StaticClass()->DefaultObject);

	return Default;
}

}


