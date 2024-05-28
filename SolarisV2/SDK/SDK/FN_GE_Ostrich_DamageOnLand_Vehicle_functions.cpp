#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Ostrich_DamageOnLand_Vehicle.GE_Ostrich_DamageOnLand_Vehicle_C
// (None)

class UClass* UGE_Ostrich_DamageOnLand_Vehicle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Ostrich_DamageOnLand_Vehicle_C");

	return Clss;
}


// GE_Ostrich_DamageOnLand_Vehicle_C GE_Ostrich_DamageOnLand_Vehicle.Default__GE_Ostrich_DamageOnLand_Vehicle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Ostrich_DamageOnLand_Vehicle_C* UGE_Ostrich_DamageOnLand_Vehicle_C::GetDefaultObj()
{
	static class UGE_Ostrich_DamageOnLand_Vehicle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Ostrich_DamageOnLand_Vehicle_C*>(UGE_Ostrich_DamageOnLand_Vehicle_C::StaticClass()->DefaultObject);

	return Default;
}

}


