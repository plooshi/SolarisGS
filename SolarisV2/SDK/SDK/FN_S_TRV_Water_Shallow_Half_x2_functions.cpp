#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass S_TRV_Water_Shallow_Half_x2.S_TRV_Water_Shallow_Half_x2_C
// (Actor)

class UClass* AS_TRV_Water_Shallow_Half_x2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S_TRV_Water_Shallow_Half_x2_C");

	return Clss;
}


// S_TRV_Water_Shallow_Half_x2_C S_TRV_Water_Shallow_Half_x2.Default__S_TRV_Water_Shallow_Half_x2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AS_TRV_Water_Shallow_Half_x2_C* AS_TRV_Water_Shallow_Half_x2_C::GetDefaultObj()
{
	static class AS_TRV_Water_Shallow_Half_x2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AS_TRV_Water_Shallow_Half_x2_C*>(AS_TRV_Water_Shallow_Half_x2_C::StaticClass()->DefaultObject);

	return Default;
}

}


