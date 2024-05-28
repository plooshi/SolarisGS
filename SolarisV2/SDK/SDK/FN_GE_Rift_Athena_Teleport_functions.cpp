#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Rift_Athena_Teleport.GE_Rift_Athena_Teleport_C
// (None)

class UClass* UGE_Rift_Athena_Teleport_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Rift_Athena_Teleport_C");

	return Clss;
}


// GE_Rift_Athena_Teleport_C GE_Rift_Athena_Teleport.Default__GE_Rift_Athena_Teleport_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Rift_Athena_Teleport_C* UGE_Rift_Athena_Teleport_C::GetDefaultObj()
{
	static class UGE_Rift_Athena_Teleport_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Rift_Athena_Teleport_C*>(UGE_Rift_Athena_Teleport_C::StaticClass()->DefaultObject);

	return Default;
}

}


