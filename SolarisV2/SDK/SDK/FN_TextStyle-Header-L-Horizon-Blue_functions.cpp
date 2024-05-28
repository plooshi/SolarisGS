#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-L-Horizon-Blue.TextStyle-Header-L-Horizon-Blue_C
// (None)

class UClass* UTextStyleMinusHeaderMinusLMinusHorizonMinusBlue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-L-Horizon-Blue_C");

	return Clss;
}


// TextStyle-Header-L-Horizon-Blue_C TextStyle-Header-L-Horizon-Blue.Default__TextStyle-Header-L-Horizon-Blue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusLMinusHorizonMinusBlue_C* UTextStyleMinusHeaderMinusLMinusHorizonMinusBlue_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusLMinusHorizonMinusBlue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusLMinusHorizonMinusBlue_C*>(UTextStyleMinusHeaderMinusLMinusHorizonMinusBlue_C::StaticClass()->DefaultObject);

	return Default;
}

}


