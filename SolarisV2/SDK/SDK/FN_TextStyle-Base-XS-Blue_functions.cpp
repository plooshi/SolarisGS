#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-Blue.TextStyle-Base-XS-Blue_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusBlue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-Blue_C");

	return Clss;
}


// TextStyle-Base-XS-Blue_C TextStyle-Base-XS-Blue.Default__TextStyle-Base-XS-Blue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusBlue_C* UTextStyleMinusBaseMinusXSMinusBlue_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusBlue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusBlue_C*>(UTextStyleMinusBaseMinusXSMinusBlue_C::StaticClass()->DefaultObject);

	return Default;
}

}


