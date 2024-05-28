#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Impulse.GE_Impulse_C
// (None)

class UClass* UGE_Impulse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Impulse_C");

	return Clss;
}


// GE_Impulse_C GE_Impulse.Default__GE_Impulse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Impulse_C* UGE_Impulse_C::GetDefaultObj()
{
	static class UGE_Impulse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Impulse_C*>(UGE_Impulse_C::StaticClass()->DefaultObject);

	return Default;
}

}


