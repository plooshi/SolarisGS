#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Damage_Explosive_NoLineOfSight.GE_Damage_Explosive_NoLineOfSight_C
// (None)

class UClass* UGE_Damage_Explosive_NoLineOfSight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Damage_Explosive_NoLineOfSight_C");

	return Clss;
}


// GE_Damage_Explosive_NoLineOfSight_C GE_Damage_Explosive_NoLineOfSight.Default__GE_Damage_Explosive_NoLineOfSight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Damage_Explosive_NoLineOfSight_C* UGE_Damage_Explosive_NoLineOfSight_C::GetDefaultObj()
{
	static class UGE_Damage_Explosive_NoLineOfSight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Damage_Explosive_NoLineOfSight_C*>(UGE_Damage_Explosive_NoLineOfSight_C::StaticClass()->DefaultObject);

	return Default;
}

}


