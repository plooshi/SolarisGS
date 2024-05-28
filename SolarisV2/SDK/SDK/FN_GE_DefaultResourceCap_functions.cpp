#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DefaultResourceCap.GE_DefaultResourceCap_C
// (None)

class UClass* UGE_DefaultResourceCap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DefaultResourceCap_C");

	return Clss;
}


// GE_DefaultResourceCap_C GE_DefaultResourceCap.Default__GE_DefaultResourceCap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DefaultResourceCap_C* UGE_DefaultResourceCap_C::GetDefaultObj()
{
	static class UGE_DefaultResourceCap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DefaultResourceCap_C*>(UGE_DefaultResourceCap_C::StaticClass()->DefaultObject);

	return Default;
}

}


