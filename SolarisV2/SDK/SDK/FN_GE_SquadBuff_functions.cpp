#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SquadBuff.GE_SquadBuff_C
// (None)

class UClass* UGE_SquadBuff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SquadBuff_C");

	return Clss;
}


// GE_SquadBuff_C GE_SquadBuff.Default__GE_SquadBuff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SquadBuff_C* UGE_SquadBuff_C::GetDefaultObj()
{
	static class UGE_SquadBuff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SquadBuff_C*>(UGE_SquadBuff_C::StaticClass()->DefaultObject);

	return Default;
}

}


