#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Trap_WallSpikesMetal.GA_Trap_WallSpikesMetal_C
// (None)

class UClass* UGA_Trap_WallSpikesMetal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Trap_WallSpikesMetal_C");

	return Clss;
}


// GA_Trap_WallSpikesMetal_C GA_Trap_WallSpikesMetal.Default__GA_Trap_WallSpikesMetal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Trap_WallSpikesMetal_C* UGA_Trap_WallSpikesMetal_C::GetDefaultObj()
{
	static class UGA_Trap_WallSpikesMetal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Trap_WallSpikesMetal_C*>(UGA_Trap_WallSpikesMetal_C::StaticClass()->DefaultObject);

	return Default;
}

}


