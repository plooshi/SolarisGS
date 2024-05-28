#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TracerGeneric_Athena_BurstFireSMG.TracerGeneric_Athena_BurstFireSMG_C
// (Actor)

class UClass* ATracerGeneric_Athena_BurstFireSMG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TracerGeneric_Athena_BurstFireSMG_C");

	return Clss;
}


// TracerGeneric_Athena_BurstFireSMG_C TracerGeneric_Athena_BurstFireSMG.Default__TracerGeneric_Athena_BurstFireSMG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATracerGeneric_Athena_BurstFireSMG_C* ATracerGeneric_Athena_BurstFireSMG_C::GetDefaultObj()
{
	static class ATracerGeneric_Athena_BurstFireSMG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATracerGeneric_Athena_BurstFireSMG_C*>(ATracerGeneric_Athena_BurstFireSMG_C::StaticClass()->DefaultObject);

	return Default;
}

}


