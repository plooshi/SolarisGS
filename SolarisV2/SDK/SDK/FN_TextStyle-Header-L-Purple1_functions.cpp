#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-L-Purple1.TextStyle-Header-L-Purple1_C
// (None)

class UClass* UTextStyleMinusHeaderMinusLMinusPurple1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-L-Purple1_C");

	return Clss;
}


// TextStyle-Header-L-Purple1_C TextStyle-Header-L-Purple1.Default__TextStyle-Header-L-Purple1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusLMinusPurple1_C* UTextStyleMinusHeaderMinusLMinusPurple1_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusLMinusPurple1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusLMinusPurple1_C*>(UTextStyleMinusHeaderMinusLMinusPurple1_C::StaticClass()->DefaultObject);

	return Default;
}

}


