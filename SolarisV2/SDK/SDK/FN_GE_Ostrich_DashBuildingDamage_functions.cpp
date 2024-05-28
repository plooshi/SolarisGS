#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Ostrich_DashBuildingDamage.GE_Ostrich_DashBuildingDamage_C
// (None)

class UClass* UGE_Ostrich_DashBuildingDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Ostrich_DashBuildingDamage_C");

	return Clss;
}


// GE_Ostrich_DashBuildingDamage_C GE_Ostrich_DashBuildingDamage.Default__GE_Ostrich_DashBuildingDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Ostrich_DashBuildingDamage_C* UGE_Ostrich_DashBuildingDamage_C::GetDefaultObj()
{
	static class UGE_Ostrich_DashBuildingDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Ostrich_DashBuildingDamage_C*>(UGE_Ostrich_DashBuildingDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


