#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Ability_Commando_Shockwave_Explosion.GC_Ability_Commando_Shockwave_Explosion_C
// (None)

class UClass* UGC_Ability_Commando_Shockwave_Explosion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Ability_Commando_Shockwave_Explosion_C");

	return Clss;
}


// GC_Ability_Commando_Shockwave_Explosion_C GC_Ability_Commando_Shockwave_Explosion.Default__GC_Ability_Commando_Shockwave_Explosion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_Ability_Commando_Shockwave_Explosion_C* UGC_Ability_Commando_Shockwave_Explosion_C::GetDefaultObj()
{
	static class UGC_Ability_Commando_Shockwave_Explosion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_Ability_Commando_Shockwave_Explosion_C*>(UGC_Ability_Commando_Shockwave_Explosion_C::StaticClass()->DefaultObject);

	return Default;
}

}


