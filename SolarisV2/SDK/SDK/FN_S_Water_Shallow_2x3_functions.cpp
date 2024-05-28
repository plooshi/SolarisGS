#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass S_Water_Shallow_2x3.S_Water_Shallow_2x3_C
// (Actor)

class UClass* AS_Water_Shallow_2x3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S_Water_Shallow_2x3_C");

	return Clss;
}


// S_Water_Shallow_2x3_C S_Water_Shallow_2x3.Default__S_Water_Shallow_2x3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AS_Water_Shallow_2x3_C* AS_Water_Shallow_2x3_C::GetDefaultObj()
{
	static class AS_Water_Shallow_2x3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AS_Water_Shallow_2x3_C*>(AS_Water_Shallow_2x3_C::StaticClass()->DefaultObject);

	return Default;
}

}


