#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-XXL-YellowGrad.TextStyle-Header-XXL-YellowGrad_C
// (None)

class UClass* UTextStyleMinusHeaderMinusXXLMinusYellowGrad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-XXL-YellowGrad_C");

	return Clss;
}


// TextStyle-Header-XXL-YellowGrad_C TextStyle-Header-XXL-YellowGrad.Default__TextStyle-Header-XXL-YellowGrad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusXXLMinusYellowGrad_C* UTextStyleMinusHeaderMinusXXLMinusYellowGrad_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusXXLMinusYellowGrad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusXXLMinusYellowGrad_C*>(UTextStyleMinusHeaderMinusXXLMinusYellowGrad_C::StaticClass()->DefaultObject);

	return Default;
}

}


