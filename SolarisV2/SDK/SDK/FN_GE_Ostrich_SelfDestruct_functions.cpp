#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Ostrich_SelfDestruct.GE_Ostrich_SelfDestruct_C
// (None)

class UClass* UGE_Ostrich_SelfDestruct_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Ostrich_SelfDestruct_C");

	return Clss;
}


// GE_Ostrich_SelfDestruct_C GE_Ostrich_SelfDestruct.Default__GE_Ostrich_SelfDestruct_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Ostrich_SelfDestruct_C* UGE_Ostrich_SelfDestruct_C::GetDefaultObj()
{
	static class UGE_Ostrich_SelfDestruct_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Ostrich_SelfDestruct_C*>(UGE_Ostrich_SelfDestruct_C::StaticClass()->DefaultObject);

	return Default;
}

}


