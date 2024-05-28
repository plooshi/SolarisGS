#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SpookyMist_Speed.GE_SpookyMist_Speed_C
// (None)

class UClass* UGE_SpookyMist_Speed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SpookyMist_Speed_C");

	return Clss;
}


// GE_SpookyMist_Speed_C GE_SpookyMist_Speed.Default__GE_SpookyMist_Speed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SpookyMist_Speed_C* UGE_SpookyMist_Speed_C::GetDefaultObj()
{
	static class UGE_SpookyMist_Speed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SpookyMist_Speed_C*>(UGE_SpookyMist_Speed_C::StaticClass()->DefaultObject);

	return Default;
}

}


