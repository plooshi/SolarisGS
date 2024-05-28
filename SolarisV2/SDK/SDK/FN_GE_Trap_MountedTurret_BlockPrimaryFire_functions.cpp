#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Trap_MountedTurret_BlockPrimaryFire.GE_Trap_MountedTurret_BlockPrimaryFire_C
// (None)

class UClass* UGE_Trap_MountedTurret_BlockPrimaryFire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Trap_MountedTurret_BlockPrimaryFire_C");

	return Clss;
}


// GE_Trap_MountedTurret_BlockPrimaryFire_C GE_Trap_MountedTurret_BlockPrimaryFire.Default__GE_Trap_MountedTurret_BlockPrimaryFire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Trap_MountedTurret_BlockPrimaryFire_C* UGE_Trap_MountedTurret_BlockPrimaryFire_C::GetDefaultObj()
{
	static class UGE_Trap_MountedTurret_BlockPrimaryFire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Trap_MountedTurret_BlockPrimaryFire_C*>(UGE_Trap_MountedTurret_BlockPrimaryFire_C::StaticClass()->DefaultObject);

	return Default;
}

}


