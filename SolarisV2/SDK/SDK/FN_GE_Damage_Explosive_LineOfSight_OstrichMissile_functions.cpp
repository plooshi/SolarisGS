#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Damage_Explosive_LineOfSight_OstrichMissile.GE_Damage_Explosive_LineOfSight_OstrichMissile_C
// (None)

class UClass* UGE_Damage_Explosive_LineOfSight_OstrichMissile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Damage_Explosive_LineOfSight_OstrichMissile_C");

	return Clss;
}


// GE_Damage_Explosive_LineOfSight_OstrichMissile_C GE_Damage_Explosive_LineOfSight_OstrichMissile.Default__GE_Damage_Explosive_LineOfSight_OstrichMissile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Damage_Explosive_LineOfSight_OstrichMissile_C* UGE_Damage_Explosive_LineOfSight_OstrichMissile_C::GetDefaultObj()
{
	static class UGE_Damage_Explosive_LineOfSight_OstrichMissile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Damage_Explosive_LineOfSight_OstrichMissile_C*>(UGE_Damage_Explosive_LineOfSight_OstrichMissile_C::StaticClass()->DefaultObject);

	return Default;
}

}


