#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_PartyXPBoost.Buff_PartyXPBoost_C
// (None)

class UClass* UBuff_PartyXPBoost_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_PartyXPBoost_C");

	return Clss;
}


// Buff_PartyXPBoost_C Buff_PartyXPBoost.Default__Buff_PartyXPBoost_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBuff_PartyXPBoost_C* UBuff_PartyXPBoost_C::GetDefaultObj()
{
	static class UBuff_PartyXPBoost_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBuff_PartyXPBoost_C*>(UBuff_PartyXPBoost_C::StaticClass()->DefaultObject);

	return Default;
}

}


