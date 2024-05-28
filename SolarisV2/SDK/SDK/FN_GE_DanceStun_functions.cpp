#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DanceStun.GE_DanceStun_C
// (None)

class UClass* UGE_DanceStun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DanceStun_C");

	return Clss;
}


// GE_DanceStun_C GE_DanceStun.Default__GE_DanceStun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DanceStun_C* UGE_DanceStun_C::GetDefaultObj()
{
	static class UGE_DanceStun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DanceStun_C*>(UGE_DanceStun_C::StaticClass()->DefaultObject);

	return Default;
}

}


