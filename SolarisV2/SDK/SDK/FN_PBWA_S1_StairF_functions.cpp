#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PBWA_S1_StairF.PBWA_S1_StairF_C
// (Actor)

class UClass* APBWA_S1_StairF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PBWA_S1_StairF_C");

	return Clss;
}


// PBWA_S1_StairF_C PBWA_S1_StairF.Default__PBWA_S1_StairF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APBWA_S1_StairF_C* APBWA_S1_StairF_C::GetDefaultObj()
{
	static class APBWA_S1_StairF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APBWA_S1_StairF_C*>(APBWA_S1_StairF_C::StaticClass()->DefaultObject);

	return Default;
}

}


