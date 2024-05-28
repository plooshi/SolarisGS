#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-L-YellowGrad.TextStyle-Header-L-YellowGrad_C
// (None)

class UClass* UTextStyleMinusHeaderMinusLMinusYellowGrad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-L-YellowGrad_C");

	return Clss;
}


// TextStyle-Header-L-YellowGrad_C TextStyle-Header-L-YellowGrad.Default__TextStyle-Header-L-YellowGrad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusLMinusYellowGrad_C* UTextStyleMinusHeaderMinusLMinusYellowGrad_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusLMinusYellowGrad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusLMinusYellowGrad_C*>(UTextStyleMinusHeaderMinusLMinusYellowGrad_C::StaticClass()->DefaultObject);

	return Default;
}

}


