#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Button-Primary-M.TextStyle-Button-Primary-M_C
// (None)

class UClass* UTextStyleMinusButtonMinusPrimaryMinusM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Button-Primary-M_C");

	return Clss;
}


// TextStyle-Button-Primary-M_C TextStyle-Button-Primary-M.Default__TextStyle-Button-Primary-M_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusButtonMinusPrimaryMinusM_C* UTextStyleMinusButtonMinusPrimaryMinusM_C::GetDefaultObj()
{
	static class UTextStyleMinusButtonMinusPrimaryMinusM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusButtonMinusPrimaryMinusM_C*>(UTextStyleMinusButtonMinusPrimaryMinusM_C::StaticClass()->DefaultObject);

	return Default;
}

}


