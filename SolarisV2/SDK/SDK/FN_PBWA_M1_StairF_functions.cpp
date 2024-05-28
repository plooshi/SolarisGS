#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PBWA_M1_StairF.PBWA_M1_StairF_C
// (Actor)

class UClass* APBWA_M1_StairF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PBWA_M1_StairF_C");

	return Clss;
}


// PBWA_M1_StairF_C PBWA_M1_StairF.Default__PBWA_M1_StairF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APBWA_M1_StairF_C* APBWA_M1_StairF_C::GetDefaultObj()
{
	static class APBWA_M1_StairF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APBWA_M1_StairF_C*>(APBWA_M1_StairF_C::StaticClass()->DefaultObject);

	return Default;
}

}


