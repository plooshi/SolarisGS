#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCamera_DBNO.Athena_PlayerCamera_DBNO_C
// (None)

class UClass* UAthena_PlayerCamera_DBNO_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCamera_DBNO_C");

	return Clss;
}


// Athena_PlayerCamera_DBNO_C Athena_PlayerCamera_DBNO.Default__Athena_PlayerCamera_DBNO_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCamera_DBNO_C* UAthena_PlayerCamera_DBNO_C::GetDefaultObj()
{
	static class UAthena_PlayerCamera_DBNO_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCamera_DBNO_C*>(UAthena_PlayerCamera_DBNO_C::StaticClass()->DefaultObject);

	return Default;
}

}


