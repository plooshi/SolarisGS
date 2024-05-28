#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-L-Grey.TextStyle-Header-L-Grey_C
// (None)

class UClass* UTextStyleMinusHeaderMinusLMinusGrey_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-L-Grey_C");

	return Clss;
}


// TextStyle-Header-L-Grey_C TextStyle-Header-L-Grey.Default__TextStyle-Header-L-Grey_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusLMinusGrey_C* UTextStyleMinusHeaderMinusLMinusGrey_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusLMinusGrey_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusLMinusGrey_C*>(UTextStyleMinusHeaderMinusLMinusGrey_C::StaticClass()->DefaultObject);

	return Default;
}

}


