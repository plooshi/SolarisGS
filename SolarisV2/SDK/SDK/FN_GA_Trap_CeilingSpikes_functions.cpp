#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Trap_CeilingSpikes.GA_Trap_CeilingSpikes_C
// (None)

class UClass* UGA_Trap_CeilingSpikes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Trap_CeilingSpikes_C");

	return Clss;
}


// GA_Trap_CeilingSpikes_C GA_Trap_CeilingSpikes.Default__GA_Trap_CeilingSpikes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Trap_CeilingSpikes_C* UGA_Trap_CeilingSpikes_C::GetDefaultObj()
{
	static class UGA_Trap_CeilingSpikes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Trap_CeilingSpikes_C*>(UGA_Trap_CeilingSpikes_C::StaticClass()->DefaultObject);

	return Default;
}

}


