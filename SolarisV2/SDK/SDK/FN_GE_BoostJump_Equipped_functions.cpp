#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_BoostJump_Equipped.GE_BoostJump_Equipped_C
// (None)

class UClass* UGE_BoostJump_Equipped_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_BoostJump_Equipped_C");

	return Clss;
}


// GE_BoostJump_Equipped_C GE_BoostJump_Equipped.Default__GE_BoostJump_Equipped_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_BoostJump_Equipped_C* UGE_BoostJump_Equipped_C::GetDefaultObj()
{
	static class UGE_BoostJump_Equipped_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_BoostJump_Equipped_C*>(UGE_BoostJump_Equipped_C::StaticClass()->DefaultObject);

	return Default;
}

}


