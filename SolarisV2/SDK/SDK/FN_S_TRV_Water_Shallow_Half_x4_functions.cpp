#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass S_TRV_Water_Shallow_Half_x4.S_TRV_Water_Shallow_Half_x4_C
// (Actor)

class UClass* AS_TRV_Water_Shallow_Half_x4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S_TRV_Water_Shallow_Half_x4_C");

	return Clss;
}


// S_TRV_Water_Shallow_Half_x4_C S_TRV_Water_Shallow_Half_x4.Default__S_TRV_Water_Shallow_Half_x4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AS_TRV_Water_Shallow_Half_x4_C* AS_TRV_Water_Shallow_Half_x4_C::GetDefaultObj()
{
	static class AS_TRV_Water_Shallow_Half_x4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AS_TRV_Water_Shallow_Half_x4_C*>(AS_TRV_Water_Shallow_Half_x4_C::StaticClass()->DefaultObject);

	return Default;
}

}


