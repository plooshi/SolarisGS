#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-L-Yellow.TextStyle-Header-L-Yellow_C
// (None)

class UClass* UTextStyleMinusHeaderMinusLMinusYellow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-L-Yellow_C");

	return Clss;
}


// TextStyle-Header-L-Yellow_C TextStyle-Header-L-Yellow.Default__TextStyle-Header-L-Yellow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusLMinusYellow_C* UTextStyleMinusHeaderMinusLMinusYellow_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusLMinusYellow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusLMinusYellow_C*>(UTextStyleMinusHeaderMinusLMinusYellow_C::StaticClass()->DefaultObject);

	return Default;
}

}


