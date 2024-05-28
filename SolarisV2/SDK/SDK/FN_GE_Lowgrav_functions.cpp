#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Lowgrav.GE_Lowgrav_C
// (None)

class UClass* UGE_Lowgrav_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Lowgrav_C");

	return Clss;
}


// GE_Lowgrav_C GE_Lowgrav.Default__GE_Lowgrav_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Lowgrav_C* UGE_Lowgrav_C::GetDefaultObj()
{
	static class UGE_Lowgrav_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Lowgrav_C*>(UGE_Lowgrav_C::StaticClass()->DefaultObject);

	return Default;
}

}


