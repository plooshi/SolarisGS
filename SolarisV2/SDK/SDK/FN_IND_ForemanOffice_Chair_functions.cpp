#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IND_ForemanOffice_Chair.IND_ForemanOffice_Chair_C
// (Actor)

class UClass* AIND_ForemanOffice_Chair_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IND_ForemanOffice_Chair_C");

	return Clss;
}


// IND_ForemanOffice_Chair_C IND_ForemanOffice_Chair.Default__IND_ForemanOffice_Chair_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AIND_ForemanOffice_Chair_C* AIND_ForemanOffice_Chair_C::GetDefaultObj()
{
	static class AIND_ForemanOffice_Chair_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AIND_ForemanOffice_Chair_C*>(AIND_ForemanOffice_Chair_C::StaticClass()->DefaultObject);

	return Default;
}

}


