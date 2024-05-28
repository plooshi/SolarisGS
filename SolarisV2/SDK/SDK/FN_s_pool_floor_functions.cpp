#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass s_pool_floor.s_pool_floor_C
// (Actor)

class UClass* AS_pool_floor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("s_pool_floor_C");

	return Clss;
}


// s_pool_floor_C s_pool_floor.Default__s_pool_floor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AS_pool_floor_C* AS_pool_floor_C::GetDefaultObj()
{
	static class AS_pool_floor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AS_pool_floor_C*>(AS_pool_floor_C::StaticClass()->DefaultObject);

	return Default;
}

}


