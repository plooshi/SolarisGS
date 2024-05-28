#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_AntiGrav.GE_AntiGrav_C
// (None)

class UClass* UGE_AntiGrav_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_AntiGrav_C");

	return Clss;
}


// GE_AntiGrav_C GE_AntiGrav.Default__GE_AntiGrav_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_AntiGrav_C* UGE_AntiGrav_C::GetDefaultObj()
{
	static class UGE_AntiGrav_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_AntiGrav_C*>(UGE_AntiGrav_C::StaticClass()->DefaultObject);

	return Default;
}

}


