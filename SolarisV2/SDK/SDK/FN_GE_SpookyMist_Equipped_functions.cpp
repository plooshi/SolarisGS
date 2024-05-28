#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SpookyMist_Equipped.GE_SpookyMist_Equipped_C
// (None)

class UClass* UGE_SpookyMist_Equipped_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SpookyMist_Equipped_C");

	return Clss;
}


// GE_SpookyMist_Equipped_C GE_SpookyMist_Equipped.Default__GE_SpookyMist_Equipped_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SpookyMist_Equipped_C* UGE_SpookyMist_Equipped_C::GetDefaultObj()
{
	static class UGE_SpookyMist_Equipped_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SpookyMist_Equipped_C*>(UGE_SpookyMist_Equipped_C::StaticClass()->DefaultObject);

	return Default;
}

}


