#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PBWA_BG_StairT.PBWA_BG_StairT_C
// (Actor)

class UClass* APBWA_BG_StairT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PBWA_BG_StairT_C");

	return Clss;
}


// PBWA_BG_StairT_C PBWA_BG_StairT.Default__PBWA_BG_StairT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APBWA_BG_StairT_C* APBWA_BG_StairT_C::GetDefaultObj()
{
	static class APBWA_BG_StairT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APBWA_BG_StairT_C*>(APBWA_BG_StairT_C::StaticClass()->DefaultObject);

	return Default;
}

}


