#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Athena_RopeActive.GE_Athena_RopeActive_C
// (None)

class UClass* UGE_Athena_RopeActive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Athena_RopeActive_C");

	return Clss;
}


// GE_Athena_RopeActive_C GE_Athena_RopeActive.Default__GE_Athena_RopeActive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Athena_RopeActive_C* UGE_Athena_RopeActive_C::GetDefaultObj()
{
	static class UGE_Athena_RopeActive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Athena_RopeActive_C*>(UGE_Athena_RopeActive_C::StaticClass()->DefaultObject);

	return Default;
}

}


