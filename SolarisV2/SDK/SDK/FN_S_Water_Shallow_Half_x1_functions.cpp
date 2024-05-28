#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass S_Water_Shallow_Half_x1.S_Water_Shallow_Half_x1_C
// (Actor)

class UClass* AS_Water_Shallow_Half_x1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S_Water_Shallow_Half_x1_C");

	return Clss;
}


// S_Water_Shallow_Half_x1_C S_Water_Shallow_Half_x1.Default__S_Water_Shallow_Half_x1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AS_Water_Shallow_Half_x1_C* AS_Water_Shallow_Half_x1_C::GetDefaultObj()
{
	static class AS_Water_Shallow_Half_x1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AS_Water_Shallow_Half_x1_C*>(AS_Water_Shallow_Half_x1_C::StaticClass()->DefaultObject);

	return Default;
}

}


