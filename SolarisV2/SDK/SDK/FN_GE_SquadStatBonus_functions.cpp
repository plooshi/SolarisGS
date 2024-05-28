#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SquadStatBonus.GE_SquadStatBonus_C
// (None)

class UClass* UGE_SquadStatBonus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SquadStatBonus_C");

	return Clss;
}


// GE_SquadStatBonus_C GE_SquadStatBonus.Default__GE_SquadStatBonus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SquadStatBonus_C* UGE_SquadStatBonus_C::GetDefaultObj()
{
	static class UGE_SquadStatBonus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SquadStatBonus_C*>(UGE_SquadStatBonus_C::StaticClass()->DefaultObject);

	return Default;
}

}


