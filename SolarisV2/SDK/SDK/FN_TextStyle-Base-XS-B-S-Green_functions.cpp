#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-B-S-Green.TextStyle-Base-XS-B-S-Green_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusBMinusSMinusGreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-B-S-Green_C");

	return Clss;
}


// TextStyle-Base-XS-B-S-Green_C TextStyle-Base-XS-B-S-Green.Default__TextStyle-Base-XS-B-S-Green_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusBMinusSMinusGreen_C* UTextStyleMinusBaseMinusXSMinusBMinusSMinusGreen_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusBMinusSMinusGreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusBMinusSMinusGreen_C*>(UTextStyleMinusBaseMinusXSMinusBMinusSMinusGreen_C::StaticClass()->DefaultObject);

	return Default;
}

}


