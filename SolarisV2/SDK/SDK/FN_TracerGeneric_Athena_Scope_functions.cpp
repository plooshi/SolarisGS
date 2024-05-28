#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TracerGeneric_Athena_Scope.TracerGeneric_Athena_Scope_C
// (Actor)

class UClass* ATracerGeneric_Athena_Scope_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TracerGeneric_Athena_Scope_C");

	return Clss;
}


// TracerGeneric_Athena_Scope_C TracerGeneric_Athena_Scope.Default__TracerGeneric_Athena_Scope_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATracerGeneric_Athena_Scope_C* ATracerGeneric_Athena_Scope_C::GetDefaultObj()
{
	static class ATracerGeneric_Athena_Scope_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATracerGeneric_Athena_Scope_C*>(ATracerGeneric_Athena_Scope_C::StaticClass()->DefaultObject);

	return Default;
}

}


