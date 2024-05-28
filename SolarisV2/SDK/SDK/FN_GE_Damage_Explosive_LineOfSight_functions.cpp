#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Damage_Explosive_LineOfSight.GE_Damage_Explosive_LineOfSight_C
// (None)

class UClass* UGE_Damage_Explosive_LineOfSight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Damage_Explosive_LineOfSight_C");

	return Clss;
}


// GE_Damage_Explosive_LineOfSight_C GE_Damage_Explosive_LineOfSight.Default__GE_Damage_Explosive_LineOfSight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Damage_Explosive_LineOfSight_C* UGE_Damage_Explosive_LineOfSight_C::GetDefaultObj()
{
	static class UGE_Damage_Explosive_LineOfSight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Damage_Explosive_LineOfSight_C*>(UGE_Damage_Explosive_LineOfSight_C::StaticClass()->DefaultObject);

	return Default;
}

}


