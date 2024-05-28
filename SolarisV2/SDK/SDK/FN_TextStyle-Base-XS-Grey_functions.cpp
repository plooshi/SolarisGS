#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-Grey.TextStyle-Base-XS-Grey_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusGrey_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-Grey_C");

	return Clss;
}


// TextStyle-Base-XS-Grey_C TextStyle-Base-XS-Grey.Default__TextStyle-Base-XS-Grey_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusGrey_C* UTextStyleMinusBaseMinusXSMinusGrey_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusGrey_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusGrey_C*>(UTextStyleMinusBaseMinusXSMinusGrey_C::StaticClass()->DefaultObject);

	return Default;
}

}


