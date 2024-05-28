#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Ostrich_DamageOnLand_Building.GE_Ostrich_DamageOnLand_Building_C
// (None)

class UClass* UGE_Ostrich_DamageOnLand_Building_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Ostrich_DamageOnLand_Building_C");

	return Clss;
}


// GE_Ostrich_DamageOnLand_Building_C GE_Ostrich_DamageOnLand_Building.Default__GE_Ostrich_DamageOnLand_Building_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Ostrich_DamageOnLand_Building_C* UGE_Ostrich_DamageOnLand_Building_C::GetDefaultObj()
{
	static class UGE_Ostrich_DamageOnLand_Building_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Ostrich_DamageOnLand_Building_C*>(UGE_Ostrich_DamageOnLand_Building_C::StaticClass()->DefaultObject);

	return Default;
}

}


