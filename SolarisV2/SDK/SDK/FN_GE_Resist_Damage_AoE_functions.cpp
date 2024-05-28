#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Resist_Damage_AoE.GE_Resist_Damage_AoE_C
// (None)

class UClass* UGE_Resist_Damage_AoE_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Resist_Damage_AoE_C");

	return Clss;
}


// GE_Resist_Damage_AoE_C GE_Resist_Damage_AoE.Default__GE_Resist_Damage_AoE_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Resist_Damage_AoE_C* UGE_Resist_Damage_AoE_C::GetDefaultObj()
{
	static class UGE_Resist_Damage_AoE_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Resist_Damage_AoE_C*>(UGE_Resist_Damage_AoE_C::StaticClass()->DefaultObject);

	return Default;
}

}


