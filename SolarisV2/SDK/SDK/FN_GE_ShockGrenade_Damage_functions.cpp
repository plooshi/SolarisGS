#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ShockGrenade_Damage.GE_ShockGrenade_Damage_C
// (None)

class UClass* UGE_ShockGrenade_Damage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ShockGrenade_Damage_C");

	return Clss;
}


// GE_ShockGrenade_Damage_C GE_ShockGrenade_Damage.Default__GE_ShockGrenade_Damage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ShockGrenade_Damage_C* UGE_ShockGrenade_Damage_C::GetDefaultObj()
{
	static class UGE_ShockGrenade_Damage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ShockGrenade_Damage_C*>(UGE_ShockGrenade_Damage_C::StaticClass()->DefaultObject);

	return Default;
}

}


