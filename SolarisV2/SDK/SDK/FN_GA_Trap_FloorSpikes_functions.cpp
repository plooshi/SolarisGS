#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Trap_FloorSpikes.GA_Trap_FloorSpikes_C
// (None)

class UClass* UGA_Trap_FloorSpikes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Trap_FloorSpikes_C");

	return Clss;
}


// GA_Trap_FloorSpikes_C GA_Trap_FloorSpikes.Default__GA_Trap_FloorSpikes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Trap_FloorSpikes_C* UGA_Trap_FloorSpikes_C::GetDefaultObj()
{
	static class UGA_Trap_FloorSpikes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Trap_FloorSpikes_C*>(UGA_Trap_FloorSpikes_C::StaticClass()->DefaultObject);

	return Default;
}

}


