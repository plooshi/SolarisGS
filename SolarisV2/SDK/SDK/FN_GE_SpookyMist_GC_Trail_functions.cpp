#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SpookyMist_GC_Trail.GE_SpookyMist_GC_Trail_C
// (None)

class UClass* UGE_SpookyMist_GC_Trail_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SpookyMist_GC_Trail_C");

	return Clss;
}


// GE_SpookyMist_GC_Trail_C GE_SpookyMist_GC_Trail.Default__GE_SpookyMist_GC_Trail_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SpookyMist_GC_Trail_C* UGE_SpookyMist_GC_Trail_C::GetDefaultObj()
{
	static class UGE_SpookyMist_GC_Trail_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SpookyMist_GC_Trail_C*>(UGE_SpookyMist_GC_Trail_C::StaticClass()->DefaultObject);

	return Default;
}

}


