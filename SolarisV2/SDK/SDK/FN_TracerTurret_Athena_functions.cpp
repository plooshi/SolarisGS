#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TracerTurret_Athena.TracerTurret_Athena_C
// (Actor)

class UClass* ATracerTurret_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TracerTurret_Athena_C");

	return Clss;
}


// TracerTurret_Athena_C TracerTurret_Athena.Default__TracerTurret_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATracerTurret_Athena_C* ATracerTurret_Athena_C::GetDefaultObj()
{
	static class ATracerTurret_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATracerTurret_Athena_C*>(ATracerTurret_Athena_C::StaticClass()->DefaultObject);

	return Default;
}

}


