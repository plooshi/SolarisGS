#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-B-S-Red.TextStyle-Base-XS-B-S-Red_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusBMinusSMinusRed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-B-S-Red_C");

	return Clss;
}


// TextStyle-Base-XS-B-S-Red_C TextStyle-Base-XS-B-S-Red.Default__TextStyle-Base-XS-B-S-Red_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusBMinusSMinusRed_C* UTextStyleMinusBaseMinusXSMinusBMinusSMinusRed_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusBMinusSMinusRed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusBMinusSMinusRed_C*>(UTextStyleMinusBaseMinusXSMinusBMinusSMinusRed_C::StaticClass()->DefaultObject);

	return Default;
}

}


