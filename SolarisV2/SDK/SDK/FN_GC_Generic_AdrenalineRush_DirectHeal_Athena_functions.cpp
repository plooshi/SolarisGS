#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Generic_AdrenalineRush_DirectHeal_Athena.GC_Generic_AdrenalineRush_DirectHeal_Athena_C
// (None)

class UClass* UGC_Generic_AdrenalineRush_DirectHeal_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Generic_AdrenalineRush_DirectHeal_Athena_C");

	return Clss;
}


// GC_Generic_AdrenalineRush_DirectHeal_Athena_C GC_Generic_AdrenalineRush_DirectHeal_Athena.Default__GC_Generic_AdrenalineRush_DirectHeal_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_Generic_AdrenalineRush_DirectHeal_Athena_C* UGC_Generic_AdrenalineRush_DirectHeal_Athena_C::GetDefaultObj()
{
	static class UGC_Generic_AdrenalineRush_DirectHeal_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_Generic_AdrenalineRush_DirectHeal_Athena_C*>(UGC_Generic_AdrenalineRush_DirectHeal_Athena_C::StaticClass()->DefaultObject);

	return Default;
}

}


