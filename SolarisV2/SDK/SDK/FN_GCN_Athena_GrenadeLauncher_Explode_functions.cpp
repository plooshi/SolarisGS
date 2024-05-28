#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Athena_GrenadeLauncher_Explode.GCN_Athena_GrenadeLauncher_Explode_C
// (None)

class UClass* UGCN_Athena_GrenadeLauncher_Explode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Athena_GrenadeLauncher_Explode_C");

	return Clss;
}


// GCN_Athena_GrenadeLauncher_Explode_C GCN_Athena_GrenadeLauncher_Explode.Default__GCN_Athena_GrenadeLauncher_Explode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_Athena_GrenadeLauncher_Explode_C* UGCN_Athena_GrenadeLauncher_Explode_C::GetDefaultObj()
{
	static class UGCN_Athena_GrenadeLauncher_Explode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_Athena_GrenadeLauncher_Explode_C*>(UGCN_Athena_GrenadeLauncher_Explode_C::StaticClass()->DefaultObject);

	return Default;
}

}


