#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Generic_Character_Launch.GE_Generic_Character_Launch_C
// (None)

class UClass* UGE_Generic_Character_Launch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Generic_Character_Launch_C");

	return Clss;
}


// GE_Generic_Character_Launch_C GE_Generic_Character_Launch.Default__GE_Generic_Character_Launch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Generic_Character_Launch_C* UGE_Generic_Character_Launch_C::GetDefaultObj()
{
	static class UGE_Generic_Character_Launch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Generic_Character_Launch_C*>(UGE_Generic_Character_Launch_C::StaticClass()->DefaultObject);

	return Default;
}

}


